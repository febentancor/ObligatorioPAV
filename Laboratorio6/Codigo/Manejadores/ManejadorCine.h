//
// Created by yokad on 6/6/2019.
//

#ifndef CODIGO_MANEJADORCINE_H
#define CODIGO_MANEJADORCINE_H

#include <map>
#include <list>
#include <string>
#include <Cine.h>

using  namespace std;

class ManejadorCine {
private:
    static ManejadorCine* instancia;
    map<int,Cine*> cines;
    ManejadorCine();
public:
    static ManejadorCine* getInstancia();
    list<Cine*> getCines();
    Cine* buscarCine(int);
    void agregarCine(Cine*);
    bool existeCine(int);
    void eliminarCine(int);
    virtual ~ManejadorCine();
};


#endif //CODIGO_MANEJADORCINE_H
