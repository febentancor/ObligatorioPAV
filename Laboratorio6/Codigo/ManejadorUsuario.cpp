#include "Usuario.h"
#include <list>
#include "ManejadorUsuario.h"
using namespace std;

ManejadorUsuario* ManejadorUsuario::instancia = NULL;

ManejadorUsuario::ManejadorUsuario(){}

ManejadorUsuario* ManejadorUsuario::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorUsuario();
    return instancia;
}

list<Usuario*> ManejadorUsuario::getUsuarios(){
    list<Usuario*> lstUsuarios;
    for (map<string,Usuario*>::iterator it=this->usuarios.begin(); it!=usuarios.end(); ++it)
        lstUsuario.push_back(it->second);
    return lstUsuarios;
}

Usuario* ManejadorUsuario::buscarUsuario(string Usuario){
    map<string,Usuario*>::iterator it = this->usuarios.find(usuario);
    return it->second;
}

void ManejadorUsuario::agregarUsuario(Usuario* usuario){
    usuario.insert(std::pair<string,Usuario*>(usuario->getNickname(),usuario));
}

bool ManejadorUsuario::existeUsuario(string usuario){
    map<string,Usuario*>::iterator it = this->usuarios.find(usuario);
    return (it != this->usuarios.end());
}

void ManejadorUsuario::eliminarUsuario(string usuario){
    map<string,Usuario*>::iterator it = this->usuarios.find(usuario);
    this->usuarios.erase(it);
}

ManejadorUsuario::~ManejadorUsuario(){}
