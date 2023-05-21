
#include "gamebase.h"

float GameBase::getPosx() const
{
    return posx;
}

void GameBase::setPosx(float newPosx)
{
    posx = newPosx;
}

float GameBase::getPosy() const
{
    return posy;
}

void GameBase::setPosy(float newPosy)
{
    posy = newPosy;
}

float GameBase::getDimx() const
{
    return dimx;
}

void GameBase::setDimx(float newDimx)
{
    dimx = newDimx;
}

float GameBase::getVelx() const
{
    return velx;
}

void GameBase::setVelx(float newVelx)
{
    velx = newVelx;
}

float GameBase::getVely() const
{
    return vely;
}

void GameBase::setVely(float newVely)
{
    vely = newVely;
}

float GameBase::getGrabedad() const
{
    return grabedad;
}

void GameBase::setGrabedad(float newGrabedad)
{
    grabedad = newGrabedad;
}

GameBase::GameBase()
{

}

float GameBase::getAngulo() const
{
    return angulo;
}

void GameBase::setAngulo(float newAngulo)
{
    angulo = newAngulo;
}

int GameBase::getDireccion() const
{
    return direccion;
}

void GameBase::setDireccion(int newDireccion)
{
    direccion = newDireccion;
}

int GameBase::getTipo() const
{
    return tipo;
}

void GameBase::setTipo(int newTipo)
{
    tipo = newTipo;
}

float GameBase::getVel() const
{
    return vel;
}

void GameBase::setVel(float newVel)
{
    vel = newVel;
}

float GameBase::getDimy() const
{
    return dimy;
}

void GameBase::setDimy(float newDimy)
{
    dimy = newDimy;
}

