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
#include "string.h"
#include <iostream>

using namespace std;

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
            peliculaCVerComentario=(*it);//Obtengo le Pelicula en Memoria

            //Creo un dtPuntaje por cada puntaje cargado y lo meto en un temporal
            list<dtPuntaje*> puntajes;
            //int inicio = peliculaCVerComentario->obtenerPuntajes().begin();
            //int fin = peliculaCVerComentario->obtenerPuntajes().end();
            list<Puntaje*> puntajesPelicula = peliculaCVerComentario->obtenerPuntajes();
            for(list<Puntaje*>::iterator p= puntajesPelicula.begin(); p!=puntajesPelicula.end(); ++p){
                //cout << "asdasdasd";
               dtPuntaje* dtP = new dtPuntaje((*p)->getNick(), (*p)->getPuntos());
               puntajes.push_back(dtP);
            }
            //string titulo = (*it)->getTitulo();
            //float puntajePromedio = (*it)->puntajePromedio();
            //map<int,dtComentario*> comentarios = (*it)->getDTComentariosPeliculas();
            dtPeliculaCompleto dt = dtPeliculaCompleto((*it)->getTitulo(),(*it)->puntajePromedio(), (*it)->getDTComentariosPeliculas(),puntajes);
            dtpelis.push_back(dt);
        }
    }
    return dtpelis;
}

void CtrVerComentarioYPuntaje::imprimircmtcmtdo(map<int,dtComentario*> comentarioscomentados){
    for (map<int,dtComentario*>::iterator it = comentarioscomentados.begin(); it!=comentarioscomentados.end(); ++it){

        dtComentario* c = it->second;
        cout << "\n" << "ID: " << c->getComentarioId() << " " << c->getNick() << ": " << c->getComentario() ;
        cout << "\n";
        if (!c->getdtComentComentado().empty()){
            imprimircmtcmtdo(c->getdtComentComentado());
        }
    }

    return;
}


