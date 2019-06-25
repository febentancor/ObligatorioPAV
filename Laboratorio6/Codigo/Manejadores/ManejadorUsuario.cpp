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
    //map<string,Usuario*>::iterator it = this->usuarios.find(usuario);
    //this->usuarios.end()->second->setInicioSesion(true);
    //return (it != this->usuarios.end());
    bool encontro = false;
    for(map<string,Usuario*>::iterator it= this->usuarios.begin(); it!=this->usuarios.end(); ++it){
        if((*it).second->getNickname() == usuario){
            Usuario* usu =  (*it).second;
           // usu->(true);
            encontro = true;
            break;
        }
    }

    return encontro;
}

void ManejadorUsuario::eliminarUsuario(string usuario){
    map<string,Usuario*>::iterator it = this->usuarios.find(usuario);
    this->usuarios.erase(it);
}
bool ManejadorUsuario::esAdmin(string usuario) {
    map<string,Usuario*>::iterator it= this->usuarios.find(usuario);
    if(it!= this->usuarios.end()){
   //     it->second->setInicioSesion(true);
        return (it->second->getEsAdmin()==true);
    }else{
        return  false;
    }
}



ManejadorUsuario::~ManejadorUsuario(){}