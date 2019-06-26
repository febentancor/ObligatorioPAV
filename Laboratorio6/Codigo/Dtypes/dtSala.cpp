//
// Created by gsoto on 17/06/2019.
//

#include "../Dtypes/dtSala.h"

dtSala::dtSala() {}
dtSala::dtSala(int idSala, int capacidad) : idSala(idSala), capacidad(capacidad) {}

int dtSala::getIdSala() {
    return idSala;
}

int dtSala::getCapacidad() {
    return capacidad;
}

dtSala::~dtSala() {}