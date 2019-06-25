//
// Created by yokad on 6/22/2019.
//

#ifndef CODIGO_RELOJ_H
#define CODIGO_RELOJ_H

#include "dtHora.h"
#include "dtFecha.h"
#include <string>


class Reloj {
private:
    dtFecha fecha;
    dtHora hora;
public:
    Reloj();
    Reloj(dtFecha,dtHora);
    dtFecha getFecha();
    void setFecha(dtFecha);
    dtHora getHora();
    void setHora(dtHora);
    ~Reloj();
};


#endif //CODIGO_RELOJ_H
