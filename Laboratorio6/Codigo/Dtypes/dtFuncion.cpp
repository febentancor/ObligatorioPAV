//
// Created by gsoto on 17/06/2019.
//

#include "dtFuncion.h"
#include "dtHorario.h"
#include "dtFecha.h"

dtFuncion::dtFuncion() {}
dtFuncion::dtFuncion(dtFecha dia, dtHorario horario) {
    this ->dia = dia;
    this -> horario = horario;
};


dtFecha dtFuncion::getDia() {
    return this->dia;
}
void dtFuncion::setDia(dtFecha dia) {
    this->dia=dia;
}

dtHorario dtFuncion::getHora() {
    return  this->horario;
}
void dtFuncion::setHora(dtHorario horario)  {
    this->horario = horario;
}
dtFuncion::~dtFuncion() {}