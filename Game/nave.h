
#ifndef NAVE_H
#define NAVE_H

#include <QDebug>
#include <QGraphicsScene>
#include <QTimer>
#include <QPixmap>

#include <QGraphicsItem>
#include <QPainter>
#include <QVector>
#include "proyectil.h"

#define DT 0.2

class Nave : public QObject, public QGraphicsPixmapItem

{
    float posx=0, posy=0;
    int radio=0;
    float velocidad=0;



public:

    Nave(float , float );

    Proyectil* Disparar(float ); //me retorna un puntero de la clase dispaprar
    Proyectil* EliminarProyectil();//me elimina las bombas lanzadas.

    QTimer *MisilPos;
    QVector<Proyectil *> Misiles;
    int getPosx() const;
    void setPosx(float newPosx);
    int getPosy() const;
    void setPosy(float newPosy);
    int getVelocidad() const;
    void setVelocidad(float newVelocidad);

    void Movimiento(float);

    QRectF boundingRect() const ;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = nullptr);

};
#endif // NAVE_H
