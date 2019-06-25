#ifndef CODIGO_DTCOMENTARIO_H
#define CODIGO_DTCOMENTARIO_H

#include <string>
#include <map>
#include "Usuario.h"

using namespace std;
class Usuario;
class dtComentario {
private:
    int id;
    string comentario;
    map<int,dtComentario*>dtcomentariosComentados;//
    Usuario* usuarios;

public:
    dtComentario();
    dtComentario(int id, string comentario, Usuario* usuario, map<int, dtComentario*> dtcomentariosComentados);
    int getComentarioId();
    string getComentario();
    virtual ~dtComentario();
    string getNick();
    Usuario* getDTUsuariosComentario();
};


#endif //CODIGO_DTCOMENTARIO_H
