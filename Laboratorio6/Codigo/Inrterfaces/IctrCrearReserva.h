//
// Created by mrodriguez on 18/06/19.
//

#ifndef CODIGO_ICTRHACERRESERVA_H
#define CODIGO_ICTRHACERRESERVA_H

#include "../Dtypes/dtInfoPelicula.h"
#include "../Dtypes/dtPelicula.h"
#include "../Dtypes/dtCine.h"
#include "../Dtypes/dtSala.h"
#include <list>

using namespace std;

class IctrCrearReserva{

public:
    virtual list<string> listarPeliculas()=0;
    virtual list<dtInfoPelicula> seleccionarPeliculaC(string)=0;
    virtual list<dtCine> listarCineC()=0;
    virtual list<dtFuncion> seleccionarCineC(int)=0;
    virtual void seleccionarFuncion(int)=0;
    virtual void ingresarCantidadAsientos(int)=0;
    virtual void ingresarTipoPago(int)=0;
    virtual void ingresarNombreDeBanco(string)=0;
    virtual void ingresarFinanciera(int)=0;
    virtual float verPrecioTotal()=0;
    virtual int obtDescuento(string)=0;
    virtual bool existeBanco(string)=0;
    virtual void cargaFinancieras()=0;
    virtual void confirmar()=0;



};

#endif //CODIGO_ICTRHACERRESERVA_H
