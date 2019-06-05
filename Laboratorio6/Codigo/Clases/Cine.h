//
// Created by yokad on 6/4/2019.
//

#ifndef LABORATORIO6_CINE_H
#define LABORATORIO6_CINE_H

#include "Sala.h"
#include "Dtypes/dtDireccion.h"
#include <map>

class Cine {
public:
    Cine();

    Cine(int id, const dtDireccion &direccion);

    int getId() const;

    void setId(int id);

    const dtDireccion &getDireccion() const;

    void setDireccion(const dtDireccion &direccion);

private:
    int id;
    dtDireccion direccion;
    map<int,Sala*>salas;
};



#endif //LABORATORIO6_CINE_H
