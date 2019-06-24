#ifndef CODIGO_MANEJADORUSUARIO_H
#define CODIGO_MANEJADORUSUARIO_H
#include "Usuario.h"
#include <map>
#include <list>
#include <string>

using namespace std;

class ManejadorUsuario{
private:
    static ManejadorUsuario* instancia;
    map<string,Usuario*> usuarios;
    ManejadorUsuario();
public:
    static ManejadorUsuario* getInstancia();
    list<Usuario*> getUsuarios();
    Usuario* buscarUsuario(string);
    void agregarUsuario(Usuario*);
    bool existeUsuario(string);
    void eliminarUsuario(string);
    bool esAdmin(string);
    bool invitado();
    virtual ~ManejadorUsuario();

};
#endif //CODIGO_MANEJADORUSUARIO_H
