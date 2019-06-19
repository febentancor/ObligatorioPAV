//
// Created by mrodriguez on 18/06/19.
//

#ifndef CODIGO_ICTRHACERRESERVA_H
#define CODIGO_ICTRHACERRESERVA_H

#include "dtInfoPelicula.h"
#include "dtPelicula.h"
#include "dtCine.h"
#include "dtSala.h"
#include <list>

using namespace std;

class IctrCrearReserva{

public:
    virtual list<string> listarPeliculas()=0;
    virtual list<dtInfoPelicula> seleccionarPelicula(string)=0;
    virtual list<dtCine> listarCine()=0;
    virtual list<dtFuncion> seleccionarCine(int)=0;
    //virtual list<dtSala> seleccionarCine(int)=0;

};

#endif //CODIGO_ICTRHACERRESERVA_H
