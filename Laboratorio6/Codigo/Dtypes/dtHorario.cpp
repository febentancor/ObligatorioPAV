//
// Created by yokad on 6/4/2019.
//

#include "dtHorario.h"


dtHorario::dtHorario() {}

dtHorario::dtHorario(string HoraCominezo, string HoraFin) {
    this->horaCominezo=HoraCominezo;
    this-> horaFin=HoraFin;
}

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
dtHorario::~dtHorario(){}


