//
// Created by gsoto on 17/06/2019.
//

#ifndef CODIGO_DTCINE_H
#define CODIGO_DTCINE_H
#include <string>
#include "dtDireccion.h"
using namespace std;

class dtCine {
private:
    int idCine;
    dtDireccion direccion;
public:
    virtual ~dtCine();

    dtCine();
    dtCine(int idCine, dtDireccion direccion);

    int getIdCine();
    void setIdCine(int idCine);

    dtDireccion getDireccion();
    void setDireccion(dtDireccion direccion);
};


#endif //CODIGO_DTCINE_H
