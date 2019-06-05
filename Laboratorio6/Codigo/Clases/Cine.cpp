//
// Created by yokad on 6/4/2019.
//

#include "Cine.h"

Cine::Cine() {}

Cine::Cine(int id, const Direccion &direccion){
    this -> id =id;
    this -> direccion =direccion;
}


int Cine::getId() const {
    return id;
}

void Cine::setId(int id) {
    this-> id = id;
}

const Direccion &Cine::getDireccion() const {
    return direccion;
}

void Cine::setDireccion(const Direccion &direccion) {
    this-> direccion = direccion;
}
