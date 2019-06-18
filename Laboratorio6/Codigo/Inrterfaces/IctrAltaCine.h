//
// Created by yokad on 6/6/2019.
//

#ifndef CODIGO_ICTRALTACINE_H
#define CODIGO_ICTRALTACINE_H

#include <string>
#include <dtDireccion.h>

using namespace std;


class IctrAltaCine {
public:
    virtual void ingresarDireccion(dtDireccion)=0;
    virtual bool ingresarCapacidad(int)=0;
    virtual void darAltaCine ()=0;

};


#endif //CODIGO_ICTRALTACINE_H
