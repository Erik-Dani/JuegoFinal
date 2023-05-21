
#ifndef NAVE_H
#define NAVE_H

#include <QDebug>
#include <QGraphicsScene>
#include <QTimer>
#include <QPixmap>

#include <QGraphicsItem>
#include <QPainter>
#include <QVector>
#include <math.h>
#include "proyectil.h"
#include "gamebase.h"

#define tiempo 1;

class Nave : public QObject, public QGraphicsPixmapItem, public GameBase

{

public:

    Nave(float, float );

    Proyectil* Disparar(); //me retorna un puntero de la clase dispaprar
    QVector<Proyectil *> Misiles;
    void Movimiento(float);

    QRectF boundingRect() const ;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = nullptr);

};
#endif // NAVE_H
