
#ifndef NAVE_H
#define NAVE_H

#include <QDebug>
#include <QGraphicsScene>
#include <QTimer>
#include <QPixmap>
#include <QKeyEvent>
#include <QGraphicsItem>
#include <QPainter>

using namespace std;

class Nave : public QObject, public QGraphicsPixmapItem

{
    int posx;
    int posy;
    int radio;
    int velocidad;

public:

    Nave(int , int );

    Nave(int , int , int );

    QRectF boundingRect() const ;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = nullptr);
    int getPosx() const;
    void setPosx(int newPosx);
    int getPosy() const;
    void setPosy(int newPosy);
};
#endif // NAVE_H
