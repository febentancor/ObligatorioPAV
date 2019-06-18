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
    this->idCine=idCine;
    ManejadorCine* mC = ManejadorCine::getInstancia();
    list<Cine*> cin = mC->getCines();
    list<dtSala> dtsalas;
    for(list<Cine*>::iterator it= cin.begin(); it!=cin.end(); ++it){
        if((*it)->getId() == idCine) {
            this->cineFuncion=(*it);
            list<Sala *> sal = ((*it)->getSalas());
            for (list<Sala *>::iterator it1 = sal.begin(); it1 != sal.end(); ++it1) {
                dtSala dt = dtSala((*it1)->getId(), (*it1)->getCapacidad());
                dtsalas.push_back(dt);
            }
        }
    }
    return dtsalas;
};

list<dtFuncion> CtrAltaFuncion::seleccionarSala(int idSala){
    list<dtFuncion> dtfunciones;
    list<Sala*> sal = (cineFuncion->getSalas());
    for (list<Sala*>::iterator it1= sal.begin(); it1!=sal.end(); ++it1){
        if((*it1)->getId() == idSala) {
            list<Funcion *> fun = ((*it1)->getFuncion());
            for (list<Funcion *>::iterator it2 = fun.begin(); it2 != fun.end(); ++it2) {
                dtFuncion dt = dtFuncion((*it2)->getDia(), (*it2)->getHora());
                dtfunciones.push_back(dt);
            }
        }
    }
//    for(list<Cine*>::iterator it= cin.begin(); it!=cin.end(); ++it){
//        list<Sala*> sal = ((*it)->getSalas());
//        for (list<Sala*>::iterator it1= sal.begin(); it1!=sal.end(); ++it1){
//            if((*it1)->getId() == idSala){
//                list<Funcion*> fun = ((*it1)->getFuncion());
//                for (list<Funcion*>::iterator it2= fun.begin(); it2!=fun.end(); ++it2) {
//                    dtFuncion dt = dtFuncion((*it2)->getDia(),(*it2)->getHora());
//                    dtfunciones.push_back(dt);
//                }
//            }
//        }
//    }
    return dtfunciones;
};