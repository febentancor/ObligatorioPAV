//
// Created by gsoto on 20/06/2019.
//

#ifndef CODIGO_ICTRVERINFOPELICULA_H
#define CODIGO_ICTRVERINFOPELICULA_H

#include "../Dtypes/dtInfoPelicula.h"
#include "../Dtypes/dtPelicula.h"
#include "../Dtypes/dtCine.h"
#include "../Dtypes/dtSala.h"
#include <list>

using namespace std;

class IctrVerinfoPelicula{

public:
    virtual list<string> listarPeliculas()=0;
    virtual list<dtInfoPelicula> seleccionarPeliculaV(string)=0;
    virtual list<dtCine> listarCine()=0;
    virtual list<dtFuncion> seleccionarCine(int)=0;
};








#endif //CODIGO_ICTRVERINFOPELICULA_H
