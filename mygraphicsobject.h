#ifndef MYGRAPHICSOBJECT_H
#define MYGRAPHICSOBJECT_H

#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <QObject>

/////
#include <QPainter>
#include <QMouseEvent>

struct MyRect//класс для квадратиков
{
    QRect myrect;
    double corr;
    MyRect():corr(0.0){}
    MyRect(QRect nmyrect,double ncorr):myrect(nmyrect),corr(ncorr){}
};
/////

class MyGraphicsItem : public QGraphicsPixmapItem
{

public:

    MyGraphicsItem(const QPixmap& pm);
    ~MyGraphicsItem();

    void paint(QPainter *p, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    //signals:

    QImage getImage();//Рефактроринг - копирование области для сохранения

    /////
    //  void paintEvent(QPaintEvent *e);
    void mousePressEvent(QGraphicsSceneMouseEvent *e);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *e);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *e);

    void calc();


    void setOneImage(const QImage & src);
    void setTwoImage(const QImage & src);

    bool selectionStarted;

    QRect oneRect;
    QRect twoRect;
    QRect selectionRect;

    QVector<MyRect> myRect;



    void setWidthRect(int w);
    void setHeightRect(int h);

    int w;
    int h;

    /////






};

#endif // MYGRAPHICSOBJECT_H
