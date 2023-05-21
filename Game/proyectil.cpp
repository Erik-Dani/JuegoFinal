
#include "proyectil.h"

Proyectil::Proyectil(float x, float y)
{
    dimx=15;
    dimy=15;
    this->posx=x;
    this->posy=y;
    this->tipo=-1;
    this->velx=45;
    this->vely=45;
    this->vel=20;
    this->angulo=((-100*3.147)/180);
    setPos(posx, posy);
}

void Proyectil::CalcularPos()
{
    if(posx<580){//Sentido de Derecha a Izquierda.
        posx-=velx*tiempo;//MRU
        posy-=(vely*tiempo)+(0.5*9.8)*pow(tiempo,2);//Ecuacion de posicion.MRUA
    }else if(posx>=580){//Sentido de Izquierda a derecha.
        posx+=velx*tiempo;//MRU
        posy-=(vely*tiempo)-(0.5*9.8)*pow(tiempo,2);//Ecuacion de posicion.MRUA
    }
    setPos(posx,posy);
}
void Proyectil::CalcularVel()
{
    velx= vel*cos(angulo);
    vely=vel*sin(angulo)-9.8*tiempo;
}
void Proyectil::ActualizarVelocidad()
{
    vel=sqrt(pow(velx,2)+pow(vely,2));
    angulo=atan2(vely,velx);
}
void Proyectil::Calcular()
{
    CalcularVel();
    CalcularPos();
}
QRectF Proyectil::boundingRect() const
{
    return QRectF(-15,-15,dimx*2,dimy*2);
}

void Proyectil::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::red);
    painter->drawEllipse(boundingRect());
}
