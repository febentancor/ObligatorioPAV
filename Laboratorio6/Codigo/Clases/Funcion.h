//
// Created by yokad on 6/4/2019.
//

#ifndef CODIGO_FUNCION_H
#define CODIGO_FUNCION_H


#include "../Dtypes/dtHorario.h"
#include "../Clases/Pelicula.h"
#include "../Dtypes/dtFecha.h"
#include "../Dtypes/dtHorario.h"
#include "../Clases/Reserva.h"

class Funcion {
private:
    int id;
    static int idAutoF;
    dtFecha dia;
    dtHorario horario;
    Pelicula *pelicula;
    int precioFuncion;
    map<int,Reserva*>reservas;

public:
    Funcion();
    Funcion(dtFecha, dtHorario, int);
    int getPrecioFuncion();
    void setPrecioFuncion(int);
    static int getIdAutoF();
    int getId();
    void setId(int);
    dtFecha getDia();
    void setDia(dtFecha);
    dtHorario getHora();
    void setHora(dtHorario);
    string getTituloPelicula();
    void setPelicula(Pelicula*);
    void ingresarReserva(Reserva*,int);
    virtual ~Funcion();
};


#endif //CODIGO_FUNCION_H
