//
// Created by gsoto on 17/06/2019.
//

#ifndef CODIGO_DTSALA_H
#define CODIGO_DTSALA_H

#include "../Dtypes/dtFuncion.h"
#include <list>
#include <string>
using namespace std;

class dtSala {
private:
    int idSala;
    int capacidad;
    list<dtFuncion*> dtfunciones;
public:
    virtual ~dtSala();

    dtSala();
    dtSala(int idSala, int capacidad);

    int getIdSala();
    int getCapacidad();
};


#endif //CODIGO_DTSALA_H
