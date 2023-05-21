
#include "nave.h"

Nave::Nave(float x, float y)
{
    this->posx=x;
    this->posy=y;
    this->dimx=30;
    this->dimy=30;
}

void Nave::Movimiento(float V)
{
    this->vel=V;
    posx = vel + posx;
    setPos(posx,posy);
}

Proyectil *Nave::Disparar()
{
    if(Misiles.size()<10){
        Misiles.push_back(new Proyectil(getPosx(),getPosy()));
        return Misiles.last();
    }
    return nullptr;
}

QRectF Nave::boundingRect() const
{
    return QRectF(-30,-30,2*dimx,2*dimy);
}

void Nave::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::yellow);
    painter->drawRect(boundingRect());
}
