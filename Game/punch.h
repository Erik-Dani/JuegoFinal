
#ifndef PUNCH_H
#define PUNCH_H


#include <QDebug>
#include <QGraphicsScene>
#include <QTimer>
#include <QPixmap>
#include <QGraphicsItem>
#include <QPainter>
#include <QVector>
#include "proyectil.h"

class Punch : public QObject, public QGraphicsPixmapItem
{
    float posx=0, posy=0;
    int radio=0;
    float velocidad=0;

public:

    Punch(int, int );

    QTimer *MisilPos;

    QVector<Proyectil *> Misiles;

    Proyectil* Disparar(float ); //me retorna un puntero de la clase dispaprar
    Proyectil *EliminarProyectil();//me elimina las bombas lanzadas.

    int getPosx() const;
    int getVelocidad() const;

    void setPosx(float newPosx);
    void setPosy(float newPosy);
    void setVelocidad(float newVelocidad);

    void Movimiento(float);

    QRectF boundingRect() const ;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = nullptr);
};

#endif // PUNCH_H
