//
// Created by yokad on 6/6/2019.
//

#include "../Manejadores/ManejadorPelicula.h"
#include "../Clases/Pelicula.h"
#include <map>
#include <list>
#include <string>

using namespace std;


ManejadorPelicula* ManejadorPelicula::instancia = NULL;

ManejadorPelicula::ManejadorPelicula() {}

ManejadorPelicula* ManejadorPelicula::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorPelicula();
    return instancia;
}

list<Pelicula*> ManejadorPelicula::getPeliculas(){
    list<Pelicula*> lstPeliculas;
    for (map<string,Pelicula*>::iterator it=this->peliculas.begin(); it!=peliculas.end(); ++it)
        lstPeliculas.push_back(it->second);
    return lstPeliculas;
}

Pelicula* ManejadorPelicula::buscarPelicula(string x){ //se cambia a x porque tiene que ser otro nombre de la variable
    map<string,Pelicula*>::iterator it = this->peliculas.find(x);
    return it->second;
}

void ManejadorPelicula::agregarPelicula(Pelicula* pelicula){
    peliculas.insert(std::pair<string, Pelicula*>(pelicula->getTitulo(),pelicula));
}

bool ManejadorPelicula::existePelicula(string id){
    map<string,Pelicula*>::iterator it = this->peliculas.find(id);
    return (it != this->peliculas.end());
}

void ManejadorPelicula::eliminarPelicula(string id){
    map<string,Pelicula*>::iterator it = this->peliculas.find(id);
    this->peliculas.erase(it);
}


ManejadorPelicula::~ManejadorPelicula(){}
