//
// Created by gsoto on 17/06/2019.
//

#include "dtPelicula.h"

dtPelicula::dtPelicula() {}
dtPelicula::dtPelicula(string titulo, string sipnosis, string poster, float puntaje) : titulo(titulo), sipnosis(sipnosis), poster(poster), puntaje(puntaje){}

string dtPelicula::getTitulo(){
    return this->titulo;
}

void dtPelicula::setTitulo(string titulo){
    this->titulo=titulo;
}

string dtPelicula::getSipnosis(){
    return this->sipnosis;
}

void dtPelicula::setSipnosis(string sipnosis){
    this->sipnosis=sipnosis;
}

string dtPelicula::getPoster(){
    return this->poster;
}

void dtPelicula::setPoster(string poster){
    this->poster=poster;
}

float dtPelicula::getPuntaje(){
    return this->puntaje;
}

void dtPelicula::setPuntaje(float puntaje){
    this->puntaje=puntaje;
}

dtPelicula::~dtPelicula() {}