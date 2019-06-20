#include "Usuario.h"
#include "Comentario.h"
#include "dtComentario.h"
#include <map>
#include <iostream>

Comentario::Comentario() {};

Comentario::Comentario(string comentario) {
    this->comentario=comentario;
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
}

Usuario* Comentario::getUsuariosComentario() {
    return this->usuarios;
}

map <int, dtComentario*> Comentario::getComentariosComentados(){
    dtComentario* dtc = new dtComentario(this->id, this->comentario, this->usuarios, this->getComentariosComentados());
    map<int,dtComentario*> dtc1;
    dtc1.insert(std::pair<int,dtComentario*>(this->id,dtc));
    return dtc1;
}
