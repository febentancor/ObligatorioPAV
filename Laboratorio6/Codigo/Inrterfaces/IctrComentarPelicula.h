//
// Created by Facundo on 2019-06-13.
//
#ifndef CODIGO_ICTRCOMENTARPELICULA_H
#define CODIGO_ICTRCOMENTARPELICULA_H
#include <string>
#include <list>
#include "../Dtypes/dtComentario.h"
#include "../Clases/Comentario.h"

using namespace std;
class IctrComentarPelicula {
public:
    virtual list<string> ListarTituloPeliculas()=0;
    virtual  bool existePelicula(string)=0;
    virtual list<dtComentario*> seleccionarPelicula(string)=0;
    virtual  bool existeComentario(string)=0;
    virtual Comentario* buscarComentario(int , map<int, Comentario*>)=0;

};
#endif //CODIGO_ICTRCOMENTARPELICULA_H
