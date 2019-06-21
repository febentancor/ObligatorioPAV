//
// Created by gsoto on 17/06/2019.
//
#include <list>
#include "dtPeliculaCompleto.h"
#include "dtPuntaje.h"


dtPeliculaCompleto::dtPeliculaCompleto() {}
dtPeliculaCompleto::dtPeliculaCompleto(string titulo, float puntaje) {
    this->titulo = titulo;
    this->puntaje = puntaje;
}

string dtPeliculaCompleto::getTitulo(){
    return this->titulo;
}

void dtPeliculaCompleto::setTitulo(string titulo){
    this->titulo=titulo;
}

float dtPeliculaCompleto::getPunaje(){
    return this->puntaje;
}

void dtPeliculaCompleto::setPuntaje(float puntaje){
    this->puntaje=puntaje;
}

list<dtPuntaje*> dtPeliculaCompleto::getListaPuntajes(){
    return this->listaPuntajes;
}

void dtPeliculaCompleto::setListaPuntajes(list<dtPuntaje*> listaPuntajes)
{
    this->listaPuntajes = listaPuntajes;
}

dtPeliculaCompleto::~dtPeliculaCompleto() {}