
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
#include <math.h>
#include "gamebase.h"

#define tiempo 0.2

class Punch : public QObject, public QGraphicsPixmapItem, public GameBase
{

public:

    Punch(float, float, float);

    void CalcularPos();
    void CalcularVel();
    void ActualizarVelocidad();
    void Calcular();

    virtual QRectF boundingRect() const ;

    virtual void paint(QPainter *painter,
        const QStyleOptionGraphicsItem *option,
        QWidget *widget = nullptr);
};

#endif // PUNCH_H
