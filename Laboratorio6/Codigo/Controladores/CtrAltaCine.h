//
// Created by yokad on 6/6/2019.
//

#ifndef CODIGO_CTRALTACINE_H
#define CODIGO_CTRALTACINE_H

#include <IctrAltaCine.h>
#include <dtDireccion.h>
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
#endif //CODIGO_CTRALTACINE_H
