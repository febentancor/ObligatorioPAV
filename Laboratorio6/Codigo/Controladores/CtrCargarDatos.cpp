//
// Created by Facundo on 2019-06-26.
//

#include "../Controladores/CtrCargarDatos.h"
#include "../Manejadores/ManejadorUsuario.h"
#include "../Manejadores/ManejadorPelicula.h"
#include "../Dtypes/dtComentario.h"
#include "../Dtypes/dtDireccion.h"
#include "../Dtypes/dtHorario.h"
#include "../Manejadores/ManejadorCine.h"
#include "../Manejadores/ManejadorFunciones.h"



    void CtrCargarDatos::cargarDatosPrueba() {
    Usuario* u = new Usuario("Gonzalo","123","jsjsjsj", false);
    ManejadorUsuario* mU = ManejadorUsuario::getInstancia();
    mU -> agregarUsuario(u);
    Usuario* v = new Usuario("Admin","333","jsjsjsj", true);
    ManejadorUsuario* mV = ManejadorUsuario::getInstancia();
    mV -> agregarUsuario(v);
    Usuario* w = new Usuario("Messi","123","jsjsjsj", true);
    ManejadorUsuario* mW = ManejadorUsuario::getInstancia();
    mW -> agregarUsuario(w);

    //GSM - agrego testing
    Pelicula* p = new Pelicula("PELICULA1","TERROR","HOLA");

    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    mP -> agregarPelicula(p);

    dtDireccion dtD = dtDireccion("CALLE1", 1234);
    Sala* sa = new Sala(20);
    Sala* sa2 = new Sala(30);
    Cine* c = new Cine(dtD);
    c->agregarSala(sa);
    c->agregarSala(sa2);

    p->ingresarCine(c, c->getId());

    dtFecha dtF = dtFecha(10, 10, 2010);
    dtHorario dtH = dtHorario("15hs", "18hs");
    Funcion* fun  = new Funcion(dtF, dtH, 100);

    fun->setPelicula(p);

    sa->ingresarFuncion(fun->getId(), fun);

    ManejadorFunciones* mF = ManejadorFunciones::getInstancia();
    mF->agregarFuncion(fun);

    ManejadorCine* mC = ManejadorCine::getInstancia();
    mC->agregarCine(c);

    //////////////////////////////////////////////////////////////

    Pelicula* pe = new Pelicula("PELICULA2","TERROR","HOLA");
    ManejadorPelicula* mP1 = ManejadorPelicula::getInstancia();
    mP1 -> agregarPelicula(pe);

    dtDireccion dtD1 = dtDireccion("CALLECINE2", 9999);
    Sala* sa1 = new Sala(40);
    Sala* sa12 = new Sala(100);
    Cine* c2 = new Cine(dtD);

    c2->agregarSala(sa1);
    c2->agregarSala(sa12);

    pe->ingresarCine(c2, c2->getId());

    dtF = dtFecha(20, 10, 2000);
    dtH = dtHorario("20hs", "22hs");
    Funcion* fun2  = new Funcion(dtF, dtH, 100);

    fun2->setPelicula(pe);

    sa1->ingresarFuncion(fun2->getId(), fun2);

    mF->agregarFuncion(fun2);

    mC->agregarCine(c2);

    //////////////////////////////////////////////////////////////

    ManejadorUsuario* mU1 = ManejadorUsuario::getInstancia();
    Usuario* mU2 = mU1->buscarUsuario("Gonzalo");
    map<int, Comentario*>com;
    Comentario* C1 = new Comentario("la pelicula es una mierda",mU2,com);
    Pelicula* p1 = mP1->buscarPelicula("PELICULA1");
    p1->agregarComentario(C1);

    Comentario* C2 = new Comentario("AAA", mU2, com);
    C1->comentarComentario(C2);

    Comentario* C3 = new Comentario("BBB", mU2, com);
    C2->comentarComentario(C3);

    Comentario* C4 = new Comentario("CCC", mU2, com);
    C3->comentarComentario(C4);

    Comentario* C5 = new Comentario("DDD", mU2, com);
    C4->comentarComentario(C5);

    Comentario* C6 = new Comentario("BBB1", mU2, com);
    C3->comentarComentario(C6);

    Puntaje* puntaje = new Puntaje(2);
    Usuario* usu = new Usuario("Prueba","test","test",true);
    puntaje->setUsuario(usu);
    p1->ingresarPuntaje(puntaje);

}
