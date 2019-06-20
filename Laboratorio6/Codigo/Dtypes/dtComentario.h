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
    map<int,dtComentario*>dtcomentariosComentados;
    Usuario* usuarios;

public:
    dtComentario();
    dtComentario(int id, string comentario, Usuario* usuario, map<int, dtComentario*> comentariosComentados);
    int getComentarioId();
    void setComentarioId(int id);
    string getComentario();
    void setComentario(string comentario);
    virtual ~dtComentario();

};


#endif //CODIGO_DTCOMENTARIO_H
