//
// Created by gsoto on 20/06/2019.
//

#include "CtrVerComentarioYPuntaje.h"
#include "Sesion.h"
#include "dtPelicula.h"
#include "dtCine.h"
#include "dtSala.h"
#include "dtHorario.h"
#include "dtFecha.h"
#include "dtFuncion.h"
#include "ManejadorFunciones.h"
#include "ManejadorCine.h"
#include "ManejadorPelicula.h"
#include <list>

CtrVerComentarioYPuntaje::CtrVerComentarioYPuntaje() {}

list<string> CtrVerComentarioYPuntaje::listarPeliculas(){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<string> titulos;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        titulos.push_back((*it)->getTitulo());
    }
    return titulos;
}

list<dtPeliculaCompleto> CtrVerComentarioYPuntaje::seleccionarPeliculaV(string titulo){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<dtPeliculaCompleto> dtpelis;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        if((*it)->getTitulo() == titulo){
            peliculaCVerComentario=(*it);
            dtPeliculaCompleto dt = dtPeliculaCompleto((*it)->getTitulo(),(*it)->puntajePromedio(), (*it)->getDTComentariosPeliculas());
            dtpelis.push_back(dt);
        }
    }
    return dtpelis;
}

