
#include "lanzador.h"

Lanzador::Lanzador(double x, double y)
{
    posx=x;
    posy=y;
    dimx=30;
    dimy=30;
}

Punch *Lanzador::Disparar(double p1, double p2)
{
    if(Galactic.size()<5){
        qDebug()<<"POsicion del misil : "<<getPosx();
        Galactic.push_back(new Punch(p1,p2));
        return Galactic.last();
    }
    return nullptr;
}

QRectF Lanzador::boundingRect() const
{
    return QRectF(0,0,2*dimx,2*dimy);
}

void Lanzador::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::cyan);
    painter->drawRect(boundingRect());
}

