//
// Created by yokad on 6/4/2019.
//
Funcion::Funcion() {}
Funcion::Funcion(int id, Fecha dia, Horario horario) {
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

Fecha Funcion::getDia() {
    return this->dia;
}
void Funcion::setDia(Fecha dia) {
    this->dia=dia;
}

Horario Funcion::getHora() {
    return  this->horario;
}
void Funcion::setHora(Horario) horario {
    this->horario = horario;
}
#include "Funcion.h"
