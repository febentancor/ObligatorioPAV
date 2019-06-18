//
// Created by gsoto on 17/06/2019.
//
#include "CtrPuntuarPelicula.h"
#include "CtrAltaFuncion.h"
#include "Sesion.h"
#include "dtPelicula.h"
#include "dtCine.h"
#include <list>
#include "ManejadorCine.h"

CtrAltaFuncion::CtrAltaFuncion() {}

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

list<dtCine> CtrAltaFuncion::seleccionarPelicula(string titulo){
    ManejadorCine* mC = ManejadorCine::getInstancia();
    list<Cine*> cin = mC->getCines();
    list<dtCine> dtcines;
    for(list<Cine*>::iterator it= cin.begin(); it!=cin.end(); ++it){
        dtCine dt = dtCine((*it)->getId(),(*it)->getDireccion());
        dtcines.push_back(dt);
    }
    return dtcines;
};

list<dtSala> CtrAltaFuncion::seleccionarCine(int idCine){
            
};