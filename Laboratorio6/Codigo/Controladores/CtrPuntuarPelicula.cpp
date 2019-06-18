//
// Created by yokad on 6/13/2019.
//

#include "CtrPuntuarPelicula.h"
#include <ManejadorPelicula.h>
#include <ManejadorUsuario.h>
#include "Sesion.h"
#include <list>
#include "Puntaje.h"


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
void CtrPuntuarPelicula::ingresarPuntaje(float pun){
    Sesion* s = Sesion::getInstancia();
    string nick = s->getNickname();
    ManejadorUsuario* mU = ManejadorUsuario::getInstancia();
    Usuario* u = mU->buscarUsuario(nick);
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    Pelicula* p= mP->buscarPelicula(titulo);
    Puntaje* punt= new Puntaje(pun);
    punt->setUsuario(u);
    p->ingresarPuntaje(punt);
}
float CtrPuntuarPelicula::verPuntaje (){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    Pelicula* p= mP->buscarPelicula(titulo);
    return p->puntajePelicula();
}