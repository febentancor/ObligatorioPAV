//
// Created by yokad on 6/4/2019.
//

#ifndef LABORATORIO6_DTDIRECCION_H
#define LABORATORIO6_DTDIRECCION_H

#include <string>

using namespace std;

class dtDireccion {
private:
    string calle;
    int numero;
public:
    virtual ~dtDireccion();

    dtDireccion();
    dtDireccion(string &calle, int numero);

    string &getCalle() ;

    void setCalle(string calle);

    int getNumero() ;

    void setNumero(int numero);
};


#endif //LABORATORIO6_DTDIRECCION_H
