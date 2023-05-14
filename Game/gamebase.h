
#ifndef GAMEBASE_H
#define GAMEBASE_H

#include <QDebug>
#include <QGraphicsScene>
#include <QTimer>
#include <QPixmap>
#include <QKeyEvent>
#include <QMainWindow>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QPainter>
using namespace std;

class GameBase
{

private:

    double posx, posy;
    double dimx, dimy;
    double velx, vely;
    double grabedad;

public:
    GameBase();

    double getPosx() const;
    double getPosy() const;
    double getDimx() const;
    double getVelx() const;
    double getVely() const;
    double getGrabedad() const;

    void setPosx(double newPosx);
    void setPosy(double newPosy);
    void setDimx(double newDimx);
    void setVelx(double newVelx);
    void setVely(double newVely);
    void setGrabedad(double newGrabedad);
};

#endif // GAMEBASE_H
