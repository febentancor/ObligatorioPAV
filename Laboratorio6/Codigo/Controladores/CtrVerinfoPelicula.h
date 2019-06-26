//
// Created by gsoto on 20/06/2019.
//

#ifndef CODIGO_VERINFOPELICULA_H
#define CODIGO_VERINFOPELICULA_H

#include "../Inrterfaces/IctrVerinfoPelicula.h"
#include "../Clases/Pelicula.h"


class CtrVerinfoPelicula: public IctrVerinfoPelicula{
public:
    CtrVerinfoPelicula();
    list<string> listarPeliculas();
    list<dtInfoPelicula> seleccionarPeliculaV(string);
    list<dtCine> listarCine();
    list<dtFuncion> seleccionarCine(int);
private:
    Pelicula* peliculaCVerinf;
};


#endif //CODIGO_VERINFOPELICULA_H
