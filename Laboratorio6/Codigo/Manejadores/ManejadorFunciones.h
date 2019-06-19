//
// Created by yokad on 6/18/2019.
//

#ifndef CODIGO_MANEJADORFUNCIONES_H
#define CODIGO_MANEJADORFUNCIONES_H

#include "Funcion.h"
#include <list>
#include <map>
#include <string>

class ManejadorFunciones {
private:
    static ManejadorFunciones* instancia;
    map<int,Funcion*>funciones;
    ManejadorFunciones();

public:
    static ManejadorFunciones* getInstancia();
    list<Funcion*> getFuncion();
    Funcion* buscarFuncion(int);
    void agregarFuncion(Funcion*);
    bool existeFuncion(int);
    void eliminarFuncion(int);
    virtual ~ManejadorFunciones();
};


#endif //CODIGO_MANEJADORFUNCIONES_H
