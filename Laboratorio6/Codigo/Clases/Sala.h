//
// Created by yokad on 6/4/2019.
//

#ifndef LABORATORIO6_SALA_H
#define LABORATORIO6_SALA_H

#include "Funcion.h"
#include <map>
using  namespace std;

class Sala {
private:
    int id;
    int capacidad;
    map<int,Funcion*> funciones;
public:
    Sala();
    Sala (int, int);
    void setId(int);
    int getId();
    void setCapacidad(int);
    int getCapacidad(int);
    ~Sala();
};


#endif //LABORATORIO6_SALA_H
