
#include "nave.h"

Nave::Nave(float x, float y)
{
    this->posx=x;
    this->posy=y;
    this->radio=30;
}

int Nave::getPosx() const
{
    return posx;
}

void Nave::setPosx(float newPosx)
{
    posx = newPosx;
}

int Nave::getPosy() const
{
    return posy;
}

void Nave::setPosy(float newPosy)
{
    posy = newPosy;
}
int Nave::getVelocidad() const
{
    return velocidad;
}

void Nave::setVelocidad(float newVelocidad)
{
    velocidad = newVelocidad;
}

void Nave::Movimiento(float V)
{
    this->velocidad=V;
    posx = velocidad + posx;
    setPos(posx,posy);
}

Proyectil *Nave::Disparar(float bom)
{
    if(Misiles.size()<10){
        //qDebug()<<"POsicion del misil : "<<getPosx();
        Misiles.push_back(new Proyectil(bom,getPosy()));
        return Misiles.last();
    }
    return nullptr;
}

QRectF Nave::boundingRect() const
{
    return QRectF(posx,posy,2*radio,2*radio);
}

void Nave::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::yellow);
    painter->drawRect(boundingRect());
}
