#include "mainwindow.h"
#include "widget.h"
#include "ui_mainwindow.h"
#include "udpchat.h"
#include "myserver.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //UdpChat chat;
    net = new NetDialog(this);
    srv = new MyServer(2324,this);
    client = new MyClient("localhost", 2323);
    ui->verticalLayout_2->addWidget(client);
    ui->verticalLayout->addWidget(srv);
    connect(net, SIGNAL(apply()), this, SLOT(on_newParams()));
    connect(this, SIGNAL(imageReady()), client, SLOT(slotSendToServerImage()));
    connect(srv, SIGNAL(imageRecieved()), this, SLOT(onImageRecieved()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_2_triggered()
{
    Widget* w = new Widget();
    w->show();
}

void MainWindow::on_action_triggered()
{

}

void MainWindow::on_newParams()
{
    disconnect(this, SIGNAL(imageReady()), client, SLOT(slotSendToServerImage()));
    delete client;
    delete srv;
    srv = new MyServer(net->getPort(), this);
    client = new MyClient(net->getAddr().toString(), net->getRemotePort());
    //client->setImage(new QImage("C:/zaharenko/TeleLeukemia/build/out000.bmp"));
    connect(this, SIGNAL(imageReady()), client, SLOT(slotSendToServerImage()));
    connect(srv, SIGNAL(imageRecieved()), this, SLOT(onImageRecieved()));
    ui->verticalLayout->addWidget(srv);
    ui->verticalLayout_2->addWidget(client);
}

void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->clear();

    QStringList filePathFewImage = QFileDialog::getOpenFileNames();

    pFiles = (QFileInfo(filePathFewImage[0]).absolutePath());

    foreach (QString file, filePathFewImage)
        ui->listWidget->addItem(QFileInfo(file).fileName());

}

void MainWindow::on_action_3_triggered()
{
    net->show();
}

void MainWindow::onImageRecieved()
{
    QPixmap pmp;
    pmp.convertFromImage(*srv->getImage());
    QGraphicsScene *sc = new QGraphicsScene;
    sc->addPixmap(pmp);
    ui->graphicsView->setScene(sc);
}

void MainWindow::on_pushButton_2_clicked()
{
    int index = ui->listWidget->currentRow();

    QImage* img = new QImage(pFiles + "/" +ui->listWidget->item(index)->text());

    client->setImage(img);

    imageReady();
}

void MainWindow::on_action_4_triggered()
{
    c.show();
}
