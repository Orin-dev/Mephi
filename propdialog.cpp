#include "propdialog.h"
#include "ui_propdialog.h"
#include "include/qtcsv/reader.h"
#include "include/qtcsv/stringdata.h"
#include "include/qtcsv/writer.h"
#include <QDir>

PropDialog::PropDialog(QWidget *parent, QImage* img, QImage * dst) :
    QDialog(parent),my(0),
    ui(new Ui::PropDialog)
{
    ui->setupUi(this);
 //   int i=0;
    this->img=img;
    this->dst=dst;
    ui->graphicsView->setScene(&sc);
    ui->listWidget->addItem(QString::number(1));
    my = new MyGraphicsItem(QPixmap());
    sc.addItem(my);

    mini = NULL;

}

PropDialog::~PropDialog()
{
    delete ui;
}

void PropDialog::on_listWidget_itemClicked(QListWidgetItem *item)
{
    if (mini != NULL)
        delete mini;

    int index = ui->listWidget->row(item);
    ui->lineEdit->setText(QString::number(props->at(index).XC));
    ui->lineEdit_2->setText(QString::number(props->at(index).YC));
    ui->lineEdit_5->setText(QString::number(props->at(index).S));
    //ui->lineEdit_6->setText(QString::number(props->at(index).color));
    ui->lineEdit_3->setText(QString::number(props->at(index).Shape));
    index=ui->listWidget->currentIndex().row();
    int color = props->at(index).color;
    int h = props->at(index).ur.Y - props->at(index).dl.Y;
    int w = props->at(index).ur.X - props->at(index).dl.X;
    QImage * mini = new QImage(w, h, img->format() );
    int x=0,y=0;
    int x1=props->at(index).ur.X;
    int y1=props->at(index).ur.Y;
    for(int i=props->at(index).dl.X; i<x1 ;i++) //imageSize.X-1
    {   for(int j=props->at(index).dl.Y; j<y1;j++)
          {
            int a=(QColor(dst->pixel(i,j)).green());
            if ((a==color))
            {
              mini->setPixel(x,y,img->pixel(i,j));
            }
            else
                mini->setPixel(x,y,qRgb(0,0,0));
            y++;
          }
        y=0;
        x++;
    }
   // my = new MyGraphicsItem(QPixmap::fromImage(*mini));
    //my = new MyGraphicsItem(QPixmap::fromImage(*mini));
    if(mini)
    my->setPixmap(QPixmap::fromImage(*mini));
   //my->setPixmap(QPixmap::fromImage(*mini));
   //sc.addItem(my);
   //delete mini;
  //  delete my;

}

void PropDialog::setProps(QVector<CellProps> * pr)
{
    props=pr;
    for(int i=1;i<props->size();i++)
        ui->listWidget->addItem(QString::number(i+1));
}

void PropDialog::setImage(QImage &src)
{
    img=new QImage(src);
}

void PropDialog::setDst(QImage &dst)
{
    this->dst=new QImage(dst);
}

void PropDialog::clear()
{
//ui->listWidget->clear();
      int n = ui->listWidget->count() - 1;
      for(int j=n; j>=1; j--) {
        QListWidgetItem *it = ui->listWidget->item(j);
        delete it;
      }
}

QPushButton* PropDialog::getButton()
{
    return ui->pushButton;
}

QImage* PropDialog::getImage()
{
    return img;
}


QImage* PropDialog::getDst()
{
    return dst;
}



void PropDialog::on_pushButton_clicked()
{
    int index = 0;
    index=ui->listWidget->currentIndex().row();
   QVector<Coords>::iterator i = props->at(index).contour->begin();
    while (i!=props->at(index).contour->end())
    {
        img->setPixel(i->X,i->Y,qRgb(0,255,0));
        i++;
    }
   PressSgn();
}


void PropDialog::on_pushButton_2_clicked()
{

    QStringList strList;
        strList << "Perimeter" << "S" << "Shape";

        QtCSV::StringData strData;
        strData.addRow(strList);
        //strData.addEmptyRow();
        strList.clear();
       // strList << "121" << "32" << "45";
       // strData << strList << "this is not the last row";
       // strData.insertRow(1, strList);

        // write to file


    for(int index = 0; index<props->size(); index++)
    {
        int color = props->at(index).color;
        int h = props->at(index).ur.Y - props->at(index).dl.Y;
        int w = props->at(index).ur.X - props->at(index).dl.X;
        QImage *mini1 = new QImage(w, h, img->format() );
        int x=0,y=0;
        int x1=props->at(index).ur.X;
        int y1=props->at(index).ur.Y;
        for(int i=props->at(index).dl.X; i<x1 ;i++) //imageSize.X-1
        {   for(int j=props->at(index).dl.Y; j<y1;j++)
              {
                int a=(QColor(dst->pixel(i,j)).green());
                if ((a==color))
                {
                  mini1->setPixel(x,y,img->pixel(i,j));
                }
                else
                    mini1->setPixel(x,y,qRgb(0,0,0));
                y++;
              }
            y=0;
            x++;
        }
       MyGraphicsItem* my1 = new MyGraphicsItem(QPixmap::fromImage(*mini1));
       my1->setPixmap(QPixmap::fromImage(*mini1));
     //  QString str("out00" + QString(index) + ".bmp");
       my1->getImage().save(imgName  + "-" + QString::number(index) + ".bmp","BMP");
       delete my1;
       delete mini1;
      // sc.addItem(my);


       strList << QString::number(props->at(index).P) << QString::number(props->at(index).S) << QString::number(props->at(index).Shape);
       strData.addRow(strList);
       strList.clear();
    }

    QString filePath = QDir::currentPath() + "/" + imgName + ".csv";
    QtCSV::Writer::write(filePath, strData);


}

void PropDialog::on_listWidget_itemChanged(QListWidgetItem *item)
{
    on_listWidget_itemClicked(item);
}

void PropDialog::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    on_listWidget_itemClicked(current);
}

void PropDialog::setImgName(QString& s)
{
    this->imgName = s;
    imgName.truncate(8);
}

QString& PropDialog::getImgName()
{
    return imgName;
}
