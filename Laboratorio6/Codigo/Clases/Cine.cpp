//
// Created by yokad on 6/4/2019.
//

#include "Cine.h"
#include "Dtypes/dtDireccion.h"

Cine::Cine() {}

Cine::Cine(int id, dtDireccion &direccion){
    this -> id =id;
    this -> direccion =direccion;
}


int Cine::getId() {
    return id;
}

void Cine::setId(int id) {
    this-> id = id;
}

dtDireccion Cine::getDireccion() {
    return direccion;
}

void Cine::setDireccion(dtDireccion direccion) {
    this-> direccion = direccion;
}
