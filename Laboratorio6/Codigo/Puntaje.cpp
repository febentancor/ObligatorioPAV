#include "Puntaje.h"
#include "Usuario.h"
Puntaje::Puntaje() {};
Puntaje::Puntaje(int puntos,Usuarios* usuarios){
    this->puntos=puntos;
    this->Usuarios=usuarios;
}
int Puntaje::getPuntos(){
    return this->puntos;
}
void Puntaje::setPuntos(int puntos) {
    this->puntos=puntos;
}
list<Usuario*> Puntaje::getUsuariosPuntaje(){
    list<Usuario*> lstUsuarios;
    for (map<string,Usuario*>::iterator it=this->usuarios.begin(); it!=usuarios.end(); ++it)
        lstUsuario.push_back(it->second);
    return lstUsuarios;
}
void Puntaje::agregarUsuarioPuntaje(Usuario * usuario) {
    usuario.insert(std::pair<string,Usuario*>(usuario->getNickname(),usuario));
}