//
// Created by yokad on 6/18/2019.
//

#include "ManejadorFunciones.h"
#include "Funcion.h"
#include <map>
#include <list>
#include <string>

using namespace std;

ManejadorFunciones* ManejadorFunciones::instancia = NULL;
ManejadorFunciones::ManejadorFunciones() {}
ManejadorFunciones* ManejadorFunciones::getInstancia() {
    if (instancia==NULL)
        instancia= new ManejadorFunciones();
    return instancia;
}

list<Funcion*> ManejadorFunciones::getFuncion(){
    list<Funcion*> lstFuncion;
    for(map<int, Funcion*>::iterator it= this->funciones.begin(); it!=funciones.end(); it++)
        lstFuncion.push_back(it->second);
}

Funcion* ManejadorFunciones::buscarFuncion(int f) {
    map<int, Funcion*>::iterator it= this->funciones.find(f);
    return  it->second;
}
void ManejadorFunciones::agregarFuncion(Funcion * funcion) {
    funciones.insert(std::pair<int, Funcion*>(funcion->getId(),funcion));
}

bool ManejadorFunciones::existeFuncion(int id) {
    map<int, Funcion*>::iterator it= this->funciones.find(id);
    return (it != this->funciones.end());
}

void ManejadorFunciones::eliminarFuncion(int id){
    map<int, Funcion*>::iterator it= this->funciones.find(id);
    this->funciones.erase(it);
}

ManejadorFunciones::~ManejadorFunciones(){}
