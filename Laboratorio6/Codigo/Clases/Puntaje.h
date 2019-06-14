#ifndef CODIGO_PUNTAJE_H
#define CODIGO_PUNTAJE_H
#include "Usuario.h"
#include <map>
#include <list>

class Puntaje{
private:
    int puntos;
    Usuario* usuario;
public:
    Puntaje();
    Puntaje(int);
    Usuario* getUsuario();
    void setUsuario(Usuario*);
    int getPuntos();
    void setPuntos(int puntos);
    string getNick();

    ~Puntaje();

};
#endif //CODIGO_PUNTAJE_H
