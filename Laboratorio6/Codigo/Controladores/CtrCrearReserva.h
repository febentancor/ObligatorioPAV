//
// Created by yokad on 6/17/2019.
//

#ifndef CODIGO_CTRHACERRESERVA_H
#define CODIGO_CTRHACERRESERVA_H

#include "../Dtypes/dtInfoPelicula.h"
#include "../Dtypes/dtPelicula.h"
#include "../Dtypes/dtCine.h"
#include "../Dtypes/dtSala.h"
#include "../Dtypes/dtTarjetas.h"
#include <list>
#include "../Inrterfaces/IctrCrearReserva.h"
#include "../Clases/Pelicula.h"
#include "../Clases/Funcion.h"

class CtrCrearReserva : public IctrCrearReserva{
public:
    CtrCrearReserva();
    list<string> listarPeliculas();
    list<dtInfoPelicula> seleccionarPeliculaC(string);
    list<dtCine> listarCineC();
    list<dtFuncion> seleccionarCineC(int);
    void seleccionarFuncion(int);
    void ingresarCantidadAsientos(int);
    void ingresarTipoPago(int);
    void ingresarNombreDeBanco(string);
    void ingresarFinanciera(int);
    void confirmar();
    float verPrecioTotal();
    int obtDescuento(string);
    bool existeBanco(string);
    void cargaFinancieras();


private:
    Pelicula* peliculaCfuncion;
    Cine* cineReserva;
    Funcion* funcionReserva;
    int CantAsisentos;
    string nomBanco;
    int tipoPago;
    int descuento;
    float precioTotal;
    dtTarjetas* tipoDescuento;
};


#endif //CODIGO_CTRHACERRESERVA_H
