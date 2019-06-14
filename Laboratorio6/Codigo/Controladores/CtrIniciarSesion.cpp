//
// Created by yokad on 6/6/2019.
//

#include "CtrIniciarSesion.h"
#include "Manejadores/ManejadorUsuario.h"
#include "Manejadores/ManejadorPelicula.h"
#include "Sesion.h"
void CtrIniciarSesion::ingresarUsuario(string nickName){
    this -> nickName=nickName;
}
bool CtrIniciarSesion::ingresarContrasena(string contrasena){
    ManejadorUsuario* mU = ManejadorUsuario::getInstancia();
    Usuario* u = mU -> buscarUsuario(this->nickName);
    string pass = u->getContrasena();
    return pass == contrasena;
}

void CtrIniciarSesion::iniciarSesion (){
    Sesion* s =Sesion::getInstancia();
    s->setNickname(this->nickName);
}

void CtrIniciarSesion::cargaDatos(){
    Usuario* u = new Usuario("Gonzalo","123","jsjsjsj");
    ManejadorUsuario* mU = ManejadorUsuario::getInstancia();
    mU -> agregarUsuario(u);
};

void CtrIniciarSesion::cargaPelicula() {
    Pelicula* p = new Pelicula("PELICULA1","TERROR","HOLA");
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    mP -> agregarPelicula(p);

    Pelicula* pe = new Pelicula("PELICULA2","TERROR","HOLA");
    //ManejadorPelicula* mP1 = ManejadorPelicula::getInstancia();
    mP -> agregarPelicula(pe);
}