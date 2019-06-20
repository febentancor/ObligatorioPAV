//
// Created by gsoto on 20/06/2019.
//

#ifndef CODIGO_ICTRVERINFOPELICULA_H
#define CODIGO_ICTRVERINFOPELICULA_H

#include "dtInfoPelicula.h"
#include "dtPelicula.h"
#include "dtCine.h"
#include "dtSala.h"
#include <list>

using namespace std;

class IctrVerinfoPelicula{

public:
    virtual list<string> listarPeliculas()=0;
    virtual list<dtInfoPelicula> seleccionarPelicula(string)=0;
    virtual list<dtCine> listarCine()=0;
    virtual list<dtFuncion> seleccionarCine(int)=0;
};








#endif //CODIGO_ICTRVERINFOPELICULA_H
