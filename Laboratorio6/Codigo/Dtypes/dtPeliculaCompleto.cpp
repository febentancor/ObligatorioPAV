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

float dtPeliculaCompleto::getPunaje(){
    return this->puntaje;
}

list<dtPuntaje*> dtPeliculaCompleto::getListaPuntajes(){
    return this->listaPuntajes;
}

dtPeliculaCompleto::~dtPeliculaCompleto() {}