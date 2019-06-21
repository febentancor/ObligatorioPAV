#ifndef CODIGO_CTRCOMENTARPELICULA_H
#define CODIGO_CTRCOMENTARPELICULA_H
#include "IctrComentarPelicula.h"
#include "Comentario.h"

using namespace std;

class CtrComentarPelicula: public IctrComentarPelicula {
public:
    list<string> ListarTituloPeliculas();
    bool existePelicula(string);
    list<dtComentario*> seleccionarPelicula(string);
    bool existeComentario(string);
    void ingresarComentario();
};


#endif //CODIGO_CTRCOMENTARPELICULA_H
