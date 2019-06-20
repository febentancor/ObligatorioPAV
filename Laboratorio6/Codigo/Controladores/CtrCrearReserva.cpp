//
// Created by yokad on 6/17/2019.
//

#include "CtrCrearReserva.h"
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

CtrCrearReserva::CtrCrearReserva() {}

list<string> CtrCrearReserva::listarPeliculas(){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<string> titulos;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        titulos.push_back((*it)->getTitulo());
    }
    return titulos;
}

list<dtInfoPelicula> CtrCrearReserva::seleccionarPeliculaC(string titulo){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<dtInfoPelicula> dtpelis;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        if((*it)->getTitulo() == titulo){
            peliculaCfuncion=(*it);
            dtInfoPelicula dt = dtInfoPelicula((*it)->getPoster(),(*it)->getSipnosis());
            dtpelis.push_back(dt);
        }
    }
    return dtpelis;
}

list<dtCine> CtrCrearReserva::listarCine(){
    list<Cine*> c = peliculaCfuncion->obternerCines();
    list<dtCine> dtcin;
    for(list<Cine*>::iterator it=c.begin();it!=c.end(); ++it){
        dtCine dt = dtCine((*it)->getId(),(*it)->getDireccion());
        dtcin.push_back(dt);
    }
    return dtcin;
};

list<dtFuncion> CtrCrearReserva::seleccionarCine(int idCine){
    list<Cine*> c = peliculaCfuncion->obternerCines();
    list<dtFuncion> dtfun;
    for(list<Cine*>::iterator it=c.begin();it!=c.end(); ++it){
        if((*it)->getId() == idCine){
            this->cineReserva=(*it);
            list<Sala*> s = (*it)->getSalas();
            for(list<Sala*>::iterator it1=s.begin();it1!=s.end(); ++it1){
                list<Funcion*> f = (*it1)->getFuncion();
                for(list<Funcion*>::iterator it2=f.begin();it2!=f.end(); ++it2) {
                    dtFuncion dt = dtFuncion((*it2)->getDia(),(*it2)->getHora());
                    dtfun.push_back(dt);
                }
            }
        }
    }
    return dtfun;
}

void CtrCrearReserva::seleccionarFuncion(int idFuncion){
    list<Sala*> s = cineReserva->getSalas();
    for(list<Sala*>::iterator it1=s.begin();it1!=s.end(); ++it1){
        list<Funcion*> f = (*it1)->getFuncion();
        for(list<Funcion*>::iterator it2=f.begin();it2!=f.end(); ++it2) {
            if((*it2)->getId() == idFuncion){
                this->funcionReserva=(*it2);
            }
        }
    }
}

void CtrCrearReserva::ingresarCantidadAsientos(int CantAs){
    this->CantAsisentos=CantAs;
}
void CtrCrearReserva::ingresarNombreDeBanco(string nomBan){
    this->nomBanco=nomBan;
}