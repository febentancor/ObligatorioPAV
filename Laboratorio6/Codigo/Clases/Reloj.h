//
// Created by yokad on 6/22/2019.
//

#ifndef CODIGO_RELOJ_H
#define CODIGO_RELOJ_H

#include "dtHorario.h"
#include "dtFecha.h"
#include <string>


class Reloj {
private:
    dtHorario hora;
    dtFecha fecha;
public:
    Reloj();
    Reloj(dtFecha, dtHorario);
    void setFecha(dtFecha);
    dtFecha getFecha();
    void setHora(dtHorario);
    dtHorario getHora();
};


#endif //CODIGO_RELOJ_H
