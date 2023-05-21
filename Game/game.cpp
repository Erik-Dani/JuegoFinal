
#include "game.h"
#include "ui_game.h"


Game::Game(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Game)
{
    ui->setupUi(this);
    mundo=new QGraphicsScene(this);
    //ui->graphicsView->scale(.5,.5);
    ui->graphicsView->setScene(mundo);
    mundo->setSceneRect(0,0,1300,851);
    CargarMundo();

}


Game::~Game()
{
    delete ui;
}
void Game::CargarMundo()//carga los personajes principales.
{

    NaveVel=4;

    /////////////// DECLARACION DE OBJETOS //////////////

    Destruk =new Nave(0,60);
    portal=new Portal(1000,830);

    P1= new Lanzador(-65,520);
    P2= new Lanzador(1250,600);
    P3= new Lanzador(-65,720);
    P4= new Lanzador(1250,780);

    /////////////////////// TIMERS //////////////////////

    TimeRot = new QTimer;
    TimeMov = new  QTimer;
    TimeBoom = new  QTimer;
    TimePM = new QTimer;

    ///////////// CARGAR OBJETOS A LA ESCENA /////////////

    mundo->addItem(Destruk);
    mundo->addItem(portal);
    mundo->addItem(P1);
    mundo->addItem(P2);
    mundo->addItem(P3);
    mundo->addItem(P4);

    ///////////////////// SIGNASL & SLOTS ////////////////
    connect(this,SIGNAL(aviso(int)),this,SLOT(on_lcdLevel_overflow()));
    aviso(1);
    connect(TimeRot,SIGNAL(timeout()),this, SLOT(ReboteDestruk()));//Timer para mover la nave
    TimeRot->start(40);
    connect(TimeMov,SIGNAL(timeout()),this, SLOT(EjectMove()));
    TimeMov->start(0);
    connect(TimeBoom,SIGNAL(timeout()),this, SLOT(CargaB()));
    TimeBoom->start(700);
    connect(TimePM,SIGNAL(timeout()),this, SLOT(CargaMov()));
    TimePM->start(100);

}

    ///////////////// MOVIMIENTO DE LA NAVE ///////////////

void Game::ReboteDestruk()
{

    if(Destruk->getPosx() < mundo->width()-36 && K1==true) Destruk->Movimiento(+NaveVel);
    else {
        K1=false;
        K2=true;
    }
    if(Destruk->getPosx() > 0 && K2==true) Destruk->Movimiento(-NaveVel);
    else {
        K2=false;
        K1 =true;
    }
}
    ////////////////// NUMEROS ALEATORIOS /////////////////

void Game::NumRand()
{
    srand(time(0));
    int num= 1+(rand()%367);
    setBomba(num);
}

void Game::EjectMove()
{
    NumRand();
    CargarBomba();
    colisiones();
    if(contBll==10){
        contBll=0;
        nivel++;
        aviso(1);
    }
}
void Game::CargaB()
{
    if(getBomba()%6==0) cargar=true;
    if(getBomba()%9==0) carga1=true;
    if(getBomba()%3==0) carga2=true;
    if(getBomba()%5==0) carga3=true;
    if(getBomba()%2==0) carga4=true;
}

void Game::CargaMov()
{
    for(auto OP1: P1->Galactic){
        OP1->Calcular();
    }
    for(auto OP2: P2->Galactic){
        OP2->Calcular();
    }
    for(auto OP3: P3->Galactic){
        OP3->Calcular();
    }
    for(auto OP4: P4->Galactic){
        OP4->Calcular();
    }
    for(auto OB: Destruk->Misiles){
        OB->Calcular();
    }
}

void Game::CargarPunch()
{
//    if(getBomba()%3==0 && Fire == true){
//        Fire=false;
//        auto C1=P2->Disparar(650,650);
//        if(C1!=nullptr) mundo->addItem(C1);
//    }
}


void Game::colisiones()
{
    for(auto it: Destruk->Misiles){
        if((abs(portal->getPosx()-it->getPosx())<50 && abs(portal->getPosy()-it->getPosy())<50)||(abs(it->getPosx()-portal->getPosx())<50 && abs(it->getPosy()-portal->getPosy())<50)){
            Destruk->Misiles.remove(0);
            mundo->removeItem(it);
        }else if(it->getPosy()>1200 ){
            Destruk->Misiles.remove(0);
            mundo->removeItem(it);
        }
    }
    for (auto M1:P1->Galactic){
        if(M1->getPosx() > 1200 ){
            P1->Galactic.remove(0);
            mundo->removeItem(M1);
        }
    }
    for (auto M2:P2->Galactic){
        if(M2->getPosx()<0){
            P2->Galactic.remove(0);
            mundo->removeItem(M2);
        }
    }
    for (auto M3:P3->Galactic){
        if(M3->getPosx()>1200){
            P3->Galactic.remove(0);
            mundo->removeItem(M3);
        }
    }
    for (auto M4:P4->Galactic){
        if(M4->getPosx() < 0 ){
            P4->Galactic.remove(0);
            mundo->removeItem(M4);
        }
    }
}

void Game::colisiones2()
{

}


void Game::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_W){
        portal->MoveUp();
        qDebug()<<"Pos in y: "<<portal->getPosy();
    } else if(event->key()==Qt::Key_S){
        portal->MoveDown();
        qDebug()<<"Pos in y: "<<portal->getPosy();
    }else if(event->key()==Qt::Key_D){
        portal->MoveRight();
        qDebug()<<"Pos in x: "<<portal->getPosx();
    }else if(event->key()==Qt::Key_A){
        portal->MoveLeft();
        qDebug()<<"Pos in x: "<<portal->getPosx();
    }
}
///por cada 3 ronda acotar el espacio de lanzamiento de la nave.;

int Game::getBomba() const
{
    return Bomba;
}

void Game::setBomba(int newBomba)
{
    Bomba = newBomba;
}


void Game::CargarBomba()
{
    if(getBomba()%2==0 && cargar==true){
        cargar=false;
        auto B = Destruk->Disparar();
        contBll++;
        if(B!=nullptr) mundo->addItem(B);
        artilleria=true;

//        auto O1=P1->Disparar(1);
//        if(O1!=nullptr) mundo->addItem(O1);

//        auto O2=P2->Disparar(-1);
//        if(O2!=nullptr) mundo->addItem(O2);

//        auto O3=P3->Disparar(1);
//        if(O3!=nullptr) mundo->addItem(O3);

//        auto O4=P4->Disparar(-1);
//        if(O4!=nullptr) mundo->addItem(O4);

    }
    if(getBomba()%3==0 && carga1==true && artilleria==true){
        carga1=false;
        auto O1=P1->Disparar(1);
        if(O1!=nullptr) mundo->addItem(O1);
    }
    if(getBomba()%4==0 && carga1==true && artilleria==true){
        carga2=false;
        auto O2=P2->Disparar(-1);
        if(O2!=nullptr) mundo->addItem(O2);
    }
    if(getBomba()%2==0 && carga2==true && artilleria==true){
        carga3=false;
        auto O3=P3->Disparar(1);
        if(O3!=nullptr) mundo->addItem(O3);
    }
    if(getBomba()%2==0 && carga2==true && artilleria==true){
        carga4=false;
        auto O4=P4->Disparar(-1);
        if(O4!=nullptr) mundo->addItem(O4);
    }
    artilleria=false;
}

void Game::on_lcdLevel_overflow()
{
    ui->lcdLevel->display(nivel);
    std::cout<<nivel<<std::endl;
}

