
#include "punch.h"

Punch::Punch(int x, int y)
{
    this->posx=x;
    this->posy=y;
    this->radio=30;
}

Proyectil *Punch::Disparar(float x)
{
    if(Misiles.size()<5){
        //qDebug()<<"POsicion del misil : "<<getPosx();
        Misiles.push_back(new Proyectil(2346,256));
        return Misiles.last();
    }
    return nullptr;
}

Proyectil *Punch::EliminarProyectil()
{
    Proyectil *p = Misiles.first();
    Misiles.remove(0);///como se usa?
    return p;
}

void Punch::Movimiento(float v)
{
    this->velocidad=v;
    posx = velocidad + posx;
    setPos(posx,posy);
}

QRectF Punch::boundingRect() const
{
    return QRectF(posx,posy,2*radio,2*radio);
}

void Punch::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(boundingRect());
}

Punch::advance(int phase)
{

}

