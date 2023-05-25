#include "interfaz.h"
#include "ui_interfaz.h"


Interfaz::Interfaz(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Interfaz)
{
    ui->setupUi(this);
}

Interfaz::~Interfaz()
{
    delete ui;
}

void Interfaz::on_pushButton_clicked()
{
    Game *Jugar;
    Jugar=new Game();
    //player= new jugador();
    Jugar->setLevel_Up(1);
    Jugar->show();
    this->hide();
}


void Interfaz::on_pushButton_2_clicked()
{
    Game *Jugar;
    Jugar=new Game();
    //player= new jugador();
    Jugar->setLevel_Up(2);
    Jugar->show();
    this->hide();
}

