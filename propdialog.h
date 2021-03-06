#ifndef PROPDIALOG_H
#define PROPDIALOG_H

#include <QDialog>
#include "cellparams.h"
#include "mygraphicsobject.h"

namespace Ui {
class PropDialog;
}

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
    QImage* mini;
signals:
    void PressSgn();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


    void on_listWidget_itemChanged(QListWidgetItem *item);

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

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
