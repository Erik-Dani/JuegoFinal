
#ifndef LANZADOR_H
#define LANZADOR_H

#include <QDebug>
#include <QGraphicsScene>
#include <QTimer>
#include <QPixmap>

#include <QGraphicsItem>
#include <QPainter>
#include <QVector>
#include "punch.h"
#include <math.h>
#include "gamebase.h"

class Lanzador : public QObject, public QGraphicsPixmapItem, public GameBase
{

public:
    Lanzador(float, float);

    Punch* Disparar(float ); //me retorna un puntero de la clase dispaprar

    QVector<Punch *> Galactic;

    QRectF boundingRect() const ;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = nullptr);
};

#endif // LANZADOR_H
