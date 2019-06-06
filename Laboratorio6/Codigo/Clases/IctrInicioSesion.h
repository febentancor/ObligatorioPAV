//
// Created by yokad on 6/6/2019.
//

#ifndef LABORATORIO6_ICTRINICIOSESION_H
#define LABORATORIO6_ICTRINICIOSESION_H

#include <string>

using namespace std;


class IctrInicioSesion {
public:
    virtual void ingresarUsuario(string)=0;
    virtual bool ingresarContrasena(string)=0;
    virtual void iniciarSesion ()=0;
    virtual  void cargaDatos()=0;
};


#endif //LABORATORIO6_ICTRINICIOSESION_H
