//
// Created by gsoto on 20/06/2019.
//

#ifndef CODIGO_ICTRVERCOMENTARIOYPUNTAJE_H
#define CODIGO_ICTRVERCOMENTARIOYPUNTAJE_H

#include "dtInfoPelicula.h"
#include "dtComentario.h"
#include "dtPeliculaCompleto.h"
#include <list>
#include <map>

using namespace std;

class IctrVerComentarioYPuntaje{

public:
    virtual list<string> listarPeliculas()=0;
    virtual list<dtPeliculaCompleto> seleccionarPeliculaV(string)=0;
    virtual void imprimircmtcmtdo(map<int, dtComentario*>, int)=0;
};

#endif //CODIGO_ICTRVERCOMENTARIOYPUNTAJE_H
