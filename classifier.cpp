#include "classifier.h"
#include "ui_classifier.h"


Classifier::Classifier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Classifier)
{
    ui->setupUi(this);
    propN.append(1);
    propN.append(3);
    propN.append(4);
    propN.append(5);
    propN.append(6);
    propN.append(7);
    propN.append(8);
    //ui->graphicsView->setScene(&sc);
    loc = new CellsLocation(this);
    //sc = new QGraphicsScene();
    my = new MyGraphicsItem(QPixmap());

    nClusters = ui->lineEdit_2->text().toInt();
    clusters = new ClusterK[nClusters];

    ui->tableWidget->item(0,0)->setText(QString::number(8000.0));
    ui->tableWidget->item(0,1)->setText(QString::number(9.0));
    ui->tableWidget->item(0,2)->setText(QString::number(0.54));
    ui->tableWidget->item(0,3)->setText(QString::number(1.4));
    ui->tableWidget->item(0,4)->setText(QString::number(237.0));
    ui->tableWidget->item(0,5)->setText(QString::number(33.0));
    ui->tableWidget->item(0,6)->setText(QString::number(0.94));

    ui->tableWidget->item(1,0)->setText(QString::number(5000.0));
    ui->tableWidget->item(1,1)->setText(QString::number(0.0));
    ui->tableWidget->item(1,2)->setText(QString::number(0.3));
    ui->tableWidget->item(1,3)->setText(QString::number(1.7));
    ui->tableWidget->item(1,4)->setText(QString::number(260.0));
    ui->tableWidget->item(1,5)->setText(QString::number(38.0));
    ui->tableWidget->item(1,6)->setText(QString::number(0.82));

    ui->tableWidget->item(2,0)->setText(QString::number(13000.0));
    ui->tableWidget->item(2,1)->setText(QString::number(7.0));
    ui->tableWidget->item(2,2)->setText(QString::number(0.4));
    ui->tableWidget->item(2,3)->setText(QString::number(1.7));
    ui->tableWidget->item(2,4)->setText(QString::number(230.0));
    ui->tableWidget->item(2,5)->setText(QString::number(38.0));
    ui->tableWidget->item(2,6)->setText(QString::number(0.82));

    ui->tableWidget->item(3,0)->setText(QString::number(15000.0));
    ui->tableWidget->item(3,1)->setText(QString::number(7.0));
    ui->tableWidget->item(3,2)->setText(QString::number(0.4));
    ui->tableWidget->item(3,3)->setText(QString::number(1.7));
    ui->tableWidget->item(3,4)->setText(QString::number(230.0));
    ui->tableWidget->item(3,5)->setText(QString::number(38.0));
    ui->tableWidget->item(3,6)->setText(QString::number(0.82));

    idStudy = 0;
    processor = NULL;
    //    //лимфобласты
    //       clusters[3].centroid.append(15000.0);
    //       clusters[3].centroid.append(7.0);
    //       clusters[3].centroid.append(0.4);
    //       clusters[3].centroid.append(1.5);
    //       clusters[3].centroid.append(250.0);
    //       clusters[3].centroid.append(54.0);
    //       clusters[3].centroid.append(0.82);

}

Classifier::~Classifier()
{
    delete ui;
}

