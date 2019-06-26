//
// Created by gon on 20/06/19.
//

#include "ManejadorPelicula.h"
#include "ManejadorFunciones.h"
#include "ManejadorCine.h"
#include "CtrEliminarPelicula.h"

CtrEliminarPelicula::CtrEliminarPelicula() {}

bool CtrEliminarPelicula::existePelicula(string titulo){

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

list<string> CtrEliminarPelicula::listarPelicula(){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<string> titulos;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        titulos.push_back((*it)->getTitulo());
    }

    return titulos;

}

void CtrEliminarPelicula::eliminarPelicula(string titulo){

    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    ManejadorFunciones* mF = ManejadorFunciones::getInstancia();

    Pelicula* Pelicula = mP->buscarPelicula(titulo);

    list<Cine*> lstCine = Pelicula->obternerCines();

    for (list<Cine*>::iterator it = lstCine.begin(); it != lstCine.end(); ++it){

        list<Sala*> lstSalas = (*it)->getSalas();

        for (list<Sala*>::iterator it2 = lstSalas.begin(); it2 != lstSalas.end(); ++it2){

            list<Funcion*> lstFunc = (*it2)->getFuncion();

            for (list<Funcion*>::iterator it3 = lstFunc.begin(); it3 != lstFunc.end(); ++it3){

                if( titulo == (*it3)->getTituloPelicula() ){

                    int a = (*it3)->getId();

                    mF->eliminarFuncion((*it3)->getId());

                }

            }

        }

    }

    delete Pelicula;

}
