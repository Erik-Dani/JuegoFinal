
#ifndef GAMEBASE_H
#define GAMEBASE_H

#include <QMainWindow>
#include <QGraphicsItem>
#include <QGraphicsView>

class GameBase
{
public:
    GameBase();
    float posx, posy;
    float dimx, dimy;
    float velx, vely;
    float vel;
    int tipo;
    int direccion;
    float angulo;


    float grabedad;
    float getPosx() const;
    float getPosy() const;
    float getDimx() const;
    float getVelx() const;
    float getVely() const;
    float getDimy() const;
    float getVel() const;
    float getGrabedad() const;

    void setVel(float newVel);
    void setDimy(float newDimy);
    void setPosx(float newPosx);
    void setPosy(float newPosy);
    void setDimx(float newDimx);
    void setVelx(float newVelx);
    void setVely(float newVely);
    void setGrabedad(float newGrabedad);


    int getTipo() const;
    void setTipo(int newTipo);
    int getDireccion() const;
    void setDireccion(int newDireccion);
    float getAngulo() const;
    void setAngulo(float newAngulo);
};

#endif // GAMEBASE_H
