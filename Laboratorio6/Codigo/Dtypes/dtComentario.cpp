#include "../Dtypes/dtComentario.h"
#include <map>

dtComentario::dtComentario() {}

dtComentario::dtComentario(int id, string comentario, Usuario* usuario, map<int, dtComentario*> dtcomentariosComentados) {
    this->id = id;
    this->comentario = comentario;
    this->usuarios = usuario;
    this->dtcomentariosComentados = dtcomentariosComentados;
}

int dtComentario::getComentarioId() {
    return id;
}

string dtComentario::getComentario() {
    return comentario;
}

Usuario* dtComentario::getDTUsuariosComentario() {
    return this->usuarios;
}

string dtComentario::getNick(){
    return this->usuarios->getNickname();
}
map<int, dtComentario*> dtComentario::getdtComentComentado(){
    return this->dtcomentariosComentados;
}

dtComentario::~dtComentario() {}