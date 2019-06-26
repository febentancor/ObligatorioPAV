#include "../Clases/Puntaje.h"
#include "../Clases/Usuario.h"
Puntaje::Puntaje() {};
Puntaje::Puntaje(int puntos){
    this->puntos=puntos;
}
int Puntaje::getPuntos(){
    return this->puntos;
}
void Puntaje::setPuntos(int puntos) {
    this->puntos=puntos;
}

Usuario* Puntaje::getUsuario(){
 return this->usuario;
}
void Puntaje::setUsuario(Usuario* u){
 this->usuario= u;
}
string Puntaje::getNick(){
    return this->usuario->getNickname();
}

Puntaje::~Puntaje(){}