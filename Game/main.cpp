#include "game.h"
#include "interfaz.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Game w;
    //w.show();
    Interfaz *wn = new Interfaz();
    wn->show();


    return a.exec();
}
