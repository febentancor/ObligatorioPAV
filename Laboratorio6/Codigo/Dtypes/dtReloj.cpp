//
// Created by yokad on 6/21/2019.
//

#include "dtReloj.h"

dtReloj::dtReloj() {}

dtHorario dtReloj::getHora() {
    return this->horario;
}

void dtReloj::setHora(dtHorario hora) {
    this->horario=hora;
}

dtFecha dtReloj::getFecha() {
    return this->fecha;
}

void dtReloj::setFecha(dtFecha fecha) {
    this->fecha=fecha;
}
