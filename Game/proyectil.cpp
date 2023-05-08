
#include "proyectil.h"

Proyectil::Proyectil(int x, int y)
{
    dimx=15;
    dimy=15;
    this ->posx=x;
    this->posy=y;
    setPos(posx,posy+8);
}

void Proyectil::Movimiento()
{
    posx+= velx*CDT;
    posy+= vely*CDT;

    setPos(posx,posy);
}

QRectF Proyectil::boundingRect() const
{
    return QRectF(0,0,dimx,dimy);
}

void Proyectil::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::red);
    painter->drawRect(boundingRect());
}

