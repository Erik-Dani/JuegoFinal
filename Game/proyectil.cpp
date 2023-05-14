
#include "proyectil.h"

int Proyectil::getPosx() const
{
    return posx;
}

void Proyectil::setPosx(int newPosx)
{
    posx = newPosx;
}

int Proyectil::getPosy() const
{
    return posy;
}

void Proyectil::setPosy(int newPosy)
{
    posy = newPosy;
}

Proyectil::Proyectil(int x, int y)
{
    dimx=30;
    dimy=30;
    this->posx=x;
    this->posy=y;
}

QRectF Proyectil::boundingRect() const
{
    return QRectF(0,0,dimx*2,dimy*2);
}

void Proyectil::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::red);
    painter->drawEllipse(boundingRect());
}

void Proyectil::advance(int phase)
{
    posx = posx;
    posy = posy+vel*DT;
    setPos(posx,posy);
}
