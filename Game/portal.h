
#ifndef PORTAL_H
#define PORTAL_H

#include <QDebug>
#include <QObject>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>
#include <QTimer>

class Portal : public QObject ,public QGraphicsItem
{
    int posx, posy, radio, velocidad=7;
    int dimx, dimy;
    int maximo, minimo;
public:
    Portal(int, int);

    void MoveUp();
    void MoveDown();
    void MoveLeft();
    void MoveRight();

    virtual QRectF boundingRect() const;

    virtual void paint(
        QPainter *painter,
        const QStyleOptionGraphicsItem *option,
        QWidget *widget = nullptr);
    int getPosx() const;
    void setPosx(int newPosx);
    int getPosy() const;
    void setPosy(int newPosy);
};

#endif // PORTAL_H
