//
// Created by gsoto on 17/06/2019.
//

#ifndef CODIGO_CTRALTAFUNCION_H
#define CODIGO_CTRALTAFUNCION_H
#include "dtPelicula.h"
#include "dtCine.h"
#include "dtSala.h"
#include "dtFuncion.h"
#include "Cine.h"
#include <list>
#include "IctrAltaFuncion.h"

class CtrAltaFuncion: public IctrAltaFuncion {

public:
    CtrAltaFuncion();
    list<dtPelicula> listarPeliculas();
    list<dtCine> seleccionarPelicula(string);
    list<dtSala> seleccionarCine(int);
    list<dtFuncion> seleccionarSala(int);
    bool ingresarHorario(dtFecha, dtHorario);
    void ingresarPrecio(int);
    void darAltaFuncion ();
    bool existeTitulo(string);
    bool existeCine(int);
    bool existeSala(int);

private:
    string tituloFuncion;
    int idCine;
    int PrecioFuncion;
    Cine* cineFuncion;
    Sala* salaFuncion;
    dtFecha fechaFuncion;
    dtHorario horarioFuncion;
    Pelicula * setPelicula(string);
    bool existeTitulo(string);
    bool existeCine(int);
    bool existeSala(int);

};


#endif //CODIGO_CTRALTAFUNCION_H
