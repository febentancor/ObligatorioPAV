//
// Created by yokad on 6/6/2019.
//

#ifndef LABORATORIO6_FABRICA_H
#define LABORATORIO6_FABRICA_H

#include "IctrInicioSesion.h"
#include "IctrAltaCine.h"

class Fabrica{
    private:
        static Fabrica* instancia;
        Fabrica();
    public:
        static Fabrica* getInstancia();
        IctrInicioSesion* getIControlador();
        IctrAltaCine* getIControlador2();
        ~Fabrica();
};


#endif //LABORATORIO6_FABRICA_H
