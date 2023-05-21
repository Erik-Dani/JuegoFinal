
#include "lanzador.h"

Lanzador::Lanzador(float x, float y)
{
    this->posx=x;
    this->posy=y;
    this->dimx=15;
    this->dimy=15;
    setPos(x,y);
}

Punch *Lanzador::Disparar(float V)
{
    if(Galactic.size()<5){
        qDebug()<<" POS X :"<<getPosx()<<"POS Y : "<<getPosy();
        Galactic.push_back(new Punch(getPosx(),getPosy(), V ));
        return Galactic.last();
    }
    return nullptr;
}

QRectF Lanzador::boundingRect() const
{
    return QRectF(-15,-15,2*dimx,2*dimy);
}

void Lanzador::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::cyan);
    painter->drawRect(boundingRect());
}