void Classifier::on_pushButton_clicked()
{
    filePath = QFileDialog::getOpenFileNames();
    //QtCSV::StringData strData;
    QtCSV::Reader::readToData(filePath[0], strData);
    //QVector <QVector<double> > data;
    //double* tmp;
    QVector<double> tmp;
    QStringList strlist;
    for(int i = 1; i < strData.rowCount(); i++)
       {
            strlist = strData.rowValues(i);
            if(strlist.size() > 0)
            //tmp = new double[strlist.size()];
            tmp.append(0); //класс по умолчанию 0
            for (int j = 0; j < propN.size(); j++)
                tmp.append(strlist[propN[j]].toDouble());
            data.append(tmp);
            tmp.clear();
       }

    ui->treeWidget->setColumnCount(1);
    QList<QTreeWidgetItem *> elements;
    //QList<QTreeWidgetItem *> types;
    //QList<QTreeWidgetItem *> types;
    //for (int i = 0; i < 4; ++i)
//    types.append(new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString("Лимфоцит"))));
//    types.append(new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString("Нейтрофил"))));
//    types.append(new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString("Пролимфоцит"))));
//    types.append(new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString("Лимфобласт"))));

    QList<QTreeWidgetItem *> items;

    QStringList imgNames;


    QStringList row = strData.rowValues(1);
    QString str = row[11];
    QString strNew;
    for(int i = 2; i < strData.rowCount(); i++){
        row = strData.rowValues(i);
        strNew = row[11];
        if(strNew != str){
            imgNames.append(str);
            str = strNew;
        }
    }
    for (int i = 0; i < imgNames.length(); ++i)
        items.append(new QTreeWidgetItem((QTreeWidget*)0, QStringList(imgNames[i])));
        ui->treeWidget->insertTopLevelItems(0, items);

        for(int i = 0; i < imgNames.length(); i++){
            for(int j = 0; j < strData.rowCount(); j++)
                if(strData.rowValues(j)[11] == imgNames[i])
                elements.append(new QTreeWidgetItem( items[i], QStringList(strData.rowValues(j)[12]))); //12

        }

        //        types.append(new QTreeWidgetItem(items[i], QStringList(QString("Лимфоцит"))));
        //        types.append(new QTreeWidgetItem(items[i], QStringList(QString("Нейтрофил"))));
        //        types.append(new QTreeWidgetItem(items[i], QStringList(QString("Пролимфоцит"))));
        //        types.append(new QTreeWidgetItem(items[i], QStringList(QString("Лимфобласт"))));
         //ui->treeWidget->ins
        // QTreeWidgetItem* item = new QTreeWidgetItem(items[2], QStringList(QString("item: 1")));
         //ui->treeWidget->insertTopLevelItem(1, item);
    //items.clear();
    //items.append(new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString("item:"))));
}

double Classifier::metric(QVector<double>* from, QVector<double>* to){
    double sum = 0;
    for (int i = 1; i < propN.size()+1; i++)
        sum +=  coef[i] * ( ( (*from)[i] - min[i]) / (max[i] - min[i]) - ( ( (*to)[i] - min[i]) / (max[i] - min[i]) )) * ( ((*from)[i] - min[i]) / (max[i] - min[i]) - ((*to)[i] - min[i]) / (max[i] - min[i]) );
     return qSqrt(sum);
}

