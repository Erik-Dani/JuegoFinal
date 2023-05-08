
#include "game.h"
#include "ui_game.h"


Game::Game(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Game)
{
    ui->setupUi(this);
    mundo=new QGraphicsScene(this);
    ui->graphicsView->scale(.8,.8);
    ui->graphicsView->setScene(mundo);
    mundo->setSceneRect(500,0,1000,800);
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

void Game::CargarMundo()
{
    NaveVel=10;
    Destruk =new Nave(100,100,30);
    mundo->addItem(Destruk);
    TimeRot = new QTimer;
    TimeRot->start(100);

    connect(TimeRot,SIGNAL(timeout()),this, SLOT(ReboteDestruk()));
    //TimeRot->stop();
}

void Game::ReboteDestruk()
{
    if(Destruk->getPosx()<mundo->width()-36)  Destruk->Movimiento(Destruk->getPosx()+NaveVel,Destruk->getPosy());
    else {
        NaveVel *= -1;
        Destruk->Movimiento(mundo->width()-36+NaveVel,Destruk->getPosy());
    }

    if(Destruk->getPosx()>0) Destruk->Movimiento(Destruk->getPosx()+NaveVel,Destruk->getPosy());
    else {
        NaveVel *= -1;
        Destruk->Movimiento(0+NaveVel,Destruk->getPosy());
    }
}
