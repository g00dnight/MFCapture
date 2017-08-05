#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "livestreamerworker.h"

#include <QScreen>
#include <QtConcurrentRun>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->videoSourcesLayout->setAlignment(Qt::AlignTop);

    HRESULT hr = mfInstance.CoCreateInstance(__uuidof(MFLive));

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
            clickedButton->setChecked(videoSources[clickedButton]->startStreaming(clickedButton->text()));
        } else
            videoSources[clickedButton]->stopStreaming();

    }
}


