//
// Created by yokad on 6/13/2019.
//

#include "CtrPuntuarPelicula.h"
#include <Manejadores/ManejadorPelicula.h>
#include <Manejadores/ManejadorUsuario.h>
#include "Sesion.h"

list<string> CtrPuntuarPelicula::listarTituloPelicula(){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<string> titulos;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        titulos.push_back((*it)->getTitulo());
    }
    return titulos;
};
bool CtrPuntuarPelicula::seleccionarPelicula(string TitPelicula){
    this->titulo=TitPelicula;
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    Pelicula* p= mP->buscarPelicula(TitPelicula);
    return p->tengoPuntaje();

};
//virtual float verPuntaje ()=0;
void CtrPuntuarPelicula::ingresarPuntaje(float pun){
    Sesion* s = Sesion::getInstancia();
    string nick = s->getNickname();
    ManejadorUsuario* mU = ManejadorUsuario::getInstancia();
    Usuario* u = mU->buscarUsuario(nick);
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    Pelicula* p= mP->buscarPelicula(titulo);
    //Falta terminar tengo que crear un puntaje con el puntaje ingresado y con el usuario ingresado
    //Luego tengo que agregar puntaje a la pelicula el puntaje creado.


}