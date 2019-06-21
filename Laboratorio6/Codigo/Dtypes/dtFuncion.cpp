//
// Created by gsoto on 17/06/2019.
//

#include "dtFuncion.h"
#include "dtHorario.h"
#include "dtFecha.h"

dtFuncion::dtFuncion() {}
int dtFuncion::idAutoF=-1;

dtFuncion::dtFuncion(dtFecha dia, dtHorario horario) {
    this ->dia = dia;
    this -> horario = horario;
    this->idFuncion= dtFuncion::getIdAutoF();
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

int dtFuncion::getIdFuncion() {
    return this->idFuncion;
}

void dtFuncion::setIdFuncion(int idFuncion) {
    this->idFuncion=idFuncion;
}

int dtFuncion::getIdAutoF() {
    idAutoF++;
    return idAutoF;
}
dtFuncion::~dtFuncion() {}