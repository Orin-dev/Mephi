#ifndef CELLPARAMS
#define CELLPARAMS

#include <QWidget>
#include <QGraphicsScene>
#include <QVector>
#include <QListWidgetItem>

#include "mygraphicsobject.h"

#include <cmath>

#include <QImage>

#include <QVector>




class Coords//координаты
{
public:
inline Coords(int x, int y){X=x; Y=y;}
inline Coords(){X=0; Y=0;}
inline const bool operator ==(Coords c){if ((X==c.X)&&(Y==c.Y)) return true; else return false; }
    int X;
    int Y;
};


/*class CellProps
{
public:
   CellProps(){
               XC=0;
               XP=0;
               S=0;
               YC=0;
               YP=0;
               contour = new QVector<Coords>();
               body = new QVector<Coords>();
              }
   ~CellProps(){delete contour; delete body;}
    Coords ur;
    Coords dl;
    int XC,YC;
    double S;
    int P;
    QVector<Coords>* contour;
    int XP,YP;
    QRgb color;
    QVector<Coords>* body;
    int colorness;
    double Shape;


};
*/

struct CellProps
{
public:
    Coords ur;
    Coords dl;
    int XC,YC;
    double S;
    int P;
    QVector<Coords>* contour;
    int XP,YP;
    QRgb color;
    QVector<Coords>* body;
    int colorness;
    double Shape;
};

class CellParams
{
//Q_OBJECT
public:

    CellParams(QImage &image);
    ~CellParams();

   // QImage getImage();
   void ObjSearchWouR();
   void zalivWour(int x, int y);
   QVector<Coords>* bugContour(int x, int y, int color);
   void DistanceTransform(QVector<Coords>* contour,QVector<Coords>* body);
  // QVector<Coords>* watershed(QVector<Coords> * body);
   QVector<CellProps>* watershed(QVector<Coords> * body, int &fillColor);
   int getCNT();
   void setCriteria(int crt);
   int getCriteria();
   void setCriteria1(int crt);
   int getCriteria1();
   QVector<CellProps>* getCellProps();
   void fillPixel(int x, int y, int color);
   QVector<Coords>* bugContour_color(Coords dl, Coords ur, int color);
   QVector<CellProps>* fillRegions(Coords upleft, Coords downright, QRgb initColor, QRgb thresh);
   void DistanceTransform_color(CellProps prop, int color_thresh);
   QVector<CellProps>* calculate();
   QVector<CellProps>* zaliv(Coords dl, Coords ur, int color);
private:

   int S;
   Coords cnt;
   int XP,XC;
   int YP,YC;
   int* Coormas;
   int PixCnt;
   int criteria;
   int criteria1;

    QImage* img;
    Coords* FlPixels;
    Coords imageSize;
    int CNT;
    QVector<CellProps> *props;

};

struct Flood{
    Coords fPoint;
    int color;
    QHash<int,int> body;
};

#endif // CELLPARAMS

