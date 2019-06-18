//
// Created by Facundo on 2019-06-13.
//

#include "dtComentario.h"

dtComentario::dtComentario() {}
dtComentario::dtComentario(int id, string comentario) {}

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