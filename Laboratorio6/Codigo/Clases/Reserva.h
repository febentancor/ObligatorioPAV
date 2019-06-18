//
// Created by yokad on 6/17/2019.
//

#ifndef CODIGO_RESERVA_H
#define CODIGO_RESERVA_H

#include "Funcion.h"

using namespace std;


class Reserva {
private:
    float costo;
    int cantEntradas;
   Funcion *funciones;

public:
    Reserva();
    Reserva(float,int );
    float getCosto();
    void setCosto(float);
    int getCantEntradas();
    void setCantEntradas(int);

};


#endif //CODIGO_RESERVA_H
