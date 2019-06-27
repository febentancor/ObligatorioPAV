//
// Created by yokad on 6/6/2019.
//

#include "../Controladores/CtrIniciarSesion.h"
#include "../Manejadores/ManejadorUsuario.h"
#include "../Manejadores/ManejadorPelicula.h"
#include "../Manejadores/ManejadorCine.h"
#include "../Manejadores/ManejadorFunciones.h"
#include "../Dtypes/dtTarjetas.h"
#include "../Clases/Sesion.h"
#include "../Clases/Reloj.h"
#include "../Dtypes/dtFecha.h"
#include "../Dtypes/dtHora.h"

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
    if(!esAdmin){
        system("clear");
        throw invalid_argument ("ERROR: NO ERES ADMINISTRADOR");
    }
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

void CtrIniciarSesion::cargarReloj(){
    Sesion* s = Sesion::getInstancia();

    dtHora h = dtHora(10,51);
    dtFecha f= dtFecha(25,06,2019);
    Reloj* r = new Reloj(f,h);
    s->setReloj(r);
}