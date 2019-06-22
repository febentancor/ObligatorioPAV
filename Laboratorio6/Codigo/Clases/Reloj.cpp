//
// Created by yokad on 6/22/2019.
//

#include "Reloj.h"
#include "dtFecha.h"
#include "dtHorario.h"

using  namespace std;

Reloj::Reloj() {}
Reloj::Reloj(dtFecha f, dtHorario h) {
    this->fecha=f;
    this->hora=h;
}

void Reloj::setFecha(dtFecha f){
    this->fecha=f
}
dtFecha Reloj::getFecha() {
    return this->fecha;
}

void Reloj::setHora(dtHorario h) {
    this->hora=h;
}

dtHorario Reloj::getHora() {
    return this->hora;
}

