//
// Created by yokad on 6/6/2019.
//

#ifndef CODIGO_FABRICA_H
#define CODIGO_FABRICA_H

<<<<<<< Updated upstream
#include "Inrterfaces/IctrInicioSesion.h"
#include "Inrterfaces/IctrAltaCine.h"
#include "Inrterfaces/IctrPuntuarPelicula.h"
#include "Inrterfaces/IctrAltaFuncion.h"
#include "Inrterfaces/IctrComentarPelicula.h"
=======
#include "IctrInicioSesion.h"
#include "IctrAltaCine.h"
#include "IctrPuntuarPelicula.h"
#include "IctrAltaFuncion.h"

>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
        IctrComentarPelicula* getIcontrolador5();
=======

>>>>>>> Stashed changes
        ~Fabrica();
};


#endif //CODIGO_FABRICA_H
