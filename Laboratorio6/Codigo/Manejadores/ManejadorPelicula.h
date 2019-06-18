//
// Created by yokad on 6/6/2019.
//

#ifndef CODIGO_MANEJADORPELICULA_H
#define CODIGO_MANEJADORPELICULA_H

#include <map>
#include <list>
#include <string>
#include <Pelicula.h>
using  namespace std;


class ManejadorPelicula {
private:
    static ManejadorPelicula* instancia;
    map<string,Pelicula*> peliculas;
    ManejadorPelicula();
public:
    static ManejadorPelicula* getInstancia();
    list<Pelicula*> getPeliculas();
    Pelicula* buscarPelicula(string);
    void agregarPelicula(Pelicula*);
    bool existePelicula(string);
    void eliminarPelicula(string);
    virtual ~ManejadorPelicula();
};


#endif //CODIGO_MANEJADORPELICULA_H
