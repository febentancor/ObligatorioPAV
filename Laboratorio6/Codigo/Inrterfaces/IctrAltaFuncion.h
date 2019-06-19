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
    virtual list<dtCine> seleccionarPelicula(string)=0;
    virtual list<dtSala> seleccionarCine(int)=0;
    virtual list<dtFuncion> seleccionarSala(int)=0;
    virtual bool ingresarHorario(dtFecha,dtHorario)=0;
    virtual bool existeTitulo(string)=0;
    virtual bool existeCine(int)=0;
    virtual void darAltaFuncion ()=0;
    virtual bool existeSala(int)=0; //ojo esto lo agregue para verificar si existe la sala no se si va

};


#endif //CODIGO_ICTRALTAFUNCION_H
