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

bool StreamerWorkerBase::startStreaming(QString streamName)
{
    if (streaming)
        return false;

    this->streamName = streamName;
    streaming = true;
    start();
    return true;
}

void StreamerWorkerBase::stopStreaming()
{
    streaming = false;
    wait();
}
