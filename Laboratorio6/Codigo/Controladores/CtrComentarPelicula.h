//
// Created by Facundo on 2019-06-13.
//

#ifndef CODIGO_CTRCOMENTARPELICULA_H
#define CODIGO_CTRCOMENTARPELICULA_H
#include "Inrterfaces/IctrComentarPelicula.h"

using namespace std;

class CtrComentarPelicula: public IctrComentarPelicula {
    public:
        list<string> ListarTituloPeliculas();

};


#endif //CODIGO_CTRCOMENTARPELICULA_H
