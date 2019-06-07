//
// Created by yokad on 6/4/2019.
//

#include "dtDireccion.h"

dtDireccion::dtDireccion() {}
dtDireccion::dtDireccion(string calle, int numero) : calle(calle), numero(numero) {}

string dtDireccion::getCalle() {
    return calle;
}

void dtDireccion::setCalle(string calle) {
    dtDireccion::calle = calle;
}

int dtDireccion::getNumero() {
    return numero;
}

void dtDireccion::setNumero(int numero) {
    this->numero = numero;
}

dtDireccion::~dtDireccion() {}

