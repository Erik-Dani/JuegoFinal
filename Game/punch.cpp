
#include "punch.h"

Punch::Punch(double x, double y)
{
    dimx=30;
    dimy=30;
    posx=x;
    posy=y;
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

QRectF Punch::boundingRect() const
{
    return QRectF(posx,posy,2*dimx,2*dimy);
}

void Punch::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(boundingRect());
}
