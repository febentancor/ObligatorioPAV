//
// Created by yokad on 6/4/2019.
//
#include "../Dtypes/dtFecha.h"
#include "../Clases/Funcion.h"
#include "../Dtypes/dtHorario.h"

Funcion::Funcion(){}
int Funcion::idAutoF=-1;

Funcion::Funcion(dtFecha dia, dtHorario horario, int precioFuncion) {
    this -> id = Funcion::getIdAutoF();
    this ->dia = dia;
    this -> horario = horario;
    this->precioFuncion = precioFuncion;
};
int Funcion::getPrecioFuncion() {
    return  this->precioFuncion;
}
void Funcion::setPrecioFuncion(int precio){
    this ->precioFuncion=precio;
}

int Funcion::getId() {
    return  this->id;
}
void Funcion::setId(int id) {
    this ->id=id;
}
int Funcion::getIdAutoF() {
    idAutoF++;
    return idAutoF;
}

dtFecha Funcion::getDia() {
    return this->dia;
}
void Funcion::setDia(dtFecha dia) {
    this->dia=dia;
}

dtHorario Funcion::getHora() {
    return  this->horario;
}
void Funcion::setHora(dtHorario horario)  {
    this->horario = horario;
}

string Funcion::getTituloPelicula(){

    return this->pelicula->getTitulo();

}
void Funcion::setPelicula(Pelicula * p) {
    this->pelicula = p;

}
void Funcion::ingresarReserva(Reserva * fu, int id) {
    reservas.insert(std::pair<int,Reserva*>(id,fu));
}
Funcion::~Funcion() {
    //delete de cada reserva
    for(map<int,Reserva*>::iterator it = reservas.begin(); it != reservas.end(); ++it)
        delete((*it).second);
}
