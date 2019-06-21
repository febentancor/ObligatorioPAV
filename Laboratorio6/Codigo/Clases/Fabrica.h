//
// Created by yokad on 6/6/2019.
//

#ifndef CODIGO_FABRICA_H
#define CODIGO_FABRICA_H

#include "IctrComentarPelicula.h"

#include "IctrInicioSesion.h"
#include "IctrAltaCine.h"
#include "IctrPuntuarPelicula.h"
#include "IctrAltaFuncion.h"
#include "IctrVerinfoPelicula.h"

class Fabrica{
    private:
        static Fabrica* instancia;
        Fabrica();
    public:
        static Fabrica* getInstancia();
        IctrInicioSesion* getIControlador();
        IctrAltaCine* getIControlador2();
        IctrPuntuarPelicula* getIControlador3();
        IctrAltaFuncion* getIControlador4();
        IctrComentarPelicula* getIcontrolador5();
        IctrVerinfoPelicula* getIcontrolador7();


        ~Fabrica();
};


#endif //CODIGO_FABRICA_H
