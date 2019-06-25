//
// Created by gsoto on 25/06/2019.
//

#ifndef CODIGO_DTRELOJ_H
#define CODIGO_DTRELOJ_H

#include "dtHora.h"
#include "dtFecha.h"

class dtReloj {
private:
    dtFecha fecha;
    dtHora hora;
public:
    dtReloj();
    dtReloj(dtFecha,dtHora);
    dtFecha getFecha();
    dtHora getHora();
    ~dtReloj();
};


#endif //CODIGO_DTRELOJ_H
