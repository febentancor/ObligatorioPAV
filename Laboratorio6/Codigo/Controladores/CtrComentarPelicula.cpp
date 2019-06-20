#include "CtrComentarPelicula.h"
#include "ManejadorPelicula.h"
#include <list>
#include <Pelicula.h>
#include "Comentario.h"
#include  "dtCine.h"
#include <iostream>

list<string> CtrComentarPelicula::ListarTituloPeliculas(){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<string> titulos;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        titulos.push_back((*it)->getTitulo());
    }
    return titulos;
}

bool CtrComentarPelicula::existePelicula(string titulo){
    bool existe = false;
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();

    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        if((*it)->getTitulo() == titulo){
            existe == true;
        }
    }
    return existe;
}

list<dtComentario*> CtrComentarPelicula::seleccionarPelicula(string titulo){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    Pelicula* peliculaSeleccionada = mP->buscarPelicula(titulo);
    list<dtComentario*> listaComentarios;

    for(map<int, Comentario*>::iterator it= peliculaSeleccionada->getComentariosPeliculas().begin(); it!=peliculaSeleccionada->getComentariosPeliculas().end(); ++it){
        //listaComentarios.push_back(*it->second);
        dtComentario dtC = dtComentario((*it).second->getId(), (*it).second->getComentarios(), (*it).second->getUsuariosComentario(), (*it).second->getComentariosComentados() );
        //listaComentarios.push_back(it->second);
    }
    return listaComentarios;
}

void CtrComentarPelicula::ingresarComentario(){};