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
    static int idauto;
    string comentario;
    Usuario* usuarios;
    map<int, Comentario*>comentariosComentados;
public:
    Comentario();
    Comentario(string comentario);
    Usuario* getUsuariosComentario();
    void agregarUsuarioComentario(Usuario*);
    string getComentarios();
    void setUsuario(Usuario*);
    static int getIdAuto();
    string getNick();
    int getId();
    map <int, dtComentario*> getComentariosComentados();

    ~Comentario();
};


#endif //CODIGO_COMENTARIO_H
