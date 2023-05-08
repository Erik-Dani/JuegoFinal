
#ifndef PROYECTIL_H
#define PROYECTIL_H

#include <QGraphicsItem>
#include <QPainter>
#include <string>
#include <QPixmap>
#include <QTimer>
#include <QDebug>


using namespace std;

///////////Macros///////////

#define CDT=0.2

class Proyectil :public QObject, public QGraphicsItem
{
    int velx, vely;
    int posx, posy;
    int dimx, dimy;

public:
    Proyectil();

    void Movimiento();

    virtual QRectF boundingRect() const;
    virtual void paint(
        QPainter *painter,
        const QStyleOptionGraphicsItem *option,
        QWidget *widget = nullptr);
};

#endif // PROYECTIL_H
