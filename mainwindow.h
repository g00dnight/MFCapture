#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "streamerworkerbase.h"
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
    Ui::MainWindow *ui;

    QMap<QPushButton*, StreamerWorkerBase*> videoSources;

    CComPtr<IMFDevice> mfInstance;
    CComPtr<IMPreview> mfPreview;
    CComQIPtr<IMFReceiver> mfReceiverPreview;
};

#endif // MAINWINDOW_H
