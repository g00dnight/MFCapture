#include "streamerworkerbase.h"

#include <QDebug>

StreamerWorkerBase::StreamerWorkerBase(CComPtr<IMFDevice> &mfInstance)
    : mfInstance(mfInstance)
    , streaming(false)
{
    frameInfo = {};
}

StreamerWorkerBase::~StreamerWorkerBase()
{
    stopStreaming();
}

bool StreamerWorkerBase::startStreaming(QString streamName)
{
    if (streaming)
        return false;

    streaming = true;

    // Create an NDI source that is clocked to the video.
    std::string streamNameStr = streamName.toStdString();
    const NDIlib_send_create_t ndiSenderCreateDesc = { streamNameStr.c_str(), NULL, true, false };

    // We create the NDI sender
    ndiSender = NDIlib_send_create(&ndiSenderCreateDesc);
    if (!ndiSender) {
        qCritical() << Q_FUNC_INFO << "Failed to create NDI sender";
        return false;
    }

    // Provide a meta-data registration that allows people to know what we are. Note that this is optional.
    // Note that it is possible for senders to also register their preferred video formats.
    static const char* connectionString = "<ndi_product long_name=\"MFCapture\" "
                                             "             short_name=\"MFCapture\" "
                                             "             manufacturer=\"test.\" "
                                             "             version=\"1.000.000\" "
                                             "             session=\"default\" "
                                             "             model_name=\"S1\" "
                                             "             serial=\"ABCDEFG\"/>";
    const NDIlib_metadata_frame_t NDI_connection_type = {
        // The length
        (int)::strlen(connectionString),
        // Timecode (synthesized for us !)
        NDIlib_send_timecode_synthesize,
        // The string
        (char*)connectionString
    };
    NDIlib_send_add_connection_metadata(ndiSender, &NDI_connection_type);

    ndiVideoFrame = {
        0, 0,
        NDIlib_FourCC_type_UYVY, // pixel format
        25000, 1000, // frame rate
        0,
        NDIlib_frame_format_type_interleaved,
        NDIlib_send_timecode_synthesize, // Timecode (synthesized for us !)
        nullptr,
        0
    };

    start();
    return true;
}

void StreamerWorkerBase::stopStreaming()
{
    if (streaming) {
        streaming = false;
        wait();
        NDIlib_send_destroy(ndiSender);
    }
}

void StreamerWorkerBase::streamFrame(CComPtr<IMFFrame> mfFrame)
{
    mfFrame->MFAllGet(&frameInfo);
    ndiVideoFrame.xres = frameInfo.avProps.vidProps.nWidth;
    ndiVideoFrame.yres = frameInfo.avProps.vidProps.nHeight;
    ndiVideoFrame.line_stride_in_bytes = ndiVideoFrame.xres * 2;
    ndiVideoFrame.p_data = (uint8_t*)frameInfo.lpVideo;
    NDIlib_send_send_video(ndiSender, &ndiVideoFrame);
}
