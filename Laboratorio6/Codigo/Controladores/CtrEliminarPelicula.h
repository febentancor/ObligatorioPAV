//
// Created by gon on 20/06/19.
//

#ifndef CODIGO_CTRELIMINARPELICULA_H
#define CODIGO_CTRELIMINARPELICULA_H


#include "IctrEliminarPelicula.h"

class CtrEliminarPelicula: public IctrEliminarPelicula {
public:
    CtrEliminarPelicula();

    bool existePelicula(string);

    list<string> listarPelicula();

    void eliminarPelicula(string);
};
#endif //CODIGO_CTRELIMINARPELICULA_H
