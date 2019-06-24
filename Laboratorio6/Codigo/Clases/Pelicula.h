//
// Created by yokad on 6/4/2019.
//

#ifndef CODIGO_PELICULA_H
#define CODIGO_PELICULA_H

#include <map>
#include <list>
#include "Puntaje.h"
#include "dtFecha.h"
#include "Comentario.h"
class Cine;
using namespace std;

class Pelicula {
private:
    string titulo;
    string sipnosis;
    string poster;
    map<int, Cine*>cines;
    list<Puntaje*>puntajes;
    map<int, Comentario*>comentarios;
public:
    Pelicula();
    Pelicula (string, string, string);
    void setTitulo(string);
    string getTitulo();
    void setSipnosis(string);
    string getSipnosis();
    void setPoster(string);
    string getPoster();
    ~Pelicula();
    float puntajePromedio();
    bool tengoPuntaje();
    void ingresarPuntaje(Puntaje*);
    float puntajePelicula();
    void ingresarCine(Cine*,int);
    list<Cine*> obternerCines();
    map<int, Comentario*> getComentariosPeliculas();
    map<int, dtComentario*> getDTComentariosPeliculas();
    void agregarComentario(Comentario*);
};


#endif //CODIGO_PELICULA_H
