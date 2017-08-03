#-------------------------------------------------
#
# Project created by QtCreator 2017-08-03T08:48:51
#
#-------------------------------------------------

QT       += core gui concurrent

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NDIScreenGrabTest
TEMPLATE = app

CONFIG += c++11

INCLUDEPATH += ndi/include

osx {
    NDI_DIR = -L$$PWD/ndi/lib/osx/x64
    LIBS += -L$$NDI_DIR -lndi

# fix for "dyld: Library not loaded: @rpath/libndi.dylib" on OS X
    NDI_LIBS.files = $$NDI_DIR/libndi.dylib
    NDI_LIBS.path = Contents/Frameworks
    QMAKE_BUNDLE_DATA += NDI_LIBS
    QMAKE_POST_LINK += install_name_tool -change @rpath/libndi.dylib @executable_path/../Frameworks/libndi.dylib $$OUT_PWD/$${TARGET}.app/Contents/MacOS/$${TARGET}
}

windows {
    contains(TARGET_ARCH, x86_64) {
        LIBS += -L$$PWD/ndi/lib/win/x64 -lProcessing.NDI.Lib.x64
    } else {
        LIBS += -L$$PWD/ndi/lib/win/x86 -lProcessing.NDI.Lib.x86
    }
}

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
