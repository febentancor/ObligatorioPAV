//
// Created by yokad on 6/4/2019.
//

#include "Sala.h"
Sala::Sala() {}
Sala::Sala(int id, int capacidad) {
    this -> id = id;
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

