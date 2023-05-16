
#ifndef PROYECTIL_H
#define PROYECTIL_H

#include <QGraphicsItem>
#include <QPainter>
#include <string>
#include <QPixmap>
#include <QTimer>
#include <QDebug>
#include <math.h>
#include "gamebase.h"

#define tiempo 1;

class Proyectil :public QObject, public QGraphicsItem, public GameBase
{

public:

    Proyectil(double, double);

    void CalcularPos();
    void CalcularVel();
    void Calcular();

    virtual QRectF boundingRect() const;

    virtual void paint(
        QPainter *painter,
        const QStyleOptionGraphicsItem *option,
        QWidget *widget = nullptr);
};

#endif // PROYECTIL_H
