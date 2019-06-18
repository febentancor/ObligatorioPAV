//
// Created by Facundo on 2019-06-13.
//

#ifndef CODIGO_COMENTARIO_H
#define CODIGO_COMENTARIO_H

#include <map>
#include <list>
<<<<<<< HEAD
#include "../Dtypes/dtComentario.h"
=======
#include "dtComentario.h"
>>>>>>> master

using namespace std;
class Usuario;


class Comentario {
private:
    int id;
    static int idauto;
    dtComentario comentario;
    Usuario* usuarios;

public:
    Comentario();
    Comentario(dtComentario comentario);
    list<Usuario*> getUsuariosComentario();
    void agregarUsuarioComentario(Usuario*);
    dtComentario getComentarios();
    void setUsuario(Usuario*);
    void setdtcomentario(dtComentario);
    static int getIdAuto();
    string getNick();

    ~Comentario();
};


#endif //CODIGO_COMENTARIO_H
