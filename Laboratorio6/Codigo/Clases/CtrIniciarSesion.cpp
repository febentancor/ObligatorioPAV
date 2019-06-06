//
// Created by yokad on 6/6/2019.
//

#include "CtrIniciarSesion.h"
#include "ManejadorUsuario.h"
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