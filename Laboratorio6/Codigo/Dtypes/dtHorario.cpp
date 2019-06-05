//
// Created by yokad on 6/4/2019.
//

#include "dtHorario.h"



string &dtHorario::getHoraCominezo() {
    return horaCominezo;
}

void dtHorario::setHoraCominezo( string &horaCominezo) {
    this->horaCominezo = horaCominezo;
}

string &dtHorario::getHoraFin() {
    return horaFin;
}

void dtHorario::setHoraFin(string &horaFin) {
    this->horaFin = horaFin;
}

dtHorario::dtHorario() {}

