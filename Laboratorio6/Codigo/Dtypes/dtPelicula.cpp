//
// Created by gsoto on 17/06/2019.
//

#include "dtPelicula.h"

dtPelicula::dtPelicula() {}
dtPelicula::dtPelicula(string titulo, string sipnosis, string poster, float puntaje) : titulo(titulo), sipnosis(sipnosis), poster(poster), puntaje(puntaje){}

string dtPelicula::getTitulo(){
    return this->titulo;
}

string dtPelicula::getSipnosis(){
    return this->sipnosis;
}

string dtPelicula::getPoster(){
    return this->poster;
}

float dtPelicula::getPuntaje(){
    return this->puntaje;
}

dtPelicula::~dtPelicula() {}