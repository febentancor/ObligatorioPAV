//
// Created by yokad on 6/17/2019.
//

#include "../Clases/Reserva.h"

Reserva::Reserva() {}
int Reserva::idAutoR=-1;
    Reserva::Reserva(float costo, int cantEntradas) {
        this -> id = Reserva::getIdAutoR();
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
int Reserva::getId() {
    return  this->id;
}
void Reserva::setId(int id) {
    this ->id=id;
}
int Reserva::getIdAutoR() {
    idAutoR++;
    return idAutoR;
}
Reserva::~Reserva() {}
