//
// Created by gsoto on 21/06/2019.
//

#ifndef CODIGO_MANEJADORCREARRESERVA_H
#define CODIGO_MANEJADORCREARRESERVA_H

#include "../Clases/Reserva.h"
#include <list>
#include <map>
#include <string>

class ManejadorCrearReserva {
private:
    static ManejadorCrearReserva* instancia;
    map<int,Reserva*>reservas;
    ManejadorCrearReserva();

public:
    static ManejadorCrearReserva* getInstancia();
    list<Reserva*> getReserva();
    Reserva* buscarReserva(int);
    void agregarReserva(Reserva*);
    bool existeReserva(int);
    void eliminarReserva(int);
    virtual ~ManejadorCrearReserva();
};


#endif //CODIGO_MANEJADORCREARRESERVA_H
