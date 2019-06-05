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
    dtDireccion(const string &calle, int numero);

    const string &getCalle() const;

    void setCalle(const string &calle);

    int getNumero() const;

    void setNumero(int numero);
};


#endif //LABORATORIO6_DTDIRECCION_H
