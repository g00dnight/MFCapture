#include "mainwindow.h"
#include "Processing.NDI.Lib.h"

#include <QApplication>
#include <windows.h>

int main(int argc, char *argv[])
{
    //Initialize COM
    HRESULT hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
    if (FAILED(hr))
    {
        qCritical() << Q_FUNC_INFO << "ERROR: Can't initialize COM ";
        return 0;
    }

    if (!NDIlib_initialize()) {
        qCritical() << Q_FUNC_INFO << "Cannot run NDI.";
        return 0;
    }

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    a.exec();

    NDIlib_destroy();
    ::CoUninitialize();

    return 0;
}
