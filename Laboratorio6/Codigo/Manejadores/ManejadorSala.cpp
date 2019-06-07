//
// Created by mrodriguez on 07/06/19.
//

#include "ManejadorSala.h"
#include "./Clases/Sala.h"
#include <map>
#include <list>
#include <string>

using namespace std;

ManejadorSala* ManejadorSala::instancia = NULL;
ManejadorSala::ManejadorSala() {}
ManejadorSala* ManejadorSala::getInstancia() {
    if (instancia == NULL)
        instancia = new ManejadorSala();
    return instancia;
}

list<Sala*> ManejadorSala::getSalas() {
    list<Sala*> lstSalas;
    for(map<int,Sala*>::iterator it = this->salas.begin(); it!=salas.end(); it++)
        lstSalas.push_back(it->second);
}

Sala* ManejadorSala::buscarSala(int x) {
    map<int,Sala*>::iterator it = this->salas.find(x);
    return it->second;
}

void ManejadorSala::agregarSala(Sala* sala) {
    salas.insert(std::pair<int, Sala*>(sala->getId(), sala));
}

bool ManejadorSala::existeSala(int id){
    map<int, Sala*>::iterator it= this->salas.find(id);
    return (it != this->salas.end());
}

void ManejadorSala::eliminarSala(int id) {
    map<int, Sala*>::iterator it= this->salas.find(id);
    this->salas.erase(it);
}

ManejadorSala::~ManejadorSala(){}