//
// Created by gsoto on 19/06/2019.
//

#ifndef CODIGO_DTPELICULACOMPLETO_H
#define CODIGO_DTPELICULACOMPLETO_H


#include "../Dtypes/dtPuntaje.h"
#include "../Dtypes/dtComentario.h"
#include <list>
#include <map>
#include <string>

using namespace std;


class dtPeliculaCompleto {
private:
    string titulo;
    float puntaje;
    list<dtPuntaje*> listaPuntajes;
    map<int, dtComentario*> comentarios;

public:
    dtPeliculaCompleto();
    dtPeliculaCompleto(string titulo, float puntaje);
    dtPeliculaCompleto(string titulo, float puntaje, map<int, dtComentario*> comentario, list<dtPuntaje*> listaPuntajes);
    string getTitulo() ;

    float getPunaje();

    list<dtPuntaje*> getListaPuntajes();

    map<int, dtComentario*> getComentarios();

    ~dtPeliculaCompleto();
};


#endif //CODIGO_DTINFOPELICULA_H
