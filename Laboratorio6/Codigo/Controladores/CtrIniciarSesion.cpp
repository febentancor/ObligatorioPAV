//
// Created by yokad on 6/6/2019.
//

#include "CtrIniciarSesion.h"
#include "ManejadorUsuario.h"
#include "ManejadorPelicula.h"
#include "ManejadorCine.h"
#include "dtTarjetas.h"
#include "Sesion.h"

CtrIniciarSesion::CtrIniciarSesion(){}
void CtrIniciarSesion::ingresarUsuario(string nickName){
    this -> nickName=nickName;
}

bool CtrIniciarSesion::ingresarContrasena(string contrasena){
    ManejadorUsuario* mU = ManejadorUsuario::getInstancia();
    Usuario* u = mU -> buscarUsuario(this->nickName);
    string pass = u->getContrasena();
    if (pass != contrasena) {
        throw invalid_argument("ERROR: CONTRASENA INVALIDA\n");
    }
    return (pass != contrasena);
}

void CtrIniciarSesion::iniciarSesion (){
    Sesion* s =Sesion::getInstancia();
    s->setNickname(this->nickName);
}

bool CtrIniciarSesion::existeUsuario(string u) {
    ManejadorUsuario* mU = ManejadorUsuario::getInstancia();
    bool existe=mU->existeUsuario(u);
    if(!existe)
        throw invalid_argument ("ERROR: NO EXISTE EL USUARIO INDICADO\n");
    return existe;
}

bool CtrIniciarSesion::esAdmin(string usuario) {
    ManejadorUsuario* mU= ManejadorUsuario::getInstancia();
    bool esAdmin = mU->esAdmin(usuario);
    if(!esAdmin)
        throw invalid_argument ("ERROR: NO ERES ADMINISTRADOR");
    return esAdmin;

}

void CtrIniciarSesion::cargaDatos(){
    Usuario* u = new Usuario("Gonzalo","123","jsjsjsj", false);
    ManejadorUsuario* mU = ManejadorUsuario::getInstancia();
    mU -> agregarUsuario(u);
    Usuario* v = new Usuario("Admin","333","jsjsjsj", true);
    ManejadorUsuario* mV = ManejadorUsuario::getInstancia();
    mV -> agregarUsuario(v);
};

void CtrIniciarSesion::cargaPelicula() {
    Pelicula* p = new Pelicula("PELICULA1","TERROR","HOLA");
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    mP -> agregarPelicula(p);

    Pelicula* pe = new Pelicula("PELICULA2","TERROR","HOLA");
    ManejadorPelicula* mP1 = ManejadorPelicula::getInstancia();
    mP1 -> agregarPelicula(pe);

    Sesion* s = Sesion::getInstancia();
    string t = s->getNickname();
    ManejadorUsuario* mU1 = ManejadorUsuario::getInstancia();
    Usuario* mU2 = mU1->buscarUsuario(t);
    map<int, Comentario*>com;
    Comentario* C1 = new Comentario("la pelicula es una mierda",mU2,com);
    Pelicula* p1 = mP1->buscarPelicula("PELICULA1");
    p1->agregarComentario(C1);
}

