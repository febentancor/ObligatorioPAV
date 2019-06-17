//
// Created by yokad on 6/6/2019.
//

#ifndef LABORATORIO6_CTRINICIARSESION_H
#define LABORATORIO6_CTRINICIARSESION_H

#include "Inrterfaces/IctrInicioSesion.h"
#include "Manejadores/ManejadorUsuario.h"
class CtrIniciarSesion: public IctrInicioSesion{
public:
    //CtrIniciarSesion();
    void ingresarUsuario(string);
    bool ingresarContrasena(string);
    void iniciarSesion ();
    void cargaDatos();
    void cargaPelicula();
    bool existeUsuario(string);

private:
    string nickName;
};


#endif //LABORATORIO6_CTRINICIARSESION_H
