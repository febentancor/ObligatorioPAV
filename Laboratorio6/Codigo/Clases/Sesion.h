#ifndef CODIGO_SESION_H
#define CODIGO_SESION_H

#include <string>

using namespace std;

class Sesion{
private:
    static Sesion* instancia;
    string nickname;
    bool inicioSesion;
    Sesion();
public:
    static Sesion* getInstancia();
    string getNickname();
    void setNickname(string);
    virtual ~Sesion();
    bool getInicioSesion();
    void setInicioSesion(bool);
};
#endif //CODIGO_SESION_H
