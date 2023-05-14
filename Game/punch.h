
#ifndef PUNCH_H
#define PUNCH_H


#include <QDebug>
#include <QGraphicsScene>
#include <QTimer>
#include <QPixmap>
#include <QGraphicsItem>
#include <QPainter>
#include <QObject>
#include <math.h>

# define tiempo 1

class Punch : public QObject, public QGraphicsPixmapItem
{
private:
    float posx, posy;
    int dimx, dimy;
    float vel=2;

public:


    Punch(int, int);
    //QTimer *TimeMov;
    void CalcularPos();
    void CalcularVel();
    void Calcular();
    QRectF boundingRect() const ;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = nullptr);
};

#endif // PUNCH_H
