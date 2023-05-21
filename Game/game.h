
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
    bool Fire=true;
    bool artilleria;
    float Point1=0;
    int nivel=1,contBll=0;

public:
    Game(QWidget *parent = nullptr);
    ~Game();

    int getBomba() const;
    void setBomba(int newBomba);

    void CargarMundo();
    void CargarBomba();
    void NumRand();
    void timerEvent(QTimerEvent *event());

signals:
    void aviso(int);

private slots:
    void ReboteDestruk();
    void EjectMove();
    void CargaB();
    void CargaMov();
    void CargarPunch();

    void on_lcdLevel_overflow();

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
    bool carga1=true;
    bool carga2=true;
    bool carga3=true;
    bool carga4=true;

    int NaveVel=0;
    ///////FUNCIONES DE ACCION///////
    void keyPressEvent(QKeyEvent * event);
    void colisiones(void);
    void colisiones2(void);

    ////////////TIMERS///////////////

    QTimer *TimeRot;
    QTimer *TimeMov;
    QTimer *TimePM;
    QTimer *TimeBoom;
    QTimer *TimePunch;

    ////////////////////////////////
};

#endif // GAME_H
