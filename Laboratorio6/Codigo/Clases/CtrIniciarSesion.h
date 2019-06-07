//
// Created by yokad on 6/6/2019.
//

#ifndef LABORATORIO6_CTRINICIARSESION_H
#define LABORATORIO6_CTRINICIARSESION_H

#include "IctrInicioSesion.h"

class CtrIniciarSesion: public IctrInicioSesion{
public:
    void ingresarUsuario(string);
    bool ingresarContrasena(string);
    void iniciarSesion ();
    void cargaDatos();
    void cargaPelicula();

private:
    string nickName;
};


#endif //LABORATORIO6_CTRINICIARSESION_H
