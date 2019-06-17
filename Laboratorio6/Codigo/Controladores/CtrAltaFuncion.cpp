//
// Created by gsoto on 17/06/2019.
//
#include "CtrPuntuarPelicula.h"
#include <ManejadorPelicula.h>
#include "CtrAltaFuncion.h"
#include "Sesion.h"
#include "dtPelicula.h"
#include <list>


list<dtPelicula> CtrAltaFuncion:: listarPeliculas(){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<dtPelicula> dtpeliculas;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        dtPelicula dt = dtPelicula((*it)->getTitulo(),(*it)->getSipnosis(),(*it)->getPoster(),(*it)->puntajePromedio());
        dtpeliculas.push_back(dt);
    }
    return dtpeliculas;
};