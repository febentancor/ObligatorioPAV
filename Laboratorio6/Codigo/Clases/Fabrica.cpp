//
// Created by yokad on 6/6/2019.
//

#include "Fabrica.h"
#include "CtrIniciarSesion.h"
#include "CtrAltaCine.h"
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

IctrAltaCine* Fabrica::getIControlador2() {
    return new CtrAltaCine();
}
Fabrica::~Fabrica(){}
