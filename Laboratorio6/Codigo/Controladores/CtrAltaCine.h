//
// Created by yokad on 6/6/2019.
//

#ifndef LABORATORIO6_CTRALTACINE_H
#define LABORATORIO6_CTRALTACINE_H

#include "Inrterfaces/IctrAltaCine.h"
#include "./Dtypes/dtDireccion.h"
#include <string.h>

using namespace std;


class CtrAltaCine: public IctrAltaCine{
public:
    //CtrAltaCine();
     void ingresarDireccion(dtDireccion);
     bool ingresarCapacidad(int);
     void darAltaCine ();

private:
    dtDireccion dir;
    int capacidad;
};
#endif //LABORATORIO6_CTRALTACINE_H
