//
// Created by gsoto on 17/06/2019.
//

#include "dtFuncion.h"
#include "dtHorario.h"
#include "dtFecha.h"

dtFuncion::dtFuncion() {}
//int dtFuncion::idAutoF=-1;

dtFuncion::dtFuncion(dtFecha dia, dtHorario horario, int idf) {
    this ->dia = dia;
    this -> horario = horario;
    //this->idFuncion= dtFuncion::getIdAutoF();
    this->idFuncion=idf;
};

dtFecha dtFuncion::getDia() {
    return this->dia;
}

dtHorario dtFuncion::getHora() {
    return  this->horario;
}

int dtFuncion::getIdFuncion() {
    return this->idFuncion;
}

//int dtFuncion::getIdAutoF() {
//    idAutoF++;
//    return idAutoF;
//}
dtFuncion::~dtFuncion() {}