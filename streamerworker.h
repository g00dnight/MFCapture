#ifndef STREAMERWORKER_H
#define STREAMERWORKER_H

#include "MFormats.h"

#include <QThread>
#include <atomic>
// workaround for Qt5.9 bug: https://bugreports.qt.io/browse/QTBUG-56634
#ifndef Q_MOC_RUN
#include <atlbase.h>
#endif

class StreamerWorker : public QThread
{
    Q_OBJECT
public:
    StreamerWorker(int mfDeviceIndex, CComPtr<IMFDevice> &mfInstance, QString streamName);
    virtual ~StreamerWorker();

    void startStreaming();
    void stopStreaming();

protected:
    virtual void run();

private:
    int mfDeviceIndex;
    std::atomic_bool streaming;

    CComPtr<IMFDevice>& mfInstance;
    QString streamName;
};

#endif // STREAMERWORKER_H
