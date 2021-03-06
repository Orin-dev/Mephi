#-------------------------------------------------
#
# Project created by QtCreator 2017-03-28T22:10:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets network

TARGET = TeleLeukemia
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cellparams.cpp \
    dialog.cpp \
    mygraphicsobject.cpp \
    propdialog.cpp \
    showwidget.cpp \
    widget.cpp \
    mythread.cpp \
    udpchat.cpp \
    netdialog.cpp \
    myserver.cpp \
    myclient.cpp

HEADERS  += mainwindow.h \
    cellparams.h \
    dialog.h \
    mygraphicsobject.h \
    propdialog.h \
    showwidget.h \
    widget.h \
    mythread.h \
    udpchat.h \
    netdialog.h \
    myserver.h \
    myclient.h \

FORMS    += mainwindow.ui \
    dialog.ui \
    form.ui \
    showwidget.ui \
    widget.ui \
    netdialog.ui \
    propdialog.ui \




win32:CONFIG(release, debug|release): LIBS += -L$$PWD/ -lqtcsv1
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/ -lqtcsv1d

INCLUDEPATH += $$PWD/
DEPENDPATH += $$PWD/
