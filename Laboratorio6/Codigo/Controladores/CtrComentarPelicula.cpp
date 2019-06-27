#include "../Controladores/CtrComentarPelicula.h"
#include "../Manejadores/ManejadorPelicula.h"
#include "../Clases/Pelicula.h"
#include "../Dtypes/dtComentario.h"
#include  "../Dtypes/dtCine.h"
#include <iostream>
#include <string>
#include <list>
#include "../Clases/Sesion.h"
#include  "../Manejadores/ManejadorUsuario.h"
#include "../Clases/Comentario.h"

list<string> CtrComentarPelicula::ListarTituloPeliculas(){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<string> titulos;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        titulos.push_back((*it)->getTitulo());
    }
    return titulos;
}

bool CtrComentarPelicula::existePelicula(string titulo){
    bool existe = false;
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        if(titulo.compare((*it)->getTitulo()) == 0){
            existe = true;
            return existe;
        }
    }
    return existe;
}
bool CtrComentarPelicula::existeComentario(string titulo){
    bool existe = false;
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    Pelicula* peliculaSeleccionada = mP->buscarPelicula(titulo);
    if(peliculaSeleccionada->getComentariosPeliculas().empty()){
        return existe;
    }else{
        existe = true;
        return existe;
    }
}


list<dtComentario*> CtrComentarPelicula::seleccionarPelicula(string titulo){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    Pelicula* peliculaSeleccionada = mP->buscarPelicula(titulo);
    std::list<dtComentario*> listaComentarios;
    map<int, Comentario*> cP = peliculaSeleccionada->getComentariosPeliculas();
    for(map<int, Comentario*>::iterator it=cP.begin(); it!=cP.end(); ++it){
        Comentario* CC = (*it).second;
        dtComentario* dtC = new dtComentario((*it).second->getId(), (*it).second->getComentarios(), (*it).second->getUsuariosComentario(), (*it).second->getdtComentariosComentados() );
        map<int,dtComentario*>pp;
        //dtComentario* dtC = new dtComentario((*it).second->getId(), (*it).second->getComentarios(), (*it).second->getUsuariosComentario(), pp );
        //dtComentario* dtC = new dtComentario(0, "prueba", (*it).second->getUsuariosComentario(), pp );
        listaComentarios.push_back(dtC);
    }
    return listaComentarios;
}

Comentario* CtrComentarPelicula::buscarComentario(int idBuscar, map<int, Comentario*> comentado) {
    map<int,Comentario*> iter = comentado;
//    map<int, Comentario*>::iterator it = comentado.find(idBuscar);
    Comentario* com = iter.find(idBuscar)->second;

    if (com != NULL && com->getId() == idBuscar){

        return com;

    } else {

        for (map<int,Comentario*>::iterator it1=iter.begin(); it1!=iter.end(); ++it1) {

//            map<int, Comentario*>::iterator it3 = (it1->second->getComentariosComentados2().begin());

            if (!it1->second->getComentariosComentados2().empty()){
                return buscarComentario(idBuscar, it1->second->getComentariosComentados2());
            }

        }
    }

    return NULL;

}


void CtrComentarPelicula::ingresarComentario(string nuevoComentario, string tituloPelicula){

    Sesion *s = Sesion::getInstancia();
    string t = s->getNickname();
    ManejadorUsuario *mU = ManejadorUsuario::getInstancia();
    Usuario *UsrC = mU->buscarUsuario(t);
    map<int, Comentario *> com;
    Comentario *C1 = new Comentario(nuevoComentario, UsrC, com);
    ManejadorPelicula *mP1 = ManejadorPelicula::getInstancia();
    Pelicula *p1 = mP1->buscarPelicula(tituloPelicula);
    p1->agregarComentario(C1);
}

void CtrComentarPelicula::comentarComentario(int idResponder, string nuevaRespuesta, string tituloPelicula) {

    ManejadorPelicula *mP1 = ManejadorPelicula::getInstancia();
    Pelicula *p1 = mP1->buscarPelicula(tituloPelicula);
    Sesion *s = Sesion::getInstancia();
    string t = s->getNickname();
    ManejadorUsuario *mU = ManejadorUsuario::getInstancia();
    Usuario *UsrC = mU->buscarUsuario(t);
    map<int, Comentario *> com2;
    Comentario *c1 = buscarComentario(idResponder, p1->getComentariosPeliculas());

    if(c1 != NULL) {

        Comentario *c2 = new Comentario(nuevaRespuesta, UsrC, com2);

        c1->comentarComentario(c2);

    }
    else
        cout << "No se encontro el id seleccionado" << endl;

}


void CtrComentarPelicula::ingresarComentario(){};