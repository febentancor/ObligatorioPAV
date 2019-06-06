//
// Created by yokad on 6/6/2019.
//

#include "Fabrica.h"
#include "CtrIniciarSesion.h"
#
Fabrica* Fabrica::instancia = NULL;

Fabrica::Fabrica(){}

Fabrica* Fabrica::getInstancia(){
    if (instancia == NULL)
        instancia = new Fabrica();
    return instancia;
}

IctrInicioSesion* Fabrica::getIControlador(){
    return new CtrIniciarSesion();
}

Fabrica::~Fabrica(){}
