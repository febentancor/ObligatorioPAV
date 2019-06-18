//
// Created by Facundo on 2019-06-13.
//

#include "CtrComentarPelicula.h"
#include "Manejadores/ManejadorPelicula.h"
#include <list>
#include "Comentario.h"

list<string> CtrComentarPelicula::ListarTituloPeliculas(){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<string> titulos;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        titulos.push_back((*it)->getTitulo());
    }
    return titulos;
};