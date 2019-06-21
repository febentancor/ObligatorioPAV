//
// Created by gsoto on 19/06/2019.
//

#ifndef CODIGO_DTPELICULACOMPLETO_H
#define CODIGO_DTPELICULACOMPLETO_H

#include <string>
#include "dtPuntaje.h"
#include <list>
using namespace std;


class dtPeliculaCompleto {
private:
    string titulo;
    float puntaje;
    list<dtPuntaje*> listaPuntajes;
public:
    dtPeliculaCompleto();
    dtPeliculaCompleto(string titulo, float puntaje);
    string getTitulo() ;
    void setTitulo(string titulo);

    float getPunaje();
    void setPuntaje(float punaje);

    list<dtPuntaje*> getListaPuntajes();
    void setListaPuntajes(list<dtPuntaje*> listaPuntaje);

    ~dtPeliculaCompleto();
};


#endif //CODIGO_DTINFOPELICULA_H
