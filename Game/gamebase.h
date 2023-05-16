
#ifndef GAMEBASE_H
#define GAMEBASE_H

#include <QMainWindow>
#include <QGraphicsItem>
#include <QGraphicsView>

class GameBase
{
public:
    GameBase();
    double posx, posy;
    double dimx, dimy;
    double velx, vely;
    double vel;

    double grabedad;
    double getPosx() const;
    double getPosy() const;
    double getDimx() const;
    double getVelx() const;
    double getVely() const;
    double getDimy() const;
    double getVel() const;
    double getGrabedad() const;

    void setVel(int newVel);
    void setDimy(double newDimy);
    void setPosx(double newPosx);
    void setPosy(double newPosy);
    void setDimx(double newDimx);
    void setVelx(double newVelx);
    void setVely(double newVely);
    void setGrabedad(double newGrabedad);


};

#endif // GAMEBASE_H
