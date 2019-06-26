#include "CtrComentarPelicula.h"
#include "ManejadorPelicula.h"
#include <list>
#include <Pelicula.h>
#include "dtComentario.h"
#include  "dtCine.h"
#include <iostream>
#include <string>

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
        if(titulo.compare((*it)->getTitulo()) == 0){
            existe = true;
            return existe;
        }
    }
    return existe;
}
bool CtrComentarPelicula::existeComentario(string titulo){
    bool existe = false;
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    Pelicula* peliculaSeleccionada = mP->buscarPelicula(titulo);
    if(peliculaSeleccionada->getComentariosPeliculas().empty()){
        return existe;
    }else{
        existe = true;
        return existe;
    }
}


list<dtComentario*> CtrComentarPelicula::seleccionarPelicula(string titulo){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    Pelicula* peliculaSeleccionada = mP->buscarPelicula(titulo);
    std::list<dtComentario*> listaComentarios;
    map<int, Comentario*> cP = peliculaSeleccionada->getComentariosPeliculas();
    for(map<int, Comentario*>::iterator it=cP.begin(); it!=cP.end(); ++it){
        Comentario* CC = (*it).second;
        dtComentario* dtC = new dtComentario((*it).second->getId(), (*it).second->getComentarios(), (*it).second->getUsuariosComentario(), (*it).second->getdtComentariosComentados() );
        map<int,dtComentario*>pp;
        //dtComentario* dtC = new dtComentario((*it).second->getId(), (*it).second->getComentarios(), (*it).second->getUsuariosComentario(), pp );
        //dtComentario* dtC = new dtComentario(0, "prueba", (*it).second->getUsuariosComentario(), pp );
        listaComentarios.push_back(dtC);
    }
    return listaComentarios;
}

Comentario* CtrComentarPelicula::buscarComentario(int idBuscar, map<int, Comentario*> comentado) {

    map<int, Comentario*>::iterator it = comentado.find(idBuscar);
    if (it->first == idBuscar){
        return it->second;
    } else {
        for (map<int,Comentario*>::iterator it1=comentado.begin(); it1!=comentado.end(); ++it1) {

            map<int, Comentario*>::iterator it3 = (it1->second->getComentariosComentados2().begin());

            if (it3 != it1->second->getComentariosComentados2().end()){
                buscarComentario(idBuscar, it1->second->getComentariosComentados2());
            }

        }
    }
}




void CtrComentarPelicula::ingresarComentario(){};