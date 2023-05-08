
#include "nave.h"


void Nave::Movimiento(int x, int y)
{
    this->posx=x;
    this->posy=y;
    setPos(posx, posy);
}

Proyectil *Nave::Disparar()
{
    if(Misiles.size()<3){
        Misiles.push_back(new Proyectil(posx,posy));
        return Misiles.last();
    }
    return nullptr;
}

Nave::Nave(int x, int y, int r)
{
    this->posx=x;
    this->posy=y;
    this->radio=r;
    this->velocidad=3;
    setPos(posx, posy);
}

int Nave::getPosx() const
{
    return posx;
}

void Nave::setPosx(int newPosx)
{
    posx = newPosx;
}

int Nave::getPosy() const
{
    return posy;
}

void Nave::setPosy(int newPosy)
{
    posy = newPosy;
}

QRectF Nave::boundingRect() const
{
    return QRectF(posx,posy,2*radio,2*radio);
}

void Nave::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::yellow);
    painter->drawEllipse(boundingRect());
}
