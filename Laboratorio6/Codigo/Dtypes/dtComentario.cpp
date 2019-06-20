#include "dtComentario.h"
#include <map>

dtComentario::dtComentario() {}

dtComentario::dtComentario(int id, string comentario, Usuario* usuario, map<int, dtComentario*> comentariosComentados) {
    this->id = id;
    this->comentario = comentario;
    this->usuarios = usuario;
    this->dtcomentariosComentados = comentariosComentados;
}

int dtComentario::getComentarioId() {
    return id;
}

void dtComentario::setComentarioId(int id) {
    this->id = id;
}

string dtComentario::getComentario() {
    return comentario;
}

void dtComentario::setComentario(string comentario) {
    this->comentario = comentario;
}

dtComentario::~dtComentario() {}