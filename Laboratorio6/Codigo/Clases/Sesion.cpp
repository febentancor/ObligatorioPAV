#include "Sesion.h"

Sesion* Sesion::instancia = NULL;

Sesion::Sesion(){}

Sesion* Sesion::getInstancia(){
    if (instancia == NULL)
        instancia = new Sesion();
    return instancia;
}

string Sesion::getNickname(){
   return this->nickname;
}
void Sesion::setNickname(string nickname){
    this->nickname=nickname;
}

bool Sesion::getInicioSesion() {
    return inicioSesion;
}

void Sesion::setInicioSesion(bool){
    this->inicioSesion=true;
}
Reloj* Sesion::getReloj() {
    return this->reloj;
}

void Sesion::setReloj(Reloj * r) {
    this->reloj=r;
}

Sesion::~Sesion(){}





