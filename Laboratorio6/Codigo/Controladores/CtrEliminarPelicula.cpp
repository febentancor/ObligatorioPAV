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

    for (list<Cine*>::iterator it = Pelicula->obternerCines().begin(); it != Pelicula->obternerCines().end(); ++it){

        for (list<Sala*>::iterator it2 = (*it)->getSalas().begin(); it2 != (*it)->getSalas().end(); ++it2){

            for (list<Funcion*>::iterator it3 = (*it2)->getFuncion().begin(); it3 != (*it2)->getFuncion().end(); ++it3){

                if( titulo == (*it3)->getTituloPelicula() ){

                    mF->eliminarFuncion((*it3)->getId());
                    //eliminar la funcion
                    delete (*it3);

                }

            }

        }

    }
    mP->eliminarPelicula(titulo);
    delete Pelicula;

//    ManejadorFunciones* mF = ManejadorFunciones::getInstancia();
//    list<Pelicula*> lPel = mF->



}
