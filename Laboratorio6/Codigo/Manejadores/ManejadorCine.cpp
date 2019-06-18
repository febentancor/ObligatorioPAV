//
// Created by yokad on 6/6/2019.
//

#include "ManejadorCine.h"
#include "Cine.h"
#include <map>
#include <list>
#include <string>

using namespace std;


ManejadorCine* ManejadorCine::instancia = NULL;

ManejadorCine::ManejadorCine() {}

ManejadorCine* ManejadorCine::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorCine();
    return instancia;
}

list<Cine*> ManejadorCine::getCines(){
    list<Cine*> lstCines;
    for (map<int,Cine*>::iterator it=this->cines.begin(); it!=cines.end(); ++it)
        lstCines.push_back(it->second);
    return lstCines;
}

Cine* ManejadorCine::buscarCine(int x){ //se cambia a x porque tiene que ser otro nombre de la variable
    map<int,Cine*>::iterator it = this->cines.find(x);
    return it->second;
}

void ManejadorCine::agregarCine(Cine* cine){
    cines.insert(std::pair<int, Cine*>(cine->getId(),cine));
}

bool ManejadorCine::existeCine(int id){
    map<int,Cine*>::iterator it = this->cines.find(id);
    return (it != this->cines.end());
}

void ManejadorCine::eliminarCine(int id){
    map<int,Cine*>::iterator it = this->cines.find(id);
    this->cines.erase(it);
}


ManejadorCine::~ManejadorCine(){}
