//
// Created by gsoto on 17/06/2019.
//

#include "dtSala.h"

dtSala::dtSala() {}
dtSala::dtSala(int idSala, int capacidad) : idSala(idSala), capacidad(capacidad) {}

int dtSala::getIdSala() {
    return idSala;
}

void dtSala::setIdSala(int idSala) {
    this->idSala = idSala;
}

int dtSala::getCapacidad() {
    return capacidad;
}

void dtSala::setCapacidad(int capacidad) {
    this->capacidad=capacidad;
}

dtSala::~dtSala() {}