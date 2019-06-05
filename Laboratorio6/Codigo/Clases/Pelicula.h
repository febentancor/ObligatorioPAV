//
// Created by yokad on 6/4/2019.
//

#ifndef LABORATORIO6_PELICULA_H
#define LABORATORIO6_PELICULA_H

#include <map>
#include "Dtypes/dtFecha.h"

class Cine;
using namespace std;

class Pelicula {
private:
    string titulo;
    string sipnosis;
    string poster;
    map<int, Cine*>cines;
public:
    Pelicula();
    Pelicula (string, string, string);
    void setTitulo(string);
    string getTitulo();
    void setSipnosis(string);
    string getSipnosis();
    void setPoster(string);
    string getPoster();
   //virtual float puntajePromedio();
   ~Pelicula();

};


#endif //LABORATORIO6_PELICULA_H