void Classifier::on_pushButton_2_clicked()
{


    for(int i = 0; i < propN.size()+1; i++)
    {
        max.append(0.0);
        min.append(99999.0);
    }
    for(int i = 1; i < propN.size() + 1; i++)
        for(int j = 0; j < data.length(); j++)
        {
            if(data[j][i] > max[i])
                max[i] = data[j][i];
            if(data[j][i] < min[i])
                min[i] = data[j][i];
        }
    //вес параметра
//            coef.append(0);
//            coef.append(7);
//            coef.append(2);
//            coef.append(5);
//            coef.append(3);
//            coef.append(1);
//            coef.append(6);
//            coef.append(4);
          coef.append(0);
          coef.append(7);
          coef.append(6);
          coef.append(7);
          coef.append(7);
          coef.append(7);
          coef.append(6);
          coef.append(7);



   int n = nClusters; //число кластеров
   //clusters = new ClusterK[n];
   ClusterK* newClusters = new ClusterK[n];

//   //Лимфоциты
//       clusters[0].centroid.append(0);
//       clusters[1].centroid.append(0);
//       clusters[2].centroid.append(0);
//       clusters[3].centroid.append(0);

//       clusters[0].centroid.append(8000.0);
//       clusters[0].centroid.append(9.0);
//       clusters[0].centroid.append(0.54);
//       clusters[0].centroid.append(1.4);
//       clusters[0].centroid.append(237.0);
//       clusters[0].centroid.append(33.0);
//       clusters[0].centroid.append(0.94);
//   //Нейтрофилы
//       clusters[1].centroid.append(5000.0);
//       clusters[1].centroid.append(0.0);
//       clusters[1].centroid.append(0.3);
//       clusters[1].centroid.append(1.7);
//       clusters[1].centroid.append(260.0);
//       clusters[1].centroid.append(38.0);
//       clusters[1].centroid.append(0.82);
//   //Пролимфоциты
//       clusters[2].centroid.append(13000.0);
//       clusters[2].centroid.append(7.0);
//       clusters[2].centroid.append(0.3);
//       clusters[2].centroid.append(1.7);
//       clusters[2].centroid.append(260.0);
//       clusters[2].centroid.append(38.0);
//       clusters[2].centroid.append(0.82);
//    //лимфобласты
//       clusters[3].centroid.append(15000.0);
//       clusters[3].centroid.append(7.0);
//       clusters[3].centroid.append(0.4);
//       clusters[3].centroid.append(1.5);
//       clusters[3].centroid.append(250.0);
//       clusters[3].centroid.append(54.0);
//       clusters[3].centroid.append(0.82);

       for (int i = 1; i < n; i++ ){
           //clusters[i].nElements = 0;
           newClusters[i].nElements = 0;
           /*int ind = (int) data.length() * qrand()/RAND_MAX;
               clusters[i].centroid = data[ind];
               QVector<double> test = clusters[i].centroid;*///
        }

bool answer = true;
while(true){
   //приcваивание кластеров
   double minMetric = 999999.0;
   double* clusterRadius = new double[nClusters];
   clusterRadius[0] = 0.6;
   clusterRadius[1] = 0.8;
   clusterRadius[2] = 10;
   clusterRadius[3] = 1;

   int cellClass = 0;
   for (int i = 0; i< data.size(); i++) {
       for(int j = 0; j < n; j++){
           double metric = Classifier::metric(&data[i], &clusters[j].centroid);
           if( (metric < minMetric) && (metric < clusterRadius[j]) ) {
                   minMetric = metric;
                   cellClass = j;
                   clusters[j].nElements++;
           }
       }
       minMetric = 999999.0;
       data[i][0] = cellClass;
   }
   if(answer == false)
       break;


   //рачет новых центров
   QVector<double> propVect;
   int count =0;
   for(int i = 0; i< 11; i++ )
       propVect.append(0);

   for(int i = 0; i < n; i++){
       for(int j = 0; j < data.size(); j++)
           if(data[j][0] == i)
           {
               count++;
               for(int k = 1; k< propN.size()+1; k++)
                   propVect[k] += data[j][k];
           }
       if(count != 0)
       for(int k = 1; k< propN.size()+1; k++)
           propVect[k] /= count;
       newClusters[i].centroid = propVect;
       count = 0;
       for(int k = 1; k < propN.size()+1; k++)
           propVect[k] = 0;
   }

   for(int i = 0; i < n; i++)
       for(int j = 1; j < propN.size()+1;j++)
           answer = !(!answer || (clusters[i].centroid[j] == newClusters[i].centroid[j]));
   for(int i = 0; i < nClusters; i++){
       clusters[i].centroid = newClusters[i].centroid;
       //clusters[i].nElements = newClusters[i].nElements;
   }
   //clusters = newClusters;
   QVector<double> vec;
   for(int i = 0; i < nClusters; i++)
       vec = clusters[i].centroid;
 }

for (int i = 0; i < nClusters; i++ ){
        for(int j = 1; j < 8; j++){
            QString text = QString::number((clusters[i].centroid[j]));
             ui->tableWidget->item(i, j-1)->setText(text);
        }
 }

for(int i = 1; i < data.size() + 1; i++)
{
    QStringList lst = strData.rowValues(i);
    lst.replace(13, QString::number(data[i-1][0]));
    strData.replaceRow(i,lst);
}
//QString filePath = QDir::currentPath() + "/" + "founded_props" +imgName + ".csv";
QtCSV::Writer::write(filePath[0] + ".csv" , strData);
min.clear();
max.clear();
coef.clear();
//blast_cells, prolymphocytes, lymphocytes, sum_granulocytes, is_clinical, id_study
    QStringList lst;
    double amt = 0;
    for(int i = 0; i< nClusters; i++)
        amt += (double)(clusters[i].nElements);
    lst.append(QString::number( (double)(clusters[2].nElements) * 100 / amt));
    lst.append(QString::number( (double)(clusters[3].nElements) * 100 / amt)); //, clusters[0]->nElements,clusters[1]->nElements));
    lst.append(QString::number( (double)(clusters[0].nElements) * 100 / amt));
    lst.append(QString::number( (double)(clusters[1].nElements) * 100 / amt));
    lst.append(QString("false"));

}

