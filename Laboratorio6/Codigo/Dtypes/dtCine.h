//
// Created by gsoto on 17/06/2019.
//

#ifndef CODIGO_DTCINE_H
#define CODIGO_DTCINE_H
#include <string>
using namespace std;

class dtCine {
private:
    int idCine;
    string direccion;
public:
    virtual ~dtCine();

    dtCine();
    dtCine(int idCine, string direccion);

    int getIdCine();
    void setIdCine(int idCine);

    string getDireccion();
    void setDireccion(string direccion);
};


#endif //CODIGO_DTCINE_H
