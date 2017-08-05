#include "streamerworkerbase.h"

StreamerWorkerBase::StreamerWorkerBase(CComPtr<IMFDevice> &mfInstance)
    : mfInstance(mfInstance)
    , streaming(false)
{

}

StreamerWorkerBase::~StreamerWorkerBase()
{
    stopStreaming();
}

void StreamerWorkerBase::startStreaming(QString streamName)
{
    this->streamName =streamName;
    streaming = true;
    start();
}

void StreamerWorkerBase::stopStreaming()
{
    streaming = false;
    wait();
}
