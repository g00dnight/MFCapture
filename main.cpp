#include "mainwindow.h"
#include "Processing.NDI.Lib.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    if (!NDIlib_initialize()) {
        qDebug() << Q_FUNC_INFO << "Cannot run NDI.";
        return 0;
    }

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    a.exec();
    NDIlib_destroy();
    return 0;
}
