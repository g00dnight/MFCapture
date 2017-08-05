#include "streamerworker.h"

#include "MFormats.h"

#include <windows.h>
#include <QDebug>

StreamerWorker::StreamerWorker(int mfDeviceIndex, CComPtr<IMFDevice>& mfInstance)
    : mfDeviceIndex(mfDeviceIndex)
    , mfInstance(mfInstance)
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
    M_AV_PROPS avProps = {};
    CComQIPtr<IMFSource> mfSource(mfInstance);
    CComPtr<IMFFrame> mfFrame;
    while(streaming) {
        mfFrame = nullptr;
        //Get frames one by one
        mfSource->SourceFrameConvertedGet(&avProps, -1, &mfFrame, CComBSTR(L""));
        if (mfFrame)
        {
            // TODO: NDI streaming
        }
    }
}
