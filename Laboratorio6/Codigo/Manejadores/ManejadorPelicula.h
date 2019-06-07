//
// Created by yokad on 6/6/2019.
//

#ifndef LABORATORIO6_MANEJADORPELICULA_H
#define LABORATORIO6_MANEJADORPELICULA_H

#include <map>
#include <list>
#include <string>
#include "./Clases/Pelicula.h"
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


#endif //LABORATORIO6_MANEJADORPELICULA_H
