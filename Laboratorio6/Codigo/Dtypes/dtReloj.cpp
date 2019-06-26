//
// Created by gsoto on 25/06/2019.
//

#include "dtReloj.h"

#include "../Clases/Reloj.h"
#include "../Dtypes/dtFecha.h"
#include "../Dtypes/dtHora.h"

using  namespace std;

dtReloj::dtReloj() {}
dtReloj::dtReloj(dtFecha fecha, dtHora hora) {

    this->fecha=fecha;
    this->hora=hora;
}
dtFecha dtReloj::getFecha() {
    return this->fecha;
}

dtHora dtReloj::getHora() {
    return this->hora;
}
dtReloj::~dtReloj() {}