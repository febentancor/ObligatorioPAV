//
// Created by yokad on 6/4/2019.
//

#ifndef CODIGO_CINE_H
#define CODIGO_CINE_H

#include "../Clases/Sala.h"
#include "../Dtypes/dtDireccion.h"
#include <map>

class Cine {

private:
    int id;
    static int idAuto;
    dtDireccion direccion;
    map<int,Sala*>salas;

public:
    Cine();
    Cine(dtDireccion direccion);
    int getId();
    void setId(int id);
    dtDireccion getDireccion();
    void setDireccion(dtDireccion direccion);
    static int getIdAuto();
    void agregarSala(Sala*);
    list<Sala*> getSalas();

};



#endif //CODIGO_CINE_H
