//
// Created by mrodriguez on 07/06/19.
//

#ifndef CODIGO_MANEJADORSALA_H
#define CODIGO_MANEJADORSALA_H

#include "Sala.h"
#include <map>
#include <list>
#include <string>
using  namespace std;

class ManejadorSala {
private:
    static ManejadorSala* instancia;
    map<int,Sala*> salas;
    ManejadorSala();

public:
    static ManejadorSala* getInstancia();
    list<Sala*> getSalas();
    Sala* buscarSala(int);
    void agregarSala(Sala*);
    bool existeSala(int);
    void eliminarSala(int);
    virtual ~ManejadorSala();
};


#endif //CODIGO_MANEJADORSALA_H
