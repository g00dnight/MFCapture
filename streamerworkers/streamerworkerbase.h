#ifndef STREAMERWORKERBASE_H
#define STREAMERWORKERBASE_H

#include "MFormats.h"

// workaround for Qt5.9 bug: https://bugreports.qt.io/browse/QTBUG-56634
#ifndef Q_MOC_RUN
#include <atlbase.h>
#endif
#include <QThread>
#include <atomic>

class StreamerWorkerBase : public QThread
{
    Q_OBJECT
public:
    StreamerWorkerBase(CComPtr<IMFDevice> &mfInstance);
    virtual ~StreamerWorkerBase();

    virtual bool startStreaming(QString streamName);
    virtual void stopStreaming();

protected:
    std::atomic_bool streaming;

    CComPtr<IMFDevice>& mfInstance;
    QString streamName;
};

#endif // STREAMERWORKERBASE_H
