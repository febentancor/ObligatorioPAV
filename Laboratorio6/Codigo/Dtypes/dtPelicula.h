//
// Created by gsoto on 17/06/2019.
//

#ifndef CODIGO_DTPELICULA_H
#define CODIGO_DTPELICULA_H

#include <string>

using namespace std;

class dtPelicula {
private:
    string titulo;
    string sipnosis;
    string poster;
    float puntaje;
public:
    virtual ~dtPelicula();

    dtPelicula();
    dtPelicula(string titulo, string sipnosis,string poster,float puntaje);

    string getTitulo();
    void setTitulo(string titulo);

    string getSipnosis();
    void setSipnosis(string sipnosis);

    string getPoster();
    void setPoster(string poster);

    float getPuntaje();
    void setPuntaje(float puntaje);
};


#endif //CODIGO_DTPELICULA_H
