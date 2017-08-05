#include "streamerworkerbase.h"

StreamerWorkerBase::StreamerWorkerBase(CComPtr<IMFDevice> &mfInstance, QString streamName)
    : mfInstance(mfInstance)
    , streamName(streamName)
    , streaming(false)
{

}

StreamerWorkerBase::~StreamerWorkerBase()
{
    stopStreaming();
}

void StreamerWorkerBase::startStreaming()
{
    streaming = true;
    start();
}

void StreamerWorkerBase::stopStreaming()
{
    streaming = false;
    wait();
}
