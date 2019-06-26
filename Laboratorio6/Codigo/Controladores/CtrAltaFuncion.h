//
// Created by gsoto on 17/06/2019.
//

#ifndef CODIGO_CTRALTAFUNCION_H
#define CODIGO_CTRALTAFUNCION_H
#include "../Dtypes/dtPelicula.h"
#include "../Dtypes/dtCine.h"
#include "../Dtypes/dtSala.h"
#include "../Dtypes/dtFuncion.h"
#include "../Inrterfaces/IctrAltaFuncion.h"
#include "../Clases/Cine.h"
#include <list>

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
    bool MayorAReloj(dtFecha);

private:
    string tituloFuncion;
    int idCine;
    int PrecioFuncion;
    Cine* cineFuncion;
    Sala* salaFuncion;
    dtFecha fechaFuncion;
    dtHorario horarioFuncion;
    Pelicula * setPelicula(string);

};


#endif //CODIGO_CTRALTAFUNCION_H
