#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "streamerworker.h"
#include "MFormats.h"

#include <QMainWindow>
#include <QFuture>
#include <atomic>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void onVideoSourceClicked(bool checked);

private:
    //void screenStreamer();

    Ui::MainWindow *ui;

    QMap<QPushButton*, StreamerWorker*> videoSources; // QPushButton -> device index in MFormats
    CComPtr<IMFDevice> mfInstance;
};

#endif // MAINWINDOW_H
