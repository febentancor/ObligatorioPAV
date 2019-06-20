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
    virtual list<dtInfoPelicula> seleccionarPeliculaC(string)=0;
    virtual list<dtCine> listarCine()=0;
    virtual list<dtFuncion> seleccionarCine(int)=0;
    virtual void seleccionarFuncion(int)=0;
    virtual void ingresarCantidadAsientos(int)=0;
    virtual void ingresarTipoPago(int)=0;
    virtual void ingresarNombreDeBanco(string)=0;
    virtual float ingresarFinanciera(int)=0;
    virtual float verPrecioTotal()=0;



};

#endif //CODIGO_ICTRHACERRESERVA_H
