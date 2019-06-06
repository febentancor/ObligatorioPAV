//
// Created by yokad on 6/6/2019.
//

#ifndef LABORATORIO6_FABRICA_H
#define LABORATORIO6_FABRICA_H

#include "IctrInicioSesion.h"

class Fabrica{
    private:
        static Fabrica* instancia;
        Fabrica();
    public:
        static Fabrica* getInstancia();
        IctrInicioSesion* getIControlador();
        ~Fabrica();
};


#endif //LABORATORIO6_FABRICA_H
