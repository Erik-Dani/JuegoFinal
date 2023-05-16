
#include "game.h"
#include "ui_game.h"


Game::Game(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Game)
{
    ui->setupUi(this);
    mundo=new QGraphicsScene(this);
    ui->graphicsView->scale(.5,.5);
    ui->graphicsView->setScene(mundo);
    mundo->setSceneRect(+500,0,1200,800);
    connect(ui->pushButton,&QPushButton::clicked,this, &Game::CargarMundo);
}


Game::~Game()
{
    delete ui;
}


void Game::on_pushButton_clicked()
{
    ui->pushButton->hide();
}


void Game::CargarMundo()//carga los personajes principales.
{

    NaveVel=4;
    Destruk =new Nave(10,-180);
    P1=new Lanzador(1600,600);
    mundo->addItem(Destruk);
    mundo->addItem(P1);
    portal=new Portal(1030,830);
    mundo->addItem(portal);
    TimeRot = new QTimer;
    TimeMov = new  QTimer;
    TimeBoom = new  QTimer;
    TimePM = new QTimer;
    TimePunch = new QTimer;

    connect(TimeRot,SIGNAL(timeout()),this, SLOT(ReboteDestruk()));//Timer para mover la nave
    TimeRot->start(40);
    connect(TimeMov,SIGNAL(timeout()),this, SLOT(EjectMove()));
    TimeMov->start(0);
    connect(TimeBoom,SIGNAL(timeout()),this, SLOT(CargaB()));
    TimeBoom->start(5000);
    connect(TimePM,SIGNAL(timeout()),this, SLOT(CargaMov()));
    TimePM->start(100);

    connect(TimePunch,SIGNAL(timeout()),this, SLOT(CargarPunch()));
    TimePunch->start(100);
}


void Game::ReboteDestruk()//Movimiento de la nave.
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
}


void Game::CargaB()
{
    cargar=true;
    if(getBomba()%5==0) Fire=true;
}

void Game::CargaMov()
{
    for(auto IA: P1->Galactic){
        IA->Calcular();
    }

    /*or(auto IB: Destruk->Misiles){
        IB->Calcular();
    }*/
}

void Game::CargarPunch()
{
    if(getBomba()%3==0 && Fire == true){
        Fire=false;
        auto C1=P1->Disparar(650,650);
        if(C1!=nullptr) mundo->addItem(C1);
    }
}


void Game::colisiones()
{
    for(auto it: Destruk->Misiles){
        if((abs(portal->getPosx()-it->getPosx())<100 && abs(portal->getPosy()-it->getPosy())<100)||(abs(it->getPosx()-portal->getPosx())<100 && abs(it->getPosy()-portal->getPosy())<100)){            
            Destruk->Misiles.remove(0);
            mundo->removeItem(it);
        }else if(it->getPosy()>1200 ){
            Destruk->Misiles.remove(0);
            mundo->removeItem(it);
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
        if(B!=nullptr) mundo->addItem(B);
    }
}
