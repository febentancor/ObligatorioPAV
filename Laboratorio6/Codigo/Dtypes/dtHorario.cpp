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

string dtHorario::getHoraFin() {
    return horaFin;
}

dtHorario::~dtHorario(){}


