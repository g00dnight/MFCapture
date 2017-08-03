#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "Processing.NDI.Lib.h"

#include <QScreen>
#include <QtConcurrentRun>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    screen = QGuiApplication::primaryScreen();
    connect(ui->grabButton, SIGNAL(clicked(bool)), this, SLOT(onGrabButtonClick(bool)));

}

MainWindow::~MainWindow()
{
    delete ui;

    streaming = false;
    streamerFuture.waitForFinished();
}

void MainWindow::onGrabButtonClick(bool clicked)
{
    streaming = clicked;
    if (streaming) {
        ui->grabButton->setText("Stop");
        streamerFuture.waitForFinished();
        streamerFuture = QtConcurrent::run(this, &MainWindow::screenStreamer);
    }
    else
        ui->grabButton->setText("Start");
}

void MainWindow::screenStreamer()
{
    // Create an NDI source that is called "My Video" and is clocked to the video.
    const NDIlib_send_create_t ndiSenderCreateDesc = { "My Video", NULL, true, false };

    // We create the NDI sender
    NDIlib_send_instance_t ndiSender = NDIlib_send_create(&ndiSenderCreateDesc);
    if (!ndiSender) {
        qCritical() << Q_FUNC_INFO << "Failed to create NDI sender";
        return;
    }

    // Provide a meta-data registration that allows people to know what we are. Note that this is optional.
    // Note that it is possible for senders to also register their preferred video formats.
    static const char* connectionString = "<ndi_product long_name=\"NDILib Screen grab example.\" "
                                             "             short_name=\"NDILib screengrab\" "
                                             "             manufacturer=\"test.\" "
                                             "             version=\"1.000.000\" "
                                             "             session=\"default\" "
                                             "             model_name=\"S1\" "
                                             "             serial=\"ABCDEFG\"/>";
    const NDIlib_metadata_frame_t NDI_connection_type = {
        // The length
        (int)::strlen(connectionString),
        // Timecode (synthesized for us !)
        NDIlib_send_timecode_synthesize,
        // The string
        (char*)connectionString
    };
    NDIlib_send_add_connection_metadata(ndiSender, &NDI_connection_type);

    NDIlib_video_frame_t ndiVideoFrame = {
        0, 0,
        NDIlib_FourCC_type_BGRA, // pixel format
        25000, 1000, // frame rate
        0,
        NDIlib_frame_format_type_interleaved,
        NDIlib_send_timecode_synthesize, // Timecode (synthesized for us !)
        nullptr,
        0
    };

    while (streaming) {
        QImage screenshot = screen->grabWindow(0).toImage();

        ndiVideoFrame.xres = screenshot.width();
        ndiVideoFrame.yres = screenshot.height();
        ndiVideoFrame.line_stride_in_bytes = ndiVideoFrame.xres * 4;

        ndiVideoFrame.p_data = screenshot.bits();
        NDIlib_send_send_video(ndiSender, &ndiVideoFrame);
    }

    NDIlib_send_destroy(ndiSender);
}

