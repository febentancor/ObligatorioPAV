//
// Created by yokad on 6/4/2019.
//

#ifndef LABORATORIO6_CINE_H
#define LABORATORIO6_CINE_H

#include "Sala.h"
#include "Dtypes/dtDireccion.h"
#include <map>

class Cine {

private:
    int id;
    dtDireccion direccion;
    map<int,Sala*>salas;

public:
    Cine();
    Cine(int id, dtDireccion direccion);
    int getId();
    void setId(int id);
    dtDireccion getDireccion();
    void setDireccion(dtDireccion direccion);

};



#endif //LABORATORIO6_CINE_H
