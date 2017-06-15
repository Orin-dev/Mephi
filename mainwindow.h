#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "udpchat.h"
#include "netdialog.h"
#include "myserver.h"
#include "myclient.h"
#include "classifier.h"
#include <QFileDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_2_triggered();

    void on_action_triggered();

    void on_pushButton_clicked();

    void on_newParams();

    void on_action_3_triggered();

    void on_pushButton_2_clicked();

    void onImageRecieved();

    void on_action_4_triggered();

private:
    Ui::MainWindow *ui;
    UdpChat chat;
    NetDialog* net;
    MyServer* srv;
    MyClient* client;
    Classifier c;
    QString pFiles;
signals:
    void imageReady();
};

#endif // MAINWINDOW_H
