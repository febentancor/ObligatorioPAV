//
// Created by yokad on 6/4/2019.
//

#include "Cine.h"
#include "Dtypes/dtDireccion.h"

Cine::Cine() {}
int Cine::idAuto=-1;

Cine::Cine(dtDireccion direccion){
    this -> id =Cine::getIdAuto();
    this -> direccion =direccion;

}


int Cine::getId() {
    return id;
}

void Cine::setId(int id) {
    this-> id = id;
}

dtDireccion Cine::getDireccion() {
    return direccion;
}

void Cine::setDireccion(dtDireccion direccion) {
    this-> direccion = direccion;
}
int Cine::getIdAuto(){
    idAuto++;
    return idAuto;
}

void Cine::agregarSala(Sala* sala){
    salas.insert(std::pair<int,Sala*>(sala->getId(),sala));
}