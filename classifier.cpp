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
                elements.append(new QTreeWidgetItem( items[i], QStringList(strData.rowValues(j)[10]))); //12

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



   int n = 4; //число кластеров
   clusters = new ClusterK[n];
   ClusterK* newClusters = new ClusterK[n];
   //Лимфоциты
       clusters[0].centroid.append(0);
       clusters[1].centroid.append(0);
       clusters[2].centroid.append(0);
       clusters[3].centroid.append(0);

       clusters[0].centroid.append(8000.0);
       clusters[0].centroid.append(9.0);
       clusters[0].centroid.append(0.54);
       clusters[0].centroid.append(1.4);
       clusters[0].centroid.append(237.0);
       clusters[0].centroid.append(33.0);
       clusters[0].centroid.append(0.94);
   //Нейтрофилы
       clusters[1].centroid.append(5000.0);
       clusters[1].centroid.append(0.0);
       clusters[1].centroid.append(0.3);
       clusters[1].centroid.append(1.7);
       clusters[1].centroid.append(260.0);
       clusters[1].centroid.append(38.0);
       clusters[1].centroid.append(0.82);
   //Пролимфоциты
       clusters[2].centroid.append(13000.0);
       clusters[2].centroid.append(7.0);
       clusters[2].centroid.append(0.3);
       clusters[2].centroid.append(1.7);
       clusters[2].centroid.append(260.0);
       clusters[2].centroid.append(38.0);
       clusters[2].centroid.append(0.82);
    //лимфобласты
       clusters[3].centroid.append(15000.0);
       clusters[3].centroid.append(7.0);
       clusters[3].centroid.append(0.4);
       clusters[3].centroid.append(1.5);
       clusters[3].centroid.append(250.0);
       clusters[3].centroid.append(54.0);
       clusters[3].centroid.append(0.82);

//       for (int i = 1; i < n; i++ ){
//           clusters[i].nElements = 0;
//           newClusters[i].nElements = 0;
//           int ind = (int) data.length() * qrand()/RAND_MAX;
//               clusters[i].centroid = data[ind];
//               QVector<double> test = clusters[i].centroid;//(double*) memcpy(clusters[i].centroid, data[ind], 10*sizeof(double));
//        }

bool answer = true;
while(answer > 0){
   //приcваивание кластеров
   double minMetric = 999999.0;
   int cellClass = 0;
   for (int i = 0; i< data.size(); i++) {
       for(int j = 0; j < n; j++){
           double metric = Classifier::metric(&data[i], &clusters[j].centroid);
           if(metric < minMetric){
                   minMetric = metric;
                   cellClass = j;
           }
       }
       minMetric = 999999.0;
       data[i][0] = cellClass;
   }
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
       for(int k = 1; k< propN.size()+1; k++)
           propVect[k] /= count;
       newClusters[i].centroid = propVect;
       count = 0;
       for(int k = 1; k< propN.size()+1; k++)
           propVect[k] = 0;
   }

   for(int i = 0; i < n; i++)
       for(int j = 1; j < propN.size()+1;j++)
           answer = !(!answer || (clusters[i].centroid[j] == newClusters[i].centroid[j]));
   clusters->centroid.clear();
   clusters = newClusters;
 }
for(int i = 1; i < data.size() + 1; i++)
{
    QStringList lst = strData.rowValues(i);
    lst.append( QString::number(data[i-1][0]));
    strData.replaceRow(i,lst);
}
//QString filePath = QDir::currentPath() + "/" + "founded_props" +imgName + ".csv";
QtCSV::Writer::write(filePath[0] + ".csv" , strData);
min.clear();
max.clear();
coef.clear();


}
