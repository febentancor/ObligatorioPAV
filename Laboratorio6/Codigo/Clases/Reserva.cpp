//
// Created by yokad on 6/17/2019.
//

#include "Clases/Reserva.h"

Reserva::Reserva() {}
    Reserva::Reserva(float costo, int cantEntradas) {
        this->costo = costo;
        this->cantEntradas=cantEntradas;
    };

    float Reserva::getCosto(){
        return this->costo;
    };

    void Reserva::setCosto(float costo){
        this->costo=costo;
    };

    int Reserva::getCantEntradas(){
        return this->cantEntradas;
    };

    void Reserva::setCantEntradas(int cantEntradas){
        this->cantEntradas=cantEntradas;
    };
