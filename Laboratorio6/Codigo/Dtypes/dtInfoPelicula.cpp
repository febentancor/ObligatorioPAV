//
// Created by gsoto on 19/06/2019.
//

#include "../Dtypes/dtInfoPelicula.h"

dtInfoPelicula::dtInfoPelicula() {}

dtInfoPelicula::dtInfoPelicula(string poster, string sinopsis) {
    this->poster=poster;
    this-> sinopsis=sinopsis;
}

string dtInfoPelicula::getPoster() {
    return poster;
}

string dtInfoPelicula::getSinopsis() {
    return sinopsis;
}

dtInfoPelicula::~dtInfoPelicula(){}