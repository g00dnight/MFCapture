#include "streamerworker.h"

#include "MFormats.h"
#include "Processing.NDI.Lib.h"

#include <windows.h>
#include <QDebug>

StreamerWorker::StreamerWorker(int mfDeviceIndex, CComPtr<IMFDevice>& mfInstance, QString streamName)
    : mfDeviceIndex(mfDeviceIndex)
    , mfInstance(mfInstance)
    , streamName(streamName)
    , streaming(false)
{
}

StreamerWorker::~StreamerWorker()
{
    stopStreaming();
}

void StreamerWorker::startStreaming()
{
    HRESULT hr = mfInstance->DeviceSet(eMFDT_Video, mfDeviceIndex, CComBSTR(L""));
    if (FAILED(hr)) {
        qCritical() << Q_FUNC_INFO << "DeviceSet FAILED";
        return;
    }
    streaming = true;
    start();
}

void StreamerWorker::stopStreaming()
{
    streaming = false;
    wait();
    HRESULT hr = mfInstance->DeviceSet(eMFDT_Video, mfDeviceIndex, CComBSTR(L""));
    if (FAILED(hr)) {
        qCritical() << Q_FUNC_INFO << "DeviceSet FAILED";
        return;
    }
    mfInstance->DeviceClose();
}

void StreamerWorker::run()
{
    // Create an NDI source that is clocked to the video.
    std::string streamNameStr = streamName.toStdString();
    const NDIlib_send_create_t ndiSenderCreateDesc = { streamNameStr.c_str(), NULL, true, false };

    // We create the NDI sender
    NDIlib_send_instance_t ndiSender = NDIlib_send_create(&ndiSenderCreateDesc);
    if (!ndiSender) {
        qCritical() << Q_FUNC_INFO << "Failed to create NDI sender";
        return;
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

    NDIlib_video_frame_t ndiVideoFrame = {
        0, 0,
        NDIlib_FourCC_type_UYVY, // pixel format
        25000, 1000, // frame rate
        0,
        NDIlib_frame_format_type_interleaved,
        NDIlib_send_timecode_synthesize, // Timecode (synthesized for us !)
        nullptr,
        0
    };

    M_AV_PROPS avProps = {};
    MF_FRAME_INFO frameInfo = {};
    CComQIPtr<IMFSource> mfSource(mfInstance);
    CComPtr<IMFFrame> mfFrame;

    while(streaming) {
        mfFrame = nullptr;
        //Get frames one by one
        mfSource->SourceFrameConvertedGet(&avProps, -1, &mfFrame, CComBSTR(L""));
        if (mfFrame) {
            mfFrame->MFAllGet(&frameInfo);

            ndiVideoFrame.xres = frameInfo.avProps.vidProps.nWidth;
            ndiVideoFrame.yres = frameInfo.avProps.vidProps.nHeight;
            ndiVideoFrame.line_stride_in_bytes = ndiVideoFrame.xres * 2;
            ndiVideoFrame.p_data = (uint8_t*)frameInfo.lpVideo;
            NDIlib_send_send_video(ndiSender, &ndiVideoFrame);
        }
    }

    NDIlib_send_destroy(ndiSender);
}
