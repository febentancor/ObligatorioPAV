//
// Created by gsoto on 20/06/2019.
//

#ifndef CODIGO_ICTRVERCOMENTARIOYPUNTAJE_H
#define CODIGO_ICTRVERCOMENTARIOYPUNTAJE_H

#include "dtInfoPelicula.h"
#include "dtPeliculaCompleto.h"
#include <list>

using namespace std;

class IctrVerComentarioYPuntaje{

public:
    virtual list<string> listarPeliculas()=0;
    virtual list<dtPeliculaCompleto> seleccionarPeliculaV(string)=0;
};

#endif //CODIGO_ICTRVERCOMENTARIOYPUNTAJE_H
