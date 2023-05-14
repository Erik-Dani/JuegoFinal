
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

#define tiempo 1;

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

    void CalcularPos();
    void CalcularVel();
    void Calcular();

    virtual QRectF boundingRect() const;
    virtual void paint(
        QPainter *painter,
        const QStyleOptionGraphicsItem *option,
        QWidget *widget = nullptr);
};

#endif // PROYECTIL_H
