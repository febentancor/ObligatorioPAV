#ifndef CODIGO_SESION_H
#define CODIGO_SESION_H

#include "Reloj.h"
#include <string>

using namespace std;

class Sesion{
private:
    static Sesion* instancia;
    string nickname;
    bool inicioSesion;
    Reloj* reloj;
    Sesion();
public:
    static Sesion* getInstancia();
    string getNickname();
    void setNickname(string);
    virtual ~Sesion();
    bool getInicioSesion();
    void setInicioSesion(bool);
    Reloj* getReloj();
    void setReloj(Reloj*);

};
#endif //CODIGO_SESION_H
