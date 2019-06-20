//
// Created by gsoto on 20/06/2019.
//

#include "CtrVerinfoPelicula.h"
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

CtrVerinfoPelicula::CtrVerinfoPelicula() {}

list<string> CtrVerinfoPelicula::listarPeliculas(){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<string> titulos;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        titulos.push_back((*it)->getTitulo());
    }
    return titulos;
}

list<dtInfoPelicula> CtrVerinfoPelicula::seleccionarPelicula(string titulo){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<dtInfoPelicula> dtpelis;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        if((*it)->getTitulo() == titulo){
            peliculaCVerinf=(*it);
            dtInfoPelicula dt = dtInfoPelicula((*it)->getPoster(),(*it)->getSipnosis());
            dtpelis.push_back(dt);
        }
    }
    return dtpelis;
}

list<dtCine> CtrVerinfoPelicula::listarCine(){
    list<Cine*> c = peliculaCVerinf->obternerCines();
    list<dtCine> dtcin;
    for(list<Cine*>::iterator it=c.begin();it!=c.end(); ++it){
        dtCine dt = dtCine((*it)->getId(),(*it)->getDireccion());
        dtcin.push_back(dt);
    }
    return dtcin;
};

list<dtFuncion> CtrVerinfoPelicula::seleccionarCine(int idCine){
    list<Cine*> c = peliculaCVerinf->obternerCines();
    list<dtFuncion> dtfun;
    for(list<Cine*>::iterator it=c.begin();it!=c.end(); ++it){
        if((*it)->getId() == idCine){
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