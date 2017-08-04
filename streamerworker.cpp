#include "streamerworker.h"

#include "MFormats.h"

#include <windows.h>
#include <QDebug>
// workaround for Qt5.9 bug: https://bugreports.qt.io/browse/QTBUG-56634
#ifndef Q_MOC_RUN
#include <atlbase.h>
#endif

StreamerWorker::StreamerWorker(int mfDeviceIndex)
    : mfDeviceIndex(mfDeviceIndex)
    , streaming(false)
{
    // Create MFLive instance
    HRESULT hr = mfInstance.CoCreateInstance(__uuidof(MFLive));
    if (FAILED(hr)) {
        qCritical() << Q_FUNC_INFO << "mfLiveInstance.CoCreateInstance FAILED";
        return;
    }
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
