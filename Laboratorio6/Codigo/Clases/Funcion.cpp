//
// Created by yokad on 6/4/2019.
//
#include "dtFecha.h"
#include "Funcion.h"
#include "dtHorario.h"
Funcion::Funcion(){}
int Funcion::idAutoF=-1;
Funcion::Funcion(dtFecha dia, dtHorario horario) {
    this -> id = Funcion::getIdAuto();
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

string Funcion::getTituloPelicula(){

    return this->pelicula->getTitulo();

}

int Funcion::getIdAuto() {
    idAutoF++;
    return idAutoF;
}
Funcion::~Funcion() {}

