//
// Created by gsoto on 17/06/2019.
//
#include <list>
#include "../Dtypes/dtPuntaje.h"


dtPuntaje::dtPuntaje() {}
dtPuntaje::dtPuntaje(string nickname, int puntos) {
    this->nickname = nickname;
    this->puntos = puntos;
}

string dtPuntaje::getNickname(){
    return this->nickname;
}

float dtPuntaje::getPuntos(){
    return this->puntos;
}

dtPuntaje::~dtPuntaje() {}