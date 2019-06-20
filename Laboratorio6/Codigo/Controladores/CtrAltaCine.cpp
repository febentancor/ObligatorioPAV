//
// Created by yokad on 6/6/2019.
//

#include "CtrAltaCine.h"
#include "ManejadorCine.h"
#include "Sala.h"
#include "dtDireccion.h"
#include "Cine.h"

CtrAltaCine::CtrAltaCine(){}

void CtrAltaCine::ingresarDireccion(dtDireccion dtd){
    this -> dir=dtd;
}

void CtrAltaCine::ingresarCapacidad(int capSala){
    this -> capacidad=capSala;
    Sala* saAcine = new Sala(capSala);
    salaCine.push_back(saAcine);
}


void CtrAltaCine::darAltaCine (){
    Sala* s = new Sala(this->capacidad);
    dtDireccion d = this->dir;

    Cine* c = new Cine(d);
    for(list<Sala*>::iterator it= salaCine.begin(); it!=salaCine.end(); ++it) {
        c ->agregarSala((*it));
    }
    ManejadorCine* mC = ManejadorCine::getInstancia();
    mC -> agregarCine(c);
}


