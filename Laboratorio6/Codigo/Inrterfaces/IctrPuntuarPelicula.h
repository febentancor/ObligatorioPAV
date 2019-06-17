//
// Created by yokad on 6/13/2019.
//

#ifndef CODIGO_ICTRPUNTUARPELICULA_H
#define CODIGO_ICTRPUNTUARPELICULA_H

#include <list>
#include <string>
#include <Pelicula.h>
#include "Manejadores/ManejadorPelicula.h"

class IctrPuntuarPelicula {
public:

    virtual list<string> listarTituloPelicula()=0;
    virtual bool seleccionarPelicula(string)=0;
    virtual float verPuntaje ()=0;
    virtual void ingresarPuntaje(float)=0;
};



#endif //CODIGO_ICTRPUNTUARPELICULA_H
