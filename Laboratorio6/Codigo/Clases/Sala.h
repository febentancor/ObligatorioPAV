//
// Created by yokad on 6/4/2019.
//

#ifndef CODIGO_SALA_H
#define CODIGO_SALA_H

#include "Funcion.h"
#include <map>
using  namespace std;

class Sala {
private:
    int id;
    int capacidad;
    static int idAuto;
    map<int,Funcion*> funciones;
public:
    Sala();
    Sala (int);
    void setId(int);
    int getId();
    void setCapacidad(int);
    int getCapacidad();
    static int getIdAutoS();
    list<Funcion*> getFuncion();
    void ingresarFuncion(int,Funcion*);
    ~Sala();
};


#endif //CODIGO_SALA_H
