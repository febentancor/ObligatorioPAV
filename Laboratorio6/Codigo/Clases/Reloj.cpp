//
// Created by yokad on 6/22/2019.
//

#include "Reloj.h"
#include "dtFecha.h"
#include "dtHora.h"

using  namespace std;

Reloj::Reloj() {}
Reloj::Reloj(int d, int m, int a, int h, int min) {
    this->d=d;
    this->m=m;
    this->a=a;
    this->h=h;
    this->min=min;
    //new dtFecha(d,m,a);
    //new dtHora(h,min);
}


int Reloj::getFecha() {
    return d, m, a;
}


int Reloj::getHora() {
    return h, min;
}

