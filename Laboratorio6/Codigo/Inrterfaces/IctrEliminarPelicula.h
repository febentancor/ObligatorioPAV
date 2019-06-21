//
// Created by gon on 20/06/19.
//

#ifndef CODIGO_ICTRELIMINARPELICULA_H
#define CODIGO_ICTRELIMINARPELICULA_H

#include <string>
#include <list>
using namespace std;

class IctrEliminarPelicula{

public:

    virtual bool existePelicula(string)=0;
    virtual list<string> listarPelicula()=0;
    virtual void eliminarPelicula(string)=0;

};
#endif //CODIGO_ICTRELIMINARPELICULA_H
