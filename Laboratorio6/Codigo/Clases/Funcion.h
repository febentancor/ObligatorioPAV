//
// Created by yokad on 6/4/2019.
//

#ifndef CODIGO_FUNCION_H
#define CODIGO_FUNCION_H


#include <dtHorario.h>
#include "Pelicula.h"
#include <dtFecha.h>


class Funcion {
private:
    int id;
    dtFecha dia;
    dtHorario horario;
    Pelicula *pelicula;
public:
    Funcion();
    Funcion(int, dtFecha, dtHorario);
    int getId();
    void setId(int);
    dtFecha getDia();
    void setDia(dtFecha);
    dtHorario getHora();
    void setHora(dtHorario);
};


#endif //CODIGO_FUNCION_H
