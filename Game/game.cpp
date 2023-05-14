
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
    mundo->addItem(Destruk);
    portal=new Portal(1030,830);
    mundo->addItem(portal);
    TimeRot = new QTimer;
    TimeMov = new  QTimer;
    TimeBoom = new  QTimer;
    TimeRot->start(40);
    connect(TimeRot,SIGNAL(timeout()),this, SLOT(ReboteDestruk()));//Timer para mover la nave
    TimeMov->start(0);
    connect(TimeMov,SIGNAL(timeout()),this, SLOT(EjectMove()));
    TimeBoom->start(12000);
    connect(TimeBoom,SIGNAL(timeout()),this, SLOT(CargaB()));
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
    mundo->advance();
    NumRand();
    Point1=Destruk->getPosx();
    CargarBomba(Point1+100);
    colisiones();
}


void Game::CargaB()
{
    cargar=true;
}


void Game::colisiones()
{
    qDebug()<<"Actual tamaño :"<<Destruk->Misiles.size();
    for(auto it: Destruk->Misiles){
        if((abs(portal->getPosx()-it->getPosx())<100 && abs(portal->getPosy()-it->getPosy())<100)||(abs(it->getPosx()-portal->getPosx())<100 && abs(it->getPosy()-portal->getPosy())<100)){
            Proyectil *p = Destruk->Misiles.first();
            Destruk->Misiles.remove(0);
            mundo->removeItem(it);
        }else if(it->getPosy()>1200 ){
            Proyectil *p = Destruk->Misiles.first();
            Destruk->Misiles.remove(0);
            mundo->removeItem(it);
            qDebug()<<"Actual tamaño :"<<Destruk->Misiles.size();
        }
    }
}


void Game::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_W){
        portal->MoveUp();
    } else if(event->key()==Qt::Key_S){
        portal->MoveDown();
    }else if(event->key()==Qt::Key_D){
        portal->MoveRight();
    }else if(event->key()==Qt::Key_A){
        portal->MoveLeft();
    }
}


int Game::getBomba() const
{
    return Bomba;
}

void Game::setBomba(int newBomba)
{
    Bomba = newBomba;
}


void Game::CargarBomba( int P)
{
    if(getBomba()%2==0 && cargar==true){
        cargar=false;
        auto B = Destruk->Disparar(P);
        if(B!=nullptr) mundo->addItem(B);
    }
}
