
#ifndef GAME_H
#define GAME_H

#include <QDebug>
#include <QGraphicsScene>
#include <QTimer>
#include <QVector>
#include <QPixmap>
#include <QKeyEvent>
#include <QMainWindow>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QPainter>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include "nave.h"
#include "proyectil.h"
#include "portal.h"
#include "punch.h"
#include "lanzador.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Game; }
QT_END_NAMESPACE

class Game : public QMainWindow

{
    Q_OBJECT
    bool K1=true;
    bool K2=false;
    float Point1=0;

public:
    Game(QWidget *parent = nullptr);
    ~Game();

    int getBomba() const;
    void setBomba(int newBomba);
    void CargarBomba(int);
    void NumRand();
    void timerEvent(QTimerEvent *event());


private slots:
    void on_pushButton_clicked();
    void CargarMundo();
    void ReboteDestruk();
    void EjectMove();
    void CargaB();
    void CargaMov();


private:
    Ui::Game *ui;
    QGraphicsScene  *mundo;
    Nave *Destruk;
    Punch *Punc;

    ///////LANZADORES///////

    Lanzador *P1;
    Lanzador *P2;
    Lanzador *P3;
    Lanzador *P4;
    /////////PORTAL/////////
    Portal *portal;
    ////////MISIL///////////
    Proyectil *Misil;
    ////VARIABLES PUBLIC////
    int Bomba;
    bool cargar=true;
    int NaveVel=0;
    ///////FUNCIONES DE ACCION///////
    void keyPressEvent(QKeyEvent * event);
    void colisiones(void);

    ////////////TIMERS///////////////

    QTimer *TimeRot;
    QTimer *TimeMov;
    QTimer *TimePM;
    QTimer *TimeBoom;

    ////////////////////////////////
};

#endif // GAME_H
