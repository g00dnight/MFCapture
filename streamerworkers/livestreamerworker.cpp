#include "livestreamerworker.h"

#include "MFormats.h"

#include <windows.h>
#include <QDebug>

LiveStreamerWorker::LiveStreamerWorker(int mfDeviceIndex, CComPtr<IMFDevice>& mfInstance)
    : StreamerWorkerBase(mfInstance)
    , mfDeviceIndex(mfDeviceIndex)
{
}

bool LiveStreamerWorker::startStreaming(QString streamName)
{
    HRESULT hr = mfInstance->DeviceSet(eMFDT_ExtAudio, mfDeviceIndex, CComBSTR(L""));
    if (FAILED(hr)) {
        qCritical() << Q_FUNC_INFO << "DeviceSet FAILED";
        return false;
    }
    return StreamerWorkerBase::startStreaming(streamName);
}

void LiveStreamerWorker::stopStreaming()
{
    StreamerWorkerBase::stopStreaming();
    HRESULT hr = mfInstance->DeviceSet(eMFDT_ExtAudio, mfDeviceIndex, CComBSTR(L""));
    if (FAILED(hr)) {
        qCritical() << Q_FUNC_INFO << "DeviceSet FAILED";
        return;
    }
    mfInstance->DeviceClose();
}

void LiveStreamerWorker::run()
{
    // M_AV_PROPS avProps = {};

    CComQIPtr<IMFSource> mfSource(mfInstance);
    CComPtr<IMFFrame> mfFrame;

    while(streaming) {
        mfFrame = nullptr;
        //Get frames one by one
        mfSource->SourceFrameGet(-1, &mfFrame, CComBSTR(L""));
        qDebug() << Q_FUNC_INFO << mfFrame; // TMP
//        if (mfFrame)
//            streamFrame(mfFrame);
    }    
}
