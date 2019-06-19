//
// Created by gsoto on 19/06/2019.
//

#include "dtInfoPelicula.h"

dtInfoPelicula::dtInfoPelicula() {}

dtInfoPelicula::dtInfoPelicula(string poster, string sinopsis) {
    this->poster=poster;
    this-> sinopsis=sinopsis;
}

string dtInfoPelicula::getPoster() {
    return poster;
}

void dtInfoPelicula::setPoster(string poster) {
    this->poster=poster;
}

string dtInfoPelicula::getSinopsis() {
    return sinopsis;
}

void dtInfoPelicula::setSinopsis(string sinopsis) {
    this->sinopsis=sinopsis;
}
dtInfoPelicula::~dtInfoPelicula(){}