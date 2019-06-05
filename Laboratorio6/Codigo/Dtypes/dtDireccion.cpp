//
// Created by yokad on 6/4/2019.
//

#include "dtDireccion.h"

dtDireccion::dtDireccion(){}
dtDireccion::dtDireccion(const string &calle, int numero)  {
    this ->calle =calle;
    this ->numero= numero;
}

const string &dtDireccion::getCalle() const {
    return calle;
}

void dtDireccion::setCalle(const string &calle) {
    this->calle = calle;
}

int dtDireccion::getNumero() const {
    return numero;
}

void dtDireccion::setNumero(int numero) {
    this->numero = numero;
}

dtDireccion::~dtDireccion() {}

