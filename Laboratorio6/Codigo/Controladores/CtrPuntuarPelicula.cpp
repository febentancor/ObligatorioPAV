//
// Created by yokad on 6/13/2019.
//

#include "CtrPuntuarPelicula.h"
#include <Manejadores/ManejadorPelicula.h>

list<string> CtrPuntuarPelicula::listarTituloPelicula(){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<string> titulos;
    return titulos;
};



//virtual bool seleccionarPelicula(string)=0;
//virtual float verPuntaje ()=0;
//virtual void ingresarPuntaje(float)=0;