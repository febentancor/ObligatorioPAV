//
// Created by yokad on 6/4/2019.
//

#include "dtHorario.h"



const string &dtHorario::getHoraCominezo() const {
    return horaCominezo;
}

void dtHorario::setHoraCominezo(const string &horaCominezo) {
    this->horaCominezo = horaCominezo;
}

const string &dtHorario::getHoraFin() const {
    return horaFin;
}

void dtHorario::setHoraFin(const string &horaFin) {
    this->horaFin = horaFin;
}

dtHorario::dtHorario() {}

