#include "mythread.h"
#include <QDebug>
#include <windows.h>
#include <widget.h>

MyThread::MyThread(QString s) : name(s)
{
}

void MyThread::run()
{
Widget* w = new Widget();
w->show();
}
void MyThread::receiveGlobalVar(int globalVar)
{
qDebug() << "globalVar = " << globalVar;
this->globalVar = globalVar;
}
