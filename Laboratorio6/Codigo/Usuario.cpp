#include "Usuario.h"
Usuario::Usuario(){}
Usuario::Usuario(string nickname,string contrasena,string urlfoto){
    this->nickname=nickname;
    this->contrasena=contrasena;
    this->urlfoto=urlfoto;
}
string Usuario::getNickname(){
    return this->nickname;
}
void Usuario::setNickname(string nickname){
    this->nickname=nickname;
}
string Usuario::getContrasena(){
    return this->contrasena;
}
void Usuario::setContrasena(string contrasena){
    this->contrasena=contrasena;
}
string Usuario::getUrlfoto(){
    return this->urlFoto;
}
void Usuario::setUrlfoto(string urlfoto){
    this->urlFoto=urlfoto;
}
Usuario::~Usuario(){}
