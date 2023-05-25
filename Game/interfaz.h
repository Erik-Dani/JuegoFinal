#ifndef INTERFAZ_H
#define INTERFAZ_H

#include"jugador.h"
#include <QWidget>
#include <QMainWindow>
#include <game.h>

namespace Ui {
class Interfaz;
}

class Interfaz : public QWidget
{
    Q_OBJECT


public:
    explicit Interfaz(QWidget *parent = nullptr);
    ~Interfaz();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Interfaz *ui;
    jugador *player;
};

#endif // INTERFAZ_H
