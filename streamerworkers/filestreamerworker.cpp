#include "filestreamerworker.h"

#include <QDebug>

FileStreamerWorker::FileStreamerWorker(CComPtr<IMFDevice> &mfInstance)
    : StreamerWorkerBase(mfInstance)
{    
    // Create MFReader instance
    HRESULT hr = mfReader.CoCreateInstance(__uuidof(MFReader));
    if (FAILED(hr))
        qCritical() << Q_FUNC_INFO << "ERROR: Can't create MFReader instance";

}

FileStreamerWorker::~FileStreamerWorker()
{
}

bool FileStreamerWorker::startStreaming(QString streamName)
{
    QString fileName = QFileDialog::getOpenFileName(nullptr, tr("Select video file"),
                                                    "",
                                                    tr("Videos (*.avi *.mov *.mkv *.mp4 *.mpeg *.ts *.m2ts)"),
                                                    nullptr,
                                                    QFileDialog::DontUseNativeDialog);
    if (fileName == "")
        return false;

    qDebug() << Q_FUNC_INFO << "filename:" << fileName;
    BSTR fileNameBStr = ::SysAllocString(fileName.toStdWString().c_str());

    //Open File
    HRESULT hr = mfReader->ReaderOpen(fileNameBStr, CComBSTR(L""));
    ::SysFreeString(fileNameBStr);
    if (FAILED(hr))
    {
        qCritical() << Q_FUNC_INFO << "ERROR: Can't open this media file";
        return false;
    }

    return StreamerWorkerBase::startStreaming(streamName);
}

void FileStreamerWorker::stopStreaming(QString streamName)
{
    mfReader->ReaderClose();
    StreamerWorkerBase::stopStreaming();
}

void FileStreamerWorker::run()
{
    M_TIME mTime = {};
    M_AV_PROPS avProps = {};
    CComPtr<IMFFrame> mfFrame;

    while (streaming) {
        mfFrame = NULL;
        //Get frame by number. -1 as frame number means next frame
        HRESULT hr = mfReader->SourceFrameConvertedGetByTime(&avProps, -1, -1, &mfFrame, CComBSTR(L""));
        if (mfFrame)
        {
            //Check for the last frame to stop the playback
            hr = mfFrame->MFTimeGet(&mTime);
            if ((mTime.eFFlags & eMFF_Last) != 0)
                break;
            streamFrame(mfFrame);
        }

    }
}

