
#include "gamebase.h"

double GameBase::getPosx() const
{
    return posx;
}

void GameBase::setPosx(double newPosx)
{
    posx = newPosx;
}

double GameBase::getPosy() const
{
    return posy;
}

void GameBase::setPosy(double newPosy)
{
    posy = newPosy;
}

double GameBase::getDimx() const
{
    return dimx;
}

void GameBase::setDimx(double newDimx)
{
    dimx = newDimx;
}

double GameBase::getVelx() const
{
    return velx;
}

void GameBase::setVelx(double newVelx)
{
    velx = newVelx;
}

double GameBase::getVely() const
{
    return vely;
}

void GameBase::setVely(double newVely)
{
    vely = newVely;
}

double GameBase::getGrabedad() const
{
    return grabedad;
}

void GameBase::setGrabedad(double newGrabedad)
{
    grabedad = newGrabedad;
}

GameBase::GameBase()
{

}

