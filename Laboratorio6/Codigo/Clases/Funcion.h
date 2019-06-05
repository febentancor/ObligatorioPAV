//
// Created by yokad on 6/4/2019.
//

#ifndef LABORATORIO6_FUNCION_H
#define LABORATORIO6_FUNCION_H


#include "Pelicula.h"

class Funcion {
private:
    int id;
    Fecha dia;
    Horario horario;
    Pelicula *pelicula;
public:
    Funcion();

    Funcion(int, Fecha, Horario);
    int getId();
    void setId(int);
    Fecha getDia();
    void setDia(Fecha);
    Horario getHora();
    void setHora(Horario);
};


#endif //LABORATORIO6_FUNCION_H
