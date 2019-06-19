//
// Created by yokad on 6/17/2019.
//

#ifndef CODIGO_CTRHACERRESERVA_H
#define CODIGO_CTRHACERRESERVA_H

#include "dtInfoPelicula.h"
#include "dtPelicula.h"
#include "dtCine.h"
#include "dtSala.h"
#include <list>
#include "IctrCrearReserva.h"
#include "Pelicula.h"

class CtrCrearReserva : public IctrCrearReserva{
public:
    CtrCrearReserva();
    list<string> listarPeliculas();
    list<dtInfoPelicula> seleccionarPelicula(string);
    list<dtCine> listarCine();
    list<dtFuncion> seleccionarCine(int);
private:
    string tituloCfuncion;
    Pelicula* peliculaCfuncion;
};


#endif //CODIGO_CTRHACERRESERVA_H