void Classifier::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
    if(item->parent() != NULL){
    imgName = item->parent()->text(0);
    QString str = item->parent()->text(0);
    str += "-" + item->text(0) + ".bmp";

    ui->graphicsView->setScene(&sc);
    QString s = filePath[0];
    s.truncate(25);

    my->setPixmap(QPixmap(s + "/build/" + str));
    s.chop(12);
    imgPath = s + "images/" + imgName + ".bmp";
    sc.addItem(my);
    }

}

void Classifier::on_treeWidget_itemChanged(QTreeWidgetItem *item, int column)
{
    on_treeWidget_itemClicked(item, column);
}

void Classifier::on_treeWidget_itemEntered(QTreeWidgetItem *item, int column)
{
    on_treeWidget_itemClicked(item, column);
}

void Classifier::on_treeWidget_itemActivated(QTreeWidgetItem *item, int column)
{
    on_treeWidget_itemClicked(item, column);
}

void Classifier::on_treeWidget_itemPressed(QTreeWidgetItem *item, int column)
{
    on_treeWidget_itemClicked(item, column);
}

void Classifier::on_treeWidget_itemSelectionChanged()
{
    on_treeWidget_itemClicked(ui->treeWidget->currentItem(), 0);
}

void Classifier::on_pushButton_3_clicked()
{
    loc->setImgName(imgName);
    loc->setImgPath(imgPath);
    loc->setData(strData);
    loc->show();
    loc->showLocs();

}

void Classifier::on_pushButton_4_clicked() //задать
{
    clusters = new ClusterK[nClusters];
        for(int i = 0; i < nClusters; i++){
            clusters[i].nElements=0;
            clusters[i].centroid.append(0);
            for(int j = 0; j < 7;j++)
                clusters[i].centroid.append(ui->tableWidget->item(i, j)->text().toDouble());
            }

}

void Classifier::on_pushButton_5_clicked()
{
    clusters = new ClusterK[nClusters];
    if(data.length() != 0){
           for (int i = 0; i < nClusters; i++ ){
               clusters[i].nElements = 0;
               //newClusters[i].nElements = 0;
               int ind = (int) data.length() * qrand()/RAND_MAX;
                   clusters[i].centroid = data[ind];
                   for(int j = 1; j < 8; j++){
                       QString text = QString::number((data[ind][j]));
                        ui->tableWidget->item(i, j-1)->setText(text);
                   }
                   //QVector<double> test = clusters[i].centroid;//
            }
    }
}

void Classifier::on_lineEdit_2_returnPressed()
{
    for(int i = 0; i < nClusters; i++)
        clusters[i].centroid.clear();
    nClusters = ui->lineEdit_2->text().toInt();
}

void Classifier::on_pushButton_6_clicked()
{
    for(int i = 0; i < nClusters; i++)
        clusters[i].centroid.clear();
    nClusters = ui->lineEdit_2->text().toInt();
}

void Classifier::setIdStudy(int id){
    idStudy = id;
}

void Classifier::setProcessor(DatabaseProcessor* processor){
    this->processor = processor;
}
