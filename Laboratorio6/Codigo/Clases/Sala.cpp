//
// Created by yokad on 6/4/2019.
//

#include "Sala.h"
Sala::Sala() {}
int Sala::idAuto=-1;
Sala::Sala(int capacidad) {
    this -> id = Sala::getIdAuto();
    this ->capacidad = capacidad;
};

int Sala::getId() {
    return  this->id;
}
void Sala::setId(int id) {
    this ->id=id;
}
int Sala::getCapacidad() {
    return this -> capacidad;
}
void Sala::setCapacidad(int capacidad) {
    this ->capacidad=capacidad;
}

int Sala::getIdAuto() {
    idAuto++;
    return idAuto;
}