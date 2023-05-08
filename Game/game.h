
#ifndef GAME_H
#define GAME_H

#include <QDebug>
#include <QGraphicsScene>
#include <QTimer>
#include <QPixmap>
#include <QKeyEvent>
#include <QMainWindow>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QPainter>
#include "nave.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Game; }
QT_END_NAMESPACE

class Game : public QMainWindow

{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);
    ~Game();


private slots:
    void on_pushButton_clicked();
    void CargarMundo();
    void ReboteDestruk();
    void eliminarBoom();

private:
    Ui::Game *ui;
    QGraphicsScene  *mundo;
    Nave *Destruk;
    int NaveVel=0;

    ////////////TIMERS///////////////

    QTimer *TimeRot;
    QTimer *TimeFire;

};

#endif // GAME_H
