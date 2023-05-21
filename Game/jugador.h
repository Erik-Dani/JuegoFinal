
#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include <qstring.h>
class jugador
{
public:
    QString nombre;
    int puntaje;
    jugador();

    int getPuntaje() const;
    QString getNombre() const;

    void setPuntaje(int newPuntaje);
    void setNombre(const QString &newNombre);
};

#endif // JUGADOR_H
