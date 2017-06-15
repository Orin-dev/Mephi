#ifndef PROPDIALOG_H
#define PROPDIALOG_H

#include <QDialog>
#include "cellparams.h"
#include "mygraphicsobject.h"
#include "QtCore/qmath.h"
#include "include/qtcsv/reader.h"
#include "include/qtcsv/stringdata.h"
#include "include/qtcsv/writer.h"

enum PixelClass{ NONE, BCG , CPL , NCL };

namespace Ui {
class PropDialog;
}

struct Pixel{
    int cl;
    int green;
    int blue;
};

struct Cluster{
    int green;
    int blue;
    int nObjects;
};

class PropDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PropDialog(QWidget *parent = 0, QImage* img=NULL, QImage *dst=NULL);
    ~PropDialog();
    void setProps(QVector<CellProps> * pr);
    void clear();
    void setImage(QImage& src);
    QPushButton* getButton();
    QImage* getImage();
    void setDst(QImage &dst);
    QImage* getDst();
    void setImgName(QString &s);
    QString& getImgName();
    void kMeans(QImage* img, QImage *mask);
    QImage* mini;

    QStringList strList;
    QtCSV::StringData strData;
signals:
    void PressSgn();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


    void on_listWidget_itemChanged(QListWidgetItem *item);

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_pushButton_3_clicked();

private:
    Ui::PropDialog *ui;
    QVector<CellProps> *props;
    QImage* img;
    QImage* dst;
    QGraphicsScene sc;
    MyGraphicsItem *my;
    QString imgName;
};

#endif // PROPDIALOG_H
