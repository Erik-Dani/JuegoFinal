
#include "punch.h"

Punch::Punch(float x, float y,float T)
{
    dimx=15;
    dimy=15;
    this->posx=x;
    this->posy=y;
    this->tipo=T;
    this->velx=85;
    this->vely=85;
    this->vel=20;
    this->angulo=((.5*3.147)/180);
    setPos(posx, posy);

}
void Punch::CalcularPos()
{
    if(tipo==-1){//Sentido de Derecha a Izquierda.
        posx-=velx*tiempo;//MRU
        posy-=(vely*tiempo)+(0.5*9.8)*pow(tiempo,2);//Ecuacion de posicion.MRUA
    }else if(tipo==1){//Sentido de Izquierda a derecha.
        posx+=velx*tiempo;//MRU
        posy-=(vely*tiempo)-(0.5*9.8)*pow(tiempo,2);//Ecuacion de posicion.MRUA
    }
    setPos(posx,posy);
}

void Punch::CalcularVel()
{
    velx= vel*cos(angulo);
    vely=vel*sin(angulo)-9.8*tiempo;
}

void Punch::ActualizarVelocidad()
{
    vel=sqrt(pow(velx,2)+pow(vely,2));
    angulo=atan2(vely,velx);
}

void Punch::Calcular()
{
    ActualizarVelocidad();
    CalcularVel();
    CalcularPos();
}

QRectF Punch::boundingRect() const
{
    return QRectF(-15,-15,2*dimx,2*dimy);
}

void Punch::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(boundingRect());
}
