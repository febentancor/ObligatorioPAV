//
// Created by yokad on 6/4/2019.
//
#include "dtFecha.h"
#include "Funcion.h"
#include "dtHorario.h"
Funcion::Funcion(){}
int Funcion::idAutoF=-1;
Funcion::Funcion(dtFecha dia, dtHorario horario, int precioFuncion) {
    this -> id = Funcion::getIdAuto();
    this ->dia = dia;
    this -> horario = horario;
    this->precioFuncion = precioFuncion;
};

int Funcion::getId() {
    return  this->id;
}
void Funcion::setId(int id) {
    this ->id=id;
}

dtFecha Funcion::getDia() {
    return this->dia;
}
void Funcion::setDia(dtFecha dia) {
    this->dia=dia;
}

dtHorario Funcion::getHora() {
    return  this->horario;
}
void Funcion::setHora(dtHorario horario)  {
    this->horario = horario;
}
int Funcion::getIdAuto() {
    idAutoF++;
    return idAutoF;
}
Funcion::~Funcion() {}
