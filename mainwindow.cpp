#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "livestreamerworker.h"
#include "filestreamerworker.h"

#include <QScreen>
#include <QtConcurrentRun>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->videoSourcesLayout->setAlignment(Qt::AlignTop);

    HRESULT hr = mfInstance.CoCreateInstance(__uuidof(MFLive));

    //Initialize preview
    hr = mfPreview.CoCreateInstance(__uuidof(MFPreview));
    if (FAILED(hr))
    {
        qCritical() << Q_FUNC_INFO << "ERROR: Can't create MFPreview instance";
        return;
    }
    hr = mfPreview->PreviewWindowSet(CComBSTR(""), ui->previewLabel->winId());
    if (FAILED(hr))
    {
        qCritical() << Q_FUNC_INFO << "PreviewWindowSet FAILED";
        return;
    }
    hr = mfPreview->PreviewEnable(CComBSTR(L""), false, true);
    if (FAILED(hr))
    {
        qCritical() << Q_FUNC_INFO << "PreviewEnable FAILED";
        return;
    }
    mfReceiverPreview = CComQIPtr<IMFReceiver>(mfPreview);

    int deviceCount;
    hr = mfInstance->DeviceGetCount(eMFDT_Video, &deviceCount);
    if (FAILED(hr)) {
        qCritical() << Q_FUNC_INFO << "DeviceGetCount FAILED";
        return;
    }

    BOOL isBusy = false;
    for (int i = 0; i < deviceCount; ++i) {
        BSTR devName;
        mfInstance->DeviceGetByIndex(eMFDT_Video, i, &devName, &isBusy);

        QString buttonName((QChar*)devName, (int)wcslen(devName));
        if (buttonName != "" && buttonName != "<None>") {
            QPushButton* videoSourceButton = new QPushButton(buttonName);
            videoSourceButton->setCheckable(true);
            ui->videoSourcesLayout->addWidget(videoSourceButton);
            videoSources[videoSourceButton] = new LiveStreamerWorker(i, mfInstance);
        }        
        ::SysFreeString(devName);
    }

    QPushButton* videoFileButton = new QPushButton("Video file");
    videoFileButton->setCheckable(true);
    ui->videoSourcesLayout->addWidget(videoFileButton);
    videoSources[videoFileButton] = new FileStreamerWorker(mfInstance);

    foreach(QPushButton* videoSourceButton, videoSources.keys())
        connect(videoSourceButton, SIGNAL(clicked(bool)), this, SLOT(onVideoSourceClicked(bool)));   
}

MainWindow::~MainWindow()
{
    delete ui;

    qDeleteAll(videoSources);
    videoSources.clear();
}

void MainWindow::onVideoSourceClicked(bool checked)
{    
    QPushButton* clickedButton = (QPushButton*)sender();
    if (videoSources.count(clickedButton)) {
        if (checked) {
            foreach (StreamerWorkerBase* streamerWorker, videoSources)
                streamerWorker->setPreviewReceiver(nullptr);
            videoSources[clickedButton]->setPreviewReceiver(mfReceiverPreview);

            clickedButton->setChecked(videoSources[clickedButton]->startStreaming(clickedButton->text()));

        } else
            videoSources[clickedButton]->stopStreaming();

    }
}


