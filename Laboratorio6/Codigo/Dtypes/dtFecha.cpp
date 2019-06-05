//
// Created by yokad on 6/4/2019.
//

#include "dtFecha.h"
dtFecha::dtFecha(){}
dtFecha::dtFecha(int dia, int mes, int anio){

    this->dia= dia;
    this->mes= mes;
    this->anio= anio;
}

dtFecha::~dtFecha() {}

int dtFecha::getDia() const {
    return dia;
}

void dtFecha::setDia(int dia) {
    dtFecha::dia = dia;
}

int dtFecha::getMes() const {
    return mes;
}

void dtFecha::setMes(int mes) {
    dtFecha::mes = mes;
}

int dtFecha::getAnio() const {
    return anio;
}

void dtFecha::setAnio(int anio) {
    dtFecha::anio = anio;
}
