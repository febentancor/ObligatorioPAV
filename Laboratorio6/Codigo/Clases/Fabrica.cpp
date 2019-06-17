//
// Created by yokad on 6/6/2019.
//

#include "Clases/Fabrica.h"
#include "Controladores/CtrIniciarSesion.h"
#include "Controladores/CtrAltaCine.h"
#include "Controladores/CtrPuntuarPelicula.h"
#include "Controladores/CtrAltaFuncion.h"


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

IctrPuntuarPelicula* Fabrica::getIControlador3() {
    return new CtrPuntuarPelicula();
}
IctrAltaFuncion* Fabrica::getIControlador4(){
    return new CtrAltaFuncion();
};

Fabrica::~Fabrica(){}
