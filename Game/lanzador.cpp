
#include "lanzador.h"

Lanzador::Lanzador(int x, int y)
{
    this->posx=x;
    this->posy=y;
    this->radio=30;
    setPos(posx,posy);
}

Punch *Lanzador::Disparar()
{
    if(Galactic.size()<5){
        //qDebug()<<"POsicion del misil : "<<getPosx();
        Galactic.push_back(new Punch(posx,posy));
        return Galactic.last();
    }
    return nullptr;
}

QRectF Lanzador::boundingRect() const
{
    return QRectF(0,0,2*radio,2*radio);
}

void Lanzador::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::cyan);
    painter->drawRect(boundingRect());
}

