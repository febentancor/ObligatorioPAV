//
// Created by gsoto on 17/06/2019.
//
#include <list>
#include "dtPuntaje.h"


dtPuntaje::dtPuntaje() {}
dtPuntaje::dtPuntaje(string nickname, int puntos) {
    this->nickname = nickname;
    this->puntos = puntos;
}

string dtPuntaje::getNickname(){
    return this->nickname;
}

void dtPuntaje::setNickname(string nickname){
    this->nickname=nickname;
}

float dtPuntaje::getPuntos(){
    return this->puntos;
}

void dtPuntaje::setPuntos(int puntos){
    this->puntos=puntos;
}

dtPuntaje::~dtPuntaje() {}