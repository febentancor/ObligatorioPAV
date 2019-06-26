//
// Created by yokad on 6/6/2019.
//


#include "Fabrica.h"
#include "../Controladores/CtrIniciarSesion.h"
#include "../Controladores/CtrAltaCine.h"
#include "../Controladores/CtrPuntuarPelicula.h"
#include "../Controladores/CtrAltaFuncion.h"
#include "../Controladores/CtrComentarPelicula.h"
#include "../Controladores/CtrVerinfoPelicula.h"
#include "../Controladores/CtrCrearReserva.h"
#include "../Controladores/CtrVerComentarioYPuntaje.h"
#include "../Controladores/CtrEliminarPelicula.h"
#include "../Controladores/CtrReloj.h"
#include "../Controladores/CtrCargarDatos.h"



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
IctrComentarPelicula* Fabrica::getIcontrolador5() {
    return new CtrComentarPelicula();
}
IctrVerinfoPelicula* Fabrica::getIcontrolador7() {
    return new CtrVerinfoPelicula();
}

IctrCrearReserva* Fabrica::getIncontrolador8() {
    return new CtrCrearReserva();
}
IctrVerComentarioYPuntaje* Fabrica::getIncontrolador9() {
    return new CtrVerComentarioYPuntaje();
}

IctrEliminarPelicula* Fabrica::getIcontrolador10() {
    return new CtrEliminarPelicula();
}

IctrReloj* Fabrica::getIcontrolador11() {
    return new CtrReloj();
}
IctrCargarDatos* Fabrica::getIcontrolador12() {
    return new CtrCargarDatos();
}


Fabrica::~Fabrica(){}
