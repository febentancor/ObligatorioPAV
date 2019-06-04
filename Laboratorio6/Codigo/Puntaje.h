#ifndef CODIGO_PUNTAJE_H
#define CODIGO_PUNTAJE_H
#include "Usuario.h"

class Puntaje{
private:
    int puntos;
    map<string,Usuario*> Usuarios;
public:
    Puntaje();
    Puntaje(int,Usuario);
    list<Usuario*> getUsuariosPuntaje();
    void agregarUsuarioPuntaje(Usuario*);
    int getPuntos();
    void setPuntos(int puntos);

    ~Puntaje();

};
#endif //CODIGO_PUNTAJE_H
