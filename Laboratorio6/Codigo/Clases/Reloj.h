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
    int d;
    int m;
    int a;
    int h;
    int min;
    dtFecha fecha;
public:
    Reloj();
    Reloj(int, int, int, int, int);
    int getFecha();
    int getHora();
};


#endif //CODIGO_RELOJ_H
