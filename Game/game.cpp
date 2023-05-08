
#include "game.h"
#include "ui_game.h"


Game::Game(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Game)
{
    ui->setupUi(this);
    mundo=new QGraphicsScene(this);
    ui->graphicsView->setScene(mundo);
    mundo->setSceneRect(0,0,1920,790);
    connect(ui->pushButton,&QPushButton::clicked,this, &Game::CargarMundo);
}

Game::~Game()
{
    delete ui;
}



void Game::on_pushButton_clicked()
{
    ui->pushButton->hide();
    NaveVel=1;
}

void Game::CargarMundo()
{
    Destruk =new Nave(100,100,30);
    mundo->addItem(Destruk);
}

void Game::ReboteDestruk()
{
    if(Destruk->getPosx()<mundo->width()-36)  Destruk->Nave(Destruk->getPosx()+NaveVel,Destruk->getPosy());
    else {
        NaveVel *= -1;
        Destruk->Nave(mundo->width()-36+NaveVel,Destruk->getPosy());
    }

    if(Destruk->getPosx()>0) Destruk->Nave(Destruk->getPosx()+NaveVel,Destruk->getPosy());
    else {
        NaveVel *= -1;
        Destruk->Nave(0+NaveVel,Destruk->getPosy());
    }
}
