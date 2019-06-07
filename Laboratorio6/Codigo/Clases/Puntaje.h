#ifndef CODIGO_PUNTAJE_H
#define CODIGO_PUNTAJE_H
#include "Usuario.h"
#include <map>
#include <list>

class Puntaje{
private:
    int puntos;
    map<string,Usuario*> usuarios;
public:
    Puntaje();
    Puntaje(int);
    list<Usuario*> getUsuariosPuntaje();
    void agregarUsuarioPuntaje(Usuario*);
    int getPuntos();
    void setPuntos(int puntos);

    ~Puntaje();

};
#endif //CODIGO_PUNTAJE_H
