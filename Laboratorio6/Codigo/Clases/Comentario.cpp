#include "Usuario.h"
#include "Comentario.h"
#include "dtComentario.h"

Comentario::Comentario() {};
Comentario::Comentario(dtComentario comentario) {
    this->comentario=comentario;
}
dtComentario Comentario::getComentarios() {
    return this->comentario;
}
void Comentario::setdtcomentario(dtComentario comentario) {
    this->comentario= comentario;
}
void Comentario::setUsuario(Usuario* u){
    this->usuarios= u;
}
string  Comentario::getNick(){
    return this->usuarios->getNickname();
}