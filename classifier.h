#ifndef CLASSIFIER_H
#define CLASSIFIER_H

#include <QDialog>
#include <QFileDialog>
#include <QDir>
#include <QVector>
#include "include/qtcsv/reader.h"
#include "include/qtcsv/stringdata.h"
#include "include/qtcsv/writer.h"
#include "QtCore/qmath.h"

namespace Ui {
class Classifier;
}

struct ClusterK{
    int nElements;
    QVector<double> centroid;
};

class Classifier : public QDialog
{
    Q_OBJECT

public:
    explicit Classifier(QWidget *parent = 0);
    ~Classifier();
    double metric(QVector<double> *from, QVector<double> *to);
    QVector<int> propN; //номер параметра из файла (номер колонки), используемого для вектора признаков

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Classifier *ui;
    ClusterK* clusters;
    QVector<double> max;
    QVector<double> min;
    QVector<int> coef;
    QVector < QVector<double> > data;
    QtCSV::StringData strData;
    QStringList filePath;
};

#endif // CLASSIFIER_H
