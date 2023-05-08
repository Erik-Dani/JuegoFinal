
#include "game.h"
#include "ui_game.h"


Game::Game(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Game)
{
    ui->setupUi(this);
    mundo=new QGraphicsScene(this);
    mundo->setSceneRect(0,0,1920,1080);
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

}

