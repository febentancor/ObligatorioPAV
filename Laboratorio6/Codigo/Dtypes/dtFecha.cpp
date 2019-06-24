//
// Created by yokad on 6/4/2019.
//

#include "dtFecha.h"
dtFecha::dtFecha() {}
dtFecha::dtFecha(int dia, int mes, int anio) {
    this->dia=dia;
    this-> mes=mes;
    this->anio=anio;
}

dtFecha::~dtFecha() {

}

int dtFecha::getDia() {
    return dia;
}

int dtFecha::getMes() {
    return mes;
}

int dtFecha::getAnio() {
    return anio;
}
