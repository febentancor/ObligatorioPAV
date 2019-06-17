//
// Created by gsoto on 17/06/2019.
//

#include "dtCine.h"

dtCine::dtCine() {}
dtCine::dtCine(int idCine, string direccion) : idCine(idCine), direccion(direccion) {}

int dtCine::getIdCine() {
    return idCine;
}

void dtCine::setIdCine(int idCine) {
    this->idCine = idCine;
}

string dtCine::getDireccion() {
    return direccion;
}

void dtCine::setDireccion(string direccion) {
   this->direccion=direccion;
}

dtCine::~dtCine() {}
