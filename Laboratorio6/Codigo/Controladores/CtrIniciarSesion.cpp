//
// Created by yokad on 6/6/2019.
//

#include "CtrIniciarSesion.h"
#include "ManejadorUsuario.h"
#include "ManejadorPelicula.h"
#include "ManejadorCine.h"
#include "dtTarjetas.h"
#include "Sesion.h"
#include "Reloj.h"
#include "dtFecha.h"
#include "dtHora.h"

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
    s->setInicioSesion(true);
}

bool CtrIniciarSesion::existeUsuario(string u) {
    ManejadorUsuario* mU = ManejadorUsuario::getInstancia();
    bool existe=mU->existeUsuario(u);

    if(!existe)
        throw invalid_argument ("ERROR: NO EXISTE EL USUARIO INDICADO\n");
        nickName= "";
    return existe;
}

bool CtrIniciarSesion::esAdmin(string usuario) {
    ManejadorUsuario* mU= ManejadorUsuario::getInstancia();
    bool esAdmin = mU->esAdmin(usuario);
    if(!esAdmin)
        throw invalid_argument ("ERROR: NO ERES ADMINISTRADOR");
    return esAdmin;

}

bool CtrIniciarSesion::invitado() {
    //ManejadorUsuario* mU= ManejadorUsuario::getInstancia();
    Sesion * s=Sesion::getInstancia();
    bool invit= s->getInicioSesion();


    if(invit==false) {

        throw invalid_argument("DEBE INICIAR SESION\n");
    }
    return invit;
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

    Puntaje* puntaje = new Puntaje(2);
    Usuario* usu = new Usuario("Prueba","test","test",true);
    puntaje->setUsuario(usu);
    p1->ingresarPuntaje(puntaje);
}
void CtrIniciarSesion::cargarReloj(){
    Sesion* s = Sesion::getInstancia();

    dtHora h = dtHora(10,05);
    dtFecha f= dtFecha(25,06,2019);
    Reloj* r = new Reloj(f,h);
    s->setReloj(r);
}