//
// Created by yokad on 6/4/2019.
//

#ifndef LABORATORIO6_CINE_H
#define LABORATORIO6_CINE_H

#include "Sala.h"
#include <map>

class Cine {
public:
    Cine();

    Cine(int id, const Direccion &direccion);

    int getId() const;

    void setId(int id);

    const Direccion &getDireccion() const;

    void setDireccion(const Direccion &direccion);

private:
    int id;
    Direccion direccion;
    map<int,Sala*>salas;
};



#endif //LABORATORIO6_CINE_H
