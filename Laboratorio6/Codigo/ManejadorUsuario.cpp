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
        lstUsuarios.push_back(it->second);
    return lstUsuarios;
}

Usuario* ManejadorUsuario::buscarUsuario(string x){ //se cambia a x porque tiene que ser otro nombre de la variable
    map<string,Usuario*>::iterator it = this->usuarios.find(x);
    return it->second;
}

void ManejadorUsuario::agregarUsuario(Usuario* usuario){
    usuarios.insert(std::pair<string,Usuario*>(usuario->getNickname(),usuario));
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
