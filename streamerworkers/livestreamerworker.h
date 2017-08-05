#ifndef STREAMERWORKER_H
#define STREAMERWORKER_H

#include "streamerworkerbase.h"

class LiveStreamerWorker : public StreamerWorkerBase
{
    Q_OBJECT
public:
    LiveStreamerWorker(int mfDeviceIndex, CComPtr<IMFDevice> &mfInstance);

    virtual bool startStreaming(QString streamName);
    virtual void stopStreaming();

protected:
    virtual void run();

private:
    int mfDeviceIndex;

};

#endif // STREAMERWORKER_H
