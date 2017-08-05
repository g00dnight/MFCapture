#include "mainwindow.h"
#include "ui_mainwindow.h"

//#include "Processing.NDI.Lib.h"
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
            videoSources[videoSourceButton] = new StreamerWorker(i, mfInstance);
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
            // capture
            videoSources[clickedButton]->startStreaming();
        } else
            videoSources[clickedButton]->stopStreaming();

    }
}

// TODO: move NDI streaming to StreamerWorker

//void MainWindow::screenStreamer()
//{
//    // Create an NDI source that is called "My Video" and is clocked to the video.
//    const NDIlib_send_create_t ndiSenderCreateDesc = { "My Video", NULL, true, false };

//    // We create the NDI sender
//    NDIlib_send_instance_t ndiSender = NDIlib_send_create(&ndiSenderCreateDesc);
//    if (!ndiSender) {
//        qCritical() << Q_FUNC_INFO << "Failed to create NDI sender";
//        return;
//    }

//    // Provide a meta-data registration that allows people to know what we are. Note that this is optional.
//    // Note that it is possible for senders to also register their preferred video formats.
//    static const char* connectionString = "<ndi_product long_name=\"NDILib Screen grab example.\" "
//                                             "             short_name=\"NDILib screengrab\" "
//                                             "             manufacturer=\"test.\" "
//                                             "             version=\"1.000.000\" "
//                                             "             session=\"default\" "
//                                             "             model_name=\"S1\" "
//                                             "             serial=\"ABCDEFG\"/>";
//    const NDIlib_metadata_frame_t NDI_connection_type = {
//        // The length
//        (int)::strlen(connectionString),
//        // Timecode (synthesized for us !)
//        NDIlib_send_timecode_synthesize,
//        // The string
//        (char*)connectionString
//    };
//    NDIlib_send_add_connection_metadata(ndiSender, &NDI_connection_type);

//    NDIlib_video_frame_t ndiVideoFrame = {
//        0, 0,
//        NDIlib_FourCC_type_BGRA, // pixel format
//        25000, 1000, // frame rate
//        0,
//        NDIlib_frame_format_type_interleaved,
//        NDIlib_send_timecode_synthesize, // Timecode (synthesized for us !)
//        nullptr,
//        0
//    };

//    while (streaming) {
//        QImage screenshot = screen->grabWindow(0).toImage();

//        ndiVideoFrame.xres = screenshot.width();
//        ndiVideoFrame.yres = screenshot.height();
//        ndiVideoFrame.line_stride_in_bytes = ndiVideoFrame.xres * 4;

//        ndiVideoFrame.p_data = screenshot.bits();
//        NDIlib_send_send_video(ndiSender, &ndiVideoFrame);
//    }

//    NDIlib_send_destroy(ndiSender);
//}


