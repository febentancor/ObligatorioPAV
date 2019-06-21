//
// Created by gsoto on 21/06/2019.
//

#include "ManejadorCrearReserva.h"
#include "Reserva.h"
#include <map>
#include <list>
#include <string>

using namespace std;

ManejadorCrearReserva* ManejadorCrearReserva::instancia = NULL;
ManejadorCrearReserva::ManejadorCrearReserva() {}
ManejadorCrearReserva* ManejadorCrearReserva::getInstancia() {
    if (instancia==NULL)
        instancia= new ManejadorCrearReserva();
    return instancia;
}

list<Reserva*> ManejadorCrearReserva::getReserva(){
    list<Reserva*> lstReservas;
    for(map<int, Reserva*>::iterator it= this->reservas.begin(); it!=reservas.end(); it++) {
        lstReservas.push_back(it->second);
    }
    return  lstReservas;
}

Reserva* ManejadorCrearReserva::buscarReserva(int f) {
    map<int, Reserva*>::iterator it= this->reservas.find(f);
    return  it->second;
}
void ManejadorCrearReserva::agregarReserva(Reserva * reserva) {
    reservas.insert(std::pair<int, Reserva*>(reserva->getId(),reserva));
}

bool ManejadorCrearReserva::existeReserva(int id) {
    map<int, Reserva*>::iterator it= this->reservas.find(id);
    return (it != this->reservas.end());
}

void ManejadorCrearReserva::eliminarReserva(int id){
    map<int, Reserva*>::iterator it= this->reservas.find(id);
    this->reservas.erase(it);
}

ManejadorCrearReserva::~ManejadorCrearReserva(){}