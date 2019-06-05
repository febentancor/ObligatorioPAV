//
// Created by yokad on 6/4/2019.
//

#include "dtDireccion.h"

dtDireccion::dtDireccion(const string &calle, int numero) : calle(calle), numero(numero) {}

const string &dtDireccion::getCalle() const {
    return calle;
}

void dtDireccion::setCalle(const string &calle) {
    dtDireccion::calle = calle;
}

int dtDireccion::getNumero() const {
    return numero;
}

void dtDireccion::setNumero(int numero) {
    dtDireccion::numero = numero;
}

dtDireccion::~dtDireccion() {}

