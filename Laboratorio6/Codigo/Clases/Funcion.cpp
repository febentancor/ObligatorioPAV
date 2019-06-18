//
// Created by yokad on 6/4/2019.
//
#include <dtFecha.h>
#include <Funcion.h>
#include <dtHorario.h>
#include "Funcion.h"

Funcion::Funcion(){}
Funcion::Funcion(int id, dtFecha dia, dtHorario horario) {
    this ->id = id;
    this ->dia = dia;
    this -> horario = horario;
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
