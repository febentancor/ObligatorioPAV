//
// Created by gsoto on 17/06/2019.
//

#ifndef CODIGO_ICTRALTAFUNCION_H
#define CODIGO_ICTRALTAFUNCION_H

#include "dtPelicula.h"
#include "dtCine.h"
#include "dtSala.h"
#include <list>

using namespace std;


class IctrAltaFuncion {
public:

    virtual list<dtPelicula> listarPeliculas()=0;
    //virtual list<dtCine> seleccionarPelicula(string)=0;
    //virtual list<dtSala> seleccionarCine(string)=0;
    //virtual void darAltaFuncion ()=0;

};


#endif //CODIGO_ICTRALTAFUNCION_H
