//
// Created by gsoto on 17/06/2019.
//

#ifndef CODIGO_CTRALTAFUNCION_H
#define CODIGO_CTRALTAFUNCION_H
#include "dtPelicula.h"
#include "dtCine.h"
#include "dtSala.h"
#include <list>
#include "../Inrterfaces/IctrAltaFuncion.h"

class CtrAltaFuncion: public IctrAltaFuncion {

public:
    CtrAltaFuncion();
    list<dtPelicula> listarPeliculas();
    //list<dtCine> seleccionarPelicula(string);
    //list<dtSala> seleccionarCine(string);
    //void darAltaFuncion ();
};


#endif //CODIGO_CTRALTAFUNCION_H
