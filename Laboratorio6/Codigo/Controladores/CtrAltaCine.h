//
// Created by yokad on 6/6/2019.
//

#ifndef CODIGO_CTRALTACINE_H
#define CODIGO_CTRALTACINE_H

#include "IctrAltaCine.h"
#include "dtDireccion.h"
#include "Sala.h"
#include <string.h>

using namespace std;


class CtrAltaCine: public IctrAltaCine{
public:
    CtrAltaCine();
    void ingresarDireccion(dtDireccion);
    void ingresarCapacidad(int);
    void darAltaCine ();

private:
    dtDireccion dir;
    int capacidad;
    list<Sala*> salaCine;
};
#endif //CODIGO_CTRALTACINE_H
