#ifndef CODIGO_COMENTARIO_H
#define CODIGO_COMENTARIO_H

#include <map>
#include <list>
#include "dtComentario.h"


using namespace std;
class Usuario;


class Comentario {
private:
    int id;
    static int idAuto;
    string comentario;
    Usuario* usuarios;
    map<int, Comentario*>comentariosComentados;
public:
    Comentario();
    Comentario(string comentario, Usuario* usuario, map<int, Comentario*> comentariosComentados);
    Usuario* getUsuariosComentario();
    void agregarUsuarioComentario(Usuario*);
    string getComentarios();
    void setUsuario(Usuario*);
    static int getIdAutoC();
    string getNick();
    int getId();
    void comentarComentario (Comentario* comentario4);
    map <int, dtComentario*> getComentariosComentados();
    map <int, Comentario*> getComentariosComentados2();
    map <int, dtComentario*> getdtComentariosComentados();
    Comentario buscarComentario();
    ~Comentario();
};


#endif //CODIGO_COMENTARIO_H
