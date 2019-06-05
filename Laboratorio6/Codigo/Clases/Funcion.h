//
// Created by yokad on 6/4/2019.
//

#ifndef LABORATORIO6_FUNCION_H
#define LABORATORIO6_FUNCION_H


#include "Pelicula.h"
#include "Dtypes/dtFecha.h"
#include "Dtypes/dtHorario.h"
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


#endif //LABORATORIO6_FUNCION_H
