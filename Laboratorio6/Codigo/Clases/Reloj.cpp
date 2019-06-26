//
// Created by yokad on 6/22/2019.
//

#include "../Clases/Reloj.h"
#include "../Dtypes/dtFecha.h"
#include "../Dtypes/dtHora.h"

using  namespace std;

Reloj::Reloj() {}
Reloj::Reloj(dtFecha fecha, dtHora hora) {

    this->fecha=fecha;
    this->hora=hora;
}
dtFecha Reloj::getFecha() {
    return this->fecha;
}
void Reloj::setFecha(dtFecha fecha){
    this->fecha=fecha;
}

dtHora Reloj::getHora() {
    return this->hora;
}
void Reloj::setHora(dtHora hora){
    this->hora=hora;
}
Reloj::~Reloj() {}

