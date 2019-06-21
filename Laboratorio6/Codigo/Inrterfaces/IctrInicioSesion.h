//
// Created by yokad on 6/6/2019.
//

#ifndef CODIGO_ICTRINICIOSESION_H
#define CODIGO_ICTRINICIOSESION_H

#include <ManejadorUsuario.h>
#include <string>

using namespace std;


class IctrInicioSesion {
public:
    virtual void ingresarUsuario(string)=0;
    virtual bool ingresarContrasena(string)=0;
    virtual void iniciarSesion ()=0;
    virtual  void cargaDatos()=0;
    virtual void cargaPelicula()=0;
    virtual bool existeUsuario(string)=0;
    virtual bool esAdmin(string)=0;
    virtual void cargaFinancieras()=0;
};


#endif //CODIGO_ICTRINICIOSESION_H
