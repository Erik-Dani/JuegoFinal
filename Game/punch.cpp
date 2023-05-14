
#include "punch.h"

Punch::Punch(int x, int y)
{
    dimx=30;
    dimy=30;
    this->posx=x;
    this->posy=y;
    //vel=vel*cos(3.141592/4);
//    TimeMov = new QTimer;
//    connect(TimeMov,SIGNAL(timeout()),this,SLOT(Movimiento()));
//    TimeMov->start(1000);
}


QRectF Punch::boundingRect() const
{
    return QRectF(posx,posy,2*dimx,2*dimy);
}

void Punch::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(boundingRect());
}

void Punch::CalcularPos()
{
    posx = posx-vel*0.5;
    posy = posy;
    setPos(posx,posy);
}

void Punch::CalcularVel()
{
    vel += 0.98 * tiempo;
}

void Punch::Calcular()
{
    CalcularVel();
    CalcularPos();
}

