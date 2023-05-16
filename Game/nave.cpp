
#include "nave.h"

Nave::Nave(double x, double y)
{
    this->posx=x;
    this->posy=y;
    this->dimx=30;
    this->dimy=30;
}

void Nave::Movimiento(double V)
{
    this->vel=V;
    posx = vel + posx;
    setPos(posx,posy);
}

Proyectil *Nave::Disparar()
{
    if(Misiles.size()<10){
        Misiles.push_back(new Proyectil(Nave::getPosx(),Nave::getPosy()));
        return Misiles.last();
    }
    return nullptr;
}

QRectF Nave::boundingRect() const
{
    return QRectF(posx,posy,2*dimx,2*dimy);
}

void Nave::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::yellow);
    painter->drawRect(boundingRect());
}
