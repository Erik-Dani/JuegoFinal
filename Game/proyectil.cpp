
#include "proyectil.h"

Proyectil::Proyectil(double x, double y)
{
    dimx=30;
    dimy=30;
    this->posx=x;
    this->posy=y;
}

void Proyectil::CalcularPos()
{
    posx = posx;
    posy = posy+vel*tiempo;
    setPos(posx,posy);
}
void Proyectil::CalcularVel()
{
    vel += 0.98 * tiempo;
}
void Proyectil::Calcular()
{
    CalcularVel();
    CalcularPos();
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
