#include "Usuario.h"
#include "Comentario.h"
#include <map>
#include <iostream>

Comentario::Comentario() {};
int Comentario::idAuto=-1;
Comentario::Comentario(string comentario, Usuario* usuario, map<int, Comentario*> comentariosComentados) {
    this -> id = Comentario::getIdAutoC();
    this->comentario=comentario;
    this->usuarios=usuario;
    this->comentariosComentados=comentariosComentados;
}
string Comentario::getComentarios() {
    return this->comentario;
}

void Comentario::setUsuario(Usuario* u){
    this->usuarios= u;
}
string  Comentario::getNick(){
    return this->usuarios->getNickname();
}

int Comentario::getId() {
    return this->id;
    cout << ' ' << this->id ;
}

Usuario* Comentario::getUsuariosComentario() {
    return this->usuarios;
}

map <int, dtComentario*> Comentario::getComentariosComentados(){
    map<int,dtComentario*> dtc2;
    //dtComentario* dtc = new dtComentario(this->id, this->comentario, this->usuarios, this->getComentariosComentados());
    dtComentario* dtc = new dtComentario(this->id, this->comentario, this->usuarios, dtc2);
    map<int,dtComentario*> dtc1;
    //int
    dtc1.insert(std::pair<int,dtComentario*>(this->id,dtc));
    return dtc1;
}

int Comentario::getIdAutoC() {
    idAuto++;
    return idAuto;
}
