//
// Created by gsoto on 17/06/2019.
//

#include "dtCine.h"

dtCine::dtCine() {}
dtCine::dtCine(int idCine, dtDireccion direccion) : idCine(idCine), direccion(direccion) {}

int dtCine::getIdCine() {
    return idCine;
}

void dtCine::setIdCine(int idCine) {
    this->idCine = idCine;
}

dtDireccion dtCine::getDireccion() {
    return direccion;
}

void dtCine::setDireccion(dtDireccion direccion) {
   this->direccion=direccion;
}

dtCine::~dtCine() {}
