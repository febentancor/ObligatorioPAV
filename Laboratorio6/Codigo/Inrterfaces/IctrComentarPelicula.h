//
// Created by Facundo on 2019-06-13.
//
#ifndef CODIGO_ICTRCOMENTARPELICULA_H
#define CODIGO_ICTRCOMENTARPELICULA_H
#include <string>
#include <list>
using namespace std;
class IctrComentarPelicula {
public:
    virtual list<string> ListarTituloPeliculas()=0;


};
#endif //CODIGO_ICTRCOMENTARPELICULA_H
