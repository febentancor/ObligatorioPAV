//
// Created by yokad on 6/4/2019.
//

#include "dtHorario.h"


dtHorario::dtHorario() {}
string dtHorario::getHoraCominezo() {
    return horaCominezo;
}

void dtHorario::setHoraCominezo(string horaCominezo) {
    dtHorario::horaCominezo = horaCominezo;
}

string dtHorario::getHoraFin() {
    return horaFin;
}

void dtHorario::setHoraFin(string horaFin) {
    dtHorario::horaFin = horaFin;
}


