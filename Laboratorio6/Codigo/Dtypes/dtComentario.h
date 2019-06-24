#ifndef CODIGO_DTCOMENTARIO_H
#define CODIGO_DTCOMENTARIO_H

#include <string>
#include <map>

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

};


#endif //CODIGO_DTCOMENTARIO_H
