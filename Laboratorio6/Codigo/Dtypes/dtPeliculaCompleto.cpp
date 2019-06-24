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

dtPeliculaCompleto::dtPeliculaCompleto(string titulo, float puntaje, map<int, dtComentario*> comentario){

    this->titulo = titulo;
    this->puntaje = puntaje;
    this->comentarios = comentario;

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

map<int, dtComentario*> dtPeliculaCompleto::getComentarios(){
    return this->comentarios;
}

dtPeliculaCompleto::~dtPeliculaCompleto() {}