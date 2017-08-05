#ifndef STREAMERWORKERBASE_H
#define STREAMERWORKERBASE_H

#include "MFormats.h"
#include "Processing.NDI.Lib.h"

// workaround for Qt5.9 bug: https://bugreports.qt.io/browse/QTBUG-56634
#ifndef Q_MOC_RUN
#include <atlbase.h>
#endif
#include <QThread>
#include <atomic>
#include <QMutex>

class StreamerWorkerBase : public QThread
{
    Q_OBJECT
public:
    StreamerWorkerBase(CComPtr<IMFDevice> &mfInstance);
    virtual ~StreamerWorkerBase();

    virtual bool startStreaming(QString streamName);
    virtual void stopStreaming();

    void setPreviewReceiver(CComQIPtr<IMFReceiver> mfReceiverPreview);

protected:
    void streamFrame(CComPtr<IMFFrame> mfFrame);

    std::atomic_bool streaming;

    CComPtr<IMFDevice>& mfInstance;
    MF_FRAME_INFO frameInfo;    

    NDIlib_send_instance_t ndiSender;
    NDIlib_video_frame_t ndiVideoFrame;

private:
    QMutex previewReceivermutex;
    CComQIPtr<IMFReceiver> mfReceiverPreview;
};

#endif // STREAMERWORKERBASE_H
