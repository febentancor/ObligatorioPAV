//
// Created by yokad on 6/4/2019.
//

#include "dtDireccion.h"

dtDireccion::dtDireccion() {}
dtDireccion::dtDireccion(string calle, int numero) : calle(calle), numero(numero) {}

string dtDireccion::getCalle() {
    return calle;
}

int dtDireccion::getNumero() {
    return numero;
}

dtDireccion::~dtDireccion() {}

