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
#include "Funcion.h"

class CtrCrearReserva : public IctrCrearReserva{
public:
    CtrCrearReserva();
    list<string> listarPeliculas();
    list<dtInfoPelicula> seleccionarPeliculaC(string);
    list<dtCine> listarCine();
    list<dtFuncion> seleccionarCine(int);
    void seleccionarFuncion(int);
    void ingresarCantidadAsientos(int);
    void ingresarTipoPago(int);
    void ingresarNombreDeBanco(string);
    float ingresarFinanciera(int);
    float verPrecioTotal();

private:
    Pelicula* peliculaCfuncion;
    Cine* cineReserva;
    Funcion* funcionReserva;
    int CantAsisentos;
    string nomBanco;
    int tipoPago;
    int descuento;
};


#endif //CODIGO_CTRHACERRESERVA_H
