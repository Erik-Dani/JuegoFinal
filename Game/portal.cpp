
#include "portal.h"

int Portal::getPosx() const
{
    return posx;
}

void Portal::setPosx(int newPosx)
{
    posx = newPosx;
}

int Portal::getPosy() const
{
    return posy;
}

void Portal::setPosy(int newPosy)
{
    posy = newPosy;
}

Portal::Portal(int x, int y)
{
    dimx=30;
    dimy=30;
    this->posx=x;
    this->posy=y;
    setPos(posx,posy);
}

void Portal::MoveUp()
{
    posy-=velocidad;
    setPos(posx, posy);
    qDebug()<<posy<<"posicion en y actual\n";
}

void Portal::MoveDown()
{
    posy+=velocidad;
    setPos(posx, posy);
    qDebug()<<posy<<"posicion en y actual\n";
}

void Portal::MoveLeft()
{
    posx-=velocidad;
    setPos(posx, posy);
    qDebug()<<posx<<"posicion en x actual\n";
}

void Portal::MoveRight()
{
    posx+=velocidad;
    setPos(posx, posy);
    qDebug()<<posx<<"posicion en x actual\n";
}

QRectF Portal::boundingRect() const
{
    return QRectF(0,0,dimx*2,dimy*2);
}

void Portal::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::red);
    painter->drawEllipse(boundingRect());
}

