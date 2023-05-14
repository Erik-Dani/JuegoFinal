
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

#define DT 0.00777;

class Proyectil :public QObject, public QGraphicsItem
{
    double vel=3;
    double posx, posy;
    int dimx, dimy;

public:

    Proyectil(int, int);

    int getPosx() const;
    int getPosy() const;

    void setPosy(int newPosy);
    void setPosx(int newPosx);

    virtual QRectF boundingRect() const;
    virtual void paint(
        QPainter *painter,
        const QStyleOptionGraphicsItem *option,
        QWidget *widget = nullptr);

    void advance(int phase);
};

#endif // PROYECTIL_H
