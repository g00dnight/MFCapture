#ifndef FILESTREAMERWORKER_H
#define FILESTREAMERWORKER_H

#include "streamerworkerbase.h"

#include <QFileDialog>

class FileStreamerWorker : public StreamerWorkerBase
{
    Q_OBJECT
public:
    FileStreamerWorker(CComPtr<IMFDevice> &mfInstance);
    virtual ~FileStreamerWorker();

    virtual bool startStreaming(QString streamName);
    virtual void stopStreaming(QString streamName);

protected:
    virtual void run();

private:
    QFileDialog* fileDialog;

    CComPtr<IMFReader> mfReader;
};

#endif // FILESTREAMERWORKER_H
