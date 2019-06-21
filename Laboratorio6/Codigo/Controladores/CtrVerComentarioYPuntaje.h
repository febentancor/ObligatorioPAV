//
// Created by gsoto on 20/06/2019.
//

#ifndef CODIGO_CTRVERCOMENTERIOYPUNTAJE_H
#define CODIGO_CTRVERCOMENTERIOYPUNTAJE_H

#include "IctrVerComentarioYPuntaje.h"
#include "Pelicula.h"


class CtrVerComentarioYPuntaje: public IctrVerComentarioYPuntaje{
public:
    CtrVerComentarioYPuntaje();
    list<string> listarPeliculas();
    list<dtPeliculaCompleto> seleccionarPeliculaV(string);
private:
    Pelicula* peliculaCVerComentario;
};


#endif //CODIGO_CTRVERCOMENTERIOYPUNTAJE_H
