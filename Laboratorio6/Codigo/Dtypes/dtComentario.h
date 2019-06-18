//
// Created by Facundo on 2019-06-13.
//
#ifndef CODIGO_DTCOMENTARIO_H
#define CODIGO_DTCOMENTARIO_H

#include <string>

using namespace std;
class dtComentario {
private:
    int id;
    string comentario;
public:
    virtual ~dtComentario();
    dtComentario();
    dtComentario(int id, string comentario);

    int getComentarioId();
    void setComentarioId(int id);

    string getComentario();
    void setComentario(string comentario);


};


#endif //CODIGO_DTCOMENTARIO_H
