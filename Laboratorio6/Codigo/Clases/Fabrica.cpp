//
// Created by yokad on 6/6/2019.
//

<<<<<<< Updated upstream
#include "Clases/Fabrica.h"
#include "Controladores/CtrIniciarSesion.h"
#include "Controladores/CtrAltaCine.h"
#include "Controladores/CtrPuntuarPelicula.h"
#include "Controladores/CtrAltaFuncion.h"
#include "Controladores/CtrComentarPelicula.h"

=======
#include "Fabrica.h"
#include "CtrIniciarSesion.h"
#include "CtrAltaCine.h"
#include "CtrPuntuarPelicula.h"
#include "CtrAltaFuncion.h"
>>>>>>> Stashed changes

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
<<<<<<< Updated upstream
IctrAltaFuncion* Fabrica::getIControlador4(){
    return new CtrAltaFuncion();
};
IctrComentarPelicula* Fabrica::getIcontrolador5() {
    return new CtrComentarPelicula();
}

=======

IctrAltaFuncion* Fabrica::getIControlador4(){
    return new CtrAltaFuncion();
}


>>>>>>> Stashed changes
Fabrica::~Fabrica(){}
