//
// Created by yokad on 6/4/2019.
//

#ifndef CODIGO_FUNCION_H
#define CODIGO_FUNCION_H


#include <dtHorario.h>
#include "Pelicula.h"
//<<<<<<< Updated upstream
#include "dtFecha.h"
#include "dtHorario.h"

//=======
#include "dtFecha.h"
#include "dtHorario.h"
//>>>>>>> Stashed changes
class Funcion {
private:
    int id;
    dtFecha dia;
    dtHorario horario;
    Pelicula *pelicula;
public:
    Funcion();
    Funcion(int, dtFecha, dtHorario);
    int getId();
    void setId(int);
    dtFecha getDia();
    void setDia(dtFecha);
    dtHorario getHora();
    void setHora(dtHorario);
    virtual ~Funcion();
};


#endif //CODIGO_FUNCION_H
