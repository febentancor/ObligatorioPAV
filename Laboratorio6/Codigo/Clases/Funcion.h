//
// Created by yokad on 6/4/2019.
//

#ifndef CODIGO_FUNCION_H
#define CODIGO_FUNCION_H


#include <dtHorario.h>
#include "Pelicula.h"
#include "dtFecha.h"
#include "dtHorario.h"
#include "Reserva.h"

class Funcion {
private:
    int id;
    dtFecha dia;
    dtHorario horario;
    Pelicula *pelicula;
    static int idAutoF;
    int precioFuncion;
    map<int,Reserva*>reservas;

public:
    Funcion();
    Funcion(dtFecha, dtHorario, int);
    int getPrecioFuncion();
    void setPrecioFuncion(int);
    int getId();
    void setId(int);
    dtFecha getDia();
    void setDia(dtFecha);
    dtHorario getHora();
    void setHora(dtHorario);
    static int getIdAuto();
    virtual ~Funcion();
};


#endif //CODIGO_FUNCION_H
