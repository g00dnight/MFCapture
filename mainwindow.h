#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFuture>
#include <atomic>

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
    void onGrabButtonClick(bool clicked);

private:
    void screenStreamer();

    Ui::MainWindow *ui;

    std::atomic_bool streaming;
    QFuture<void> streamerFuture;
    QScreen *screen;

};

#endif // MAINWINDOW_H
