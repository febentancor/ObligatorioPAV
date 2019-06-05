//
// Created by yokad on 6/4/2019.
//

#include "Cine.h"
#include "Dtypes/dtDireccion.h"

Cine::Cine() {}

Cine::Cine(int id, const dtDireccion &direccion){
    this -> id =id;
    this -> direccion =direccion;
}


int Cine::getId() const {
    return id;
}

void Cine::setId(int id) {
    this-> id = id;
}

const dtDireccion &Cine::getDireccion() const {
    return direccion;
}

void Cine::setDireccion(const dtDireccion &direccion) {
    this-> direccion = direccion;
}
