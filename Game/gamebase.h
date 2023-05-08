
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

    int posx, posy;
    int dimx, dimy;
    int velx, vely;

public:
    GameBase();

};

#endif // GAMEBASE_H
