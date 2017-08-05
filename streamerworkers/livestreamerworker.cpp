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
    HRESULT hr = mfInstance->DeviceSet(eMFDT_Video, mfDeviceIndex, CComBSTR(L""));
    if (FAILED(hr)) {
        qCritical() << Q_FUNC_INFO << "DeviceSet FAILED";
        return false;
    }
    return StreamerWorkerBase::startStreaming(streamName);
}

void LiveStreamerWorker::stopStreaming()
{
    StreamerWorkerBase::stopStreaming();
    HRESULT hr = mfInstance->DeviceSet(eMFDT_Video, mfDeviceIndex, CComBSTR(L""));
    if (FAILED(hr)) {
        qCritical() << Q_FUNC_INFO << "DeviceSet FAILED";
        return;
    }
    mfInstance->DeviceClose();
}

void LiveStreamerWorker::run()
{
    M_AV_PROPS avProps = {};
    CComQIPtr<IMFSource> mfSource(mfInstance);
    CComPtr<IMFFrame> mfFrame;

    while(streaming) {
        mfFrame = nullptr;
        //Get frames one by one
        mfSource->SourceFrameConvertedGet(&avProps, -1, &mfFrame, CComBSTR(L""));
        if (mfFrame)
            streamFrame(mfFrame);
    }    
}
