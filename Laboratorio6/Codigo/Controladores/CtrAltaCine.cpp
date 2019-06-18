//
// Created by yokad on 6/6/2019.
//

#include "CtrAltaCine.h"
#include "ManejadorCine.h"
#include "dtDireccion.h"
#include "Cine.h"
#include "Sala.h"

void CtrAltaCine::ingresarDireccion(dtDireccion dtd){
    this -> dir=dtd;
}
bool CtrAltaCine::ingresarCapacidad(int capSala){
    this -> capacidad=capSala;
}

void CtrAltaCine::darAltaCine (){
    Sala* s = new Sala(this->capacidad);
    dtDireccion d = this->dir;

    Cine* c = new Cine(d);
    c ->agregarSala(s);
    ManejadorCine* mC = ManejadorCine::getInstancia();
    mC -> agregarCine(c);
}

