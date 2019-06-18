//
// Created by mrodriguez on 18/06/19.
//

#ifndef CODIGO_ICTRHACERRESERVA_H
#define CODIGO_ICTRHACERRESERVA_H
#include "dtPelicula.h"
#include "dtCine.h"
#include "dtSala.h"
#include <list>

using namespace std;

class IctrHacerReserva{

public:
    virtual list<dtPelicula> listarPeliculas()=0;
    virtual list<dtCine> seleccionarPelicula(string)=0;
    virtual list<dtSala> seleccionarCine(int)=0;

};

#endif //CODIGO_ICTRHACERRESERVA_H
