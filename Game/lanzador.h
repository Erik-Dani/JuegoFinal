
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

class Lanzador : public QObject, public QGraphicsPixmapItem
{
    float posx, posy;
    int radio;

public:
    Lanzador(int, int);

    Punch* Disparar(); //me retorna un puntero de la clase dispaprar

    QVector<Punch *> Galactic;

    QRectF boundingRect() const ;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = nullptr);
};

#endif // LANZADOR_H
