#include "propdialog.h"
#include "ui_propdialog.h"
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
    for(int i = 0 ;i < 100; i++)
    ui->listWidget->addItem(QString::number(i));
    my = new MyGraphicsItem(QPixmap());
    sc.addItem(my);

    mini = NULL;

    strList << "Perimeter" << "S" << "Shape" << "CitoplasmRatio" << "Roundness" << "RectFill" << "CitoplasmHue" << "NuclearBrighness" << "ContourMoment" << "XC" << "YC" << "ImgName" << "SubImgNumber";
    strData.addRow(strList);
    strList.clear();

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
    if(index < props->size() - 1)
    {
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
}

void PropDialog::setProps(QVector<CellProps> * pr)
{
    props=pr;
//    for(int i=1;i<props->size();i++)
//        ui->listWidget->model()->setData(QModelIndex();QString::number(i+1)) item(i)->setText(QString::number(i+1));
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
    //if(img)
        //delete img,dst;
    //this->props->clear();

//      int n = ui->listWidget->count() - 1;
//      for(int j = ui->listWidget->count() - 1; j>=0; j--) {
//        //QListWidgetItem *it = ui->listWidget->takeItem(1);
//        ui->listWidget->item(j)->setText("-");
        //ui->listWidget->model()->removeRow(1, QModelIndex());
        //delete it;
//      }

      //ui->listWidget->clear();
//      ui->listWidget = new QWidget();
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

       // strList << "121" << "32" << "45";
       // strData << strList << "this is not the last row";
       // strData.insertRow(1, strList);

        // write to file


    for(int index = 0; index<props->size(); index++)
    {
        if((*props)[index].P < 100) props->remove(index);
        else
        {
        int color = props->at(index).color;
        int h = props->at(index).ur.Y - props->at(index).dl.Y;
        int w = props->at(index).ur.X - props->at(index).dl.X;
        QImage *mini1 = new QImage(w, h, img->format() );
        QImage *mini = new QImage(w, h, img->format() );
        QImage *mini_backg = new QImage(w, h, img->format() );
        QImage *mini_citoplasm = new QImage(w, h, img->format() );
        int x=0,y=0;
        int x1=props->at(index).ur.X;
        int y1=props->at(index).ur.Y;
        double brightness = 0.0;
        for(int i=props->at(index).dl.X; i<x1 ;i++) //imageSize.X-1
        {   for(int j=props->at(index).dl.Y; j<y1;j++)
              {
                int a=(QColor(dst->pixel(i,j)).green());
                if ((a==color))
                {
                  mini1->setPixel(x,y,img->pixel(i,j));
                  brightness += (0.59*(QColor(img->pixel(i,j)).green() + 0.3*QColor(img->pixel(i,j)).red() + 0.11*QColor(img->pixel(i,j)).blue()));
                }
                else{
                    mini1->setPixel(x,y,qRgb(0,0,0));
                    mini_backg->setPixel(x,y,img->pixel(i,j));
                }

                mini->setPixel(x,y,img->pixel(i,j));
                y++;
              }
            y=0;
            x++;
        }
        brightness /= (*props)[index].S;
        (*props)[index].nuclearBrightness = brightness;

        kMeans(mini, mini1);

        int S = 0; //площадь цитоплазмы

        for(int i = 0; i < mini->width() ;i++) //imageSize.X-1
        {   for(int j = 0; j < mini->height();j++){
                if(QColor(mini->pixel(i,j)).green() == 100){
                    mini_citoplasm->setPixel(i,j,QColor(mini_backg->pixel(i,j)).rgb());
                    S++;
                }
                else
                    mini_citoplasm->setPixel(i,j, qRgb(0,0,0));
            }
        }

       (*props)[index].citoplasmRatio = props->value(index).S/S;
       (*props)[index].rectFill = h*w / props->value(index).S;
       (*props)[index].roundCoef = (4*3.1415*props->value(index).S) / ((props->value(index).P)*(props->value(index).P));

        //подсчет оттенка цитоплазмы.
        double citoplasmHue = 0;
        for(int i = 0; i < mini->width() ;i++) //imageSize.X-1
        {   for(int j = 0; j < mini->height();j++){
                if(QColor(mini_citoplasm->pixel(i,j)).green() > 0) {
                   citoplasmHue += QColor(mini_citoplasm->pixel(i,j)).hsvHue();
                }
            }
        }
        (*props)[index].citoplasmHue = citoplasmHue / S;

        //расчет момента границ ядра
        double Mxx = 0.0;
        double Mxy = 0.0;
        double Myy = 0.0;
        int xi, yi = 0;
        for(int i = 0; i < (*props)[index].contour->length();i++){
            xi = (*props)[index].contour->at(i).X;
            yi = (*props)[index].contour->at(i).Y;
            Mxx += (xi -(*props)[index].XC)*(xi -(*props)[index].XC);
            Myy += (yi -(*props)[index].YC)*(yi -(*props)[index].YC);
            Mxy += (xi -(*props)[index].XC)*(yi -(*props)[index].YC);
        }
        (*props)[index].M = ( 0.5*(Mxx + Myy) - 0.25*qSqrt(0.25*(Mxx-Myy)*(Mxx-Myy) + Mxy*Mxy)) / ( 0.5*(Mxx + Myy) + 0.25*qSqrt(0.25*(Mxx-Myy)*(Mxx-Myy) + Mxy*Mxy));

       MyGraphicsItem* my1 = new MyGraphicsItem(QPixmap::fromImage(*mini1));
       my1->setPixmap(QPixmap::fromImage(*mini1));
     //  QString str("out00" + QString(index) + ".bmp");
       my1->getImage().save(imgName  + "-mask" + QString::number(index) + ".bmp","BMP");

       my1->setPixmap(QPixmap::fromImage(*mini));
       my1->getImage().save(imgName  + "-" + QString::number(index) + ".bmp","BMP");
       my1->setPixmap(QPixmap::fromImage(*mini_citoplasm));
       my1->getImage().save(imgName  + "-citoplasm" + QString::number(index) + ".bmp","BMP");
       delete my1;
       delete mini1;
       delete mini;
       mini = NULL;
       delete mini_backg;
       delete mini_citoplasm;
      // sc.addItem(my);


       strList << QString::number(props->at(index).P)
               << QString::number(props->at(index).S)
               << QString::number(props->at(index).Shape)
               << QString::number(props->at(index).citoplasmRatio)
               << QString::number(props->at(index).roundCoef)
               << QString::number(props->at(index).rectFill)
               << QString::number(props->at(index).citoplasmHue)
               << QString::number(props->at(index).nuclearBrightness)
               << QString::number(props->at(index).M)
               << QString::number(props->at(index).XC)
               << QString::number(props->at(index).YC)
               << imgName
               << QString::number(index);
       strData.addRow(strList);
       strList.clear();
    }

  }
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

void PropDialog::kMeans(QImage* img, QImage* mask)
{
    Cluster clusters[3];
    clusters[0].green = 60;
    clusters[0].blue = 60; //nuclei
    clusters[1].green = 110;
    clusters[1].blue = 110; //citoplasm
    clusters[2].green = 173;
    clusters[2].blue = 173; //background
    clusters[0].nObjects = clusters[1].nObjects = clusters[2].nObjects = 0;

    Cluster newClusters[3];
    newClusters[0].green = newClusters[0].blue = 0;
    newClusters[1].green = newClusters[1].blue = 0;
    newClusters[2].green = newClusters[2].blue = 0;
    newClusters[0].nObjects = newClusters[1].nObjects = newClusters[2].nObjects = 0;
    double distance = 9999;

    Pixel pixMas[img->width()][img->height()];
    bool answer = true;

  while(answer){
    for(int i = 0; i < img->width(); i++)
        for(int j =0;j < img->height();j++){
            pixMas[i][j].green=QColor(img->pixel(i,j)).green();
            pixMas[i][j].cl=0;
            pixMas[i][j].blue=QColor(img->pixel(i,j)).red();
            for (int k = 0; k < 3; k++){
                if( qSqrt( ((pixMas[i][j].blue-clusters[k].blue)*(pixMas[i][j].blue-clusters[k].blue) + (pixMas[i][j].blue-clusters[k].blue)*(pixMas[i][j].blue-clusters[k].blue) )) < distance)
                    {
                        distance = qSqrt((pixMas[i][j].blue-clusters[k].blue)*(pixMas[i][j].blue-clusters[k].blue) + (pixMas[i][j].blue-clusters[k].blue)*(pixMas[i][j].blue-clusters[k].blue) );
                        pixMas[i][j].cl = k;
                    }
                }
                distance = 9999;
            }
            double blues[3] = {0.0,0.0,0.0};
            double greens[3] = {0.0,0.0,0.0};

            for(int i = 0; i < img->width(); i++)
                for(int j = 0;j < img->height();j++){
                    blues[pixMas[i][j].cl] += QColor(img->pixel(i,j)).red();
                    greens[pixMas[i][j].cl] += QColor(img->pixel(i,j)).green();
                    newClusters[pixMas[i][j].cl].nObjects++;
                }
            for(int i = 0; i < 3; i++){
                newClusters[i].blue = (int) (blues[i] / newClusters[i].nObjects);
                newClusters[i].green = (int) (greens[i] / newClusters[i].nObjects);
            }
  for(int i = 0; i < 3; i++)
     answer = answer && !((clusters[0].blue == newClusters[0].blue) && (clusters[0].green == newClusters[0].green));
  for(int i = 0; i < 3; i++){
      clusters[i]=newClusters[i];
      newClusters[i].nObjects = 0;
  }
  }
  for(int i = 0; i < img->width(); i++)
      for(int j =0;j < img->height();j++){
          img->setPixel(i,j, qRgb((pixMas[i][j].cl+1)*50,(pixMas[i][j].cl+1)*50,(pixMas[i][j].cl+1)*50));
      }

  for(int i = 0; i < img->width(); i++)
      for(int j =0;j < img->height();j++){
          if((QColor(img->pixel(i,j)).green() == 50) && !(QColor(mask->pixel(i,j)).green() > 0))
              img->setPixel(i,j, qRgb(150,150,150));
          if((QColor(mask->pixel(i,j)).green() > 0))
              img->setPixel(i,j, qRgb(50,50,50));
      }

}


void PropDialog::on_pushButton_3_clicked()
{
    QString filePath = QDir::currentPath() + "/" + "founded_props" +imgName + ".csv";
    QtCSV::Writer::write(filePath, strData);
}
