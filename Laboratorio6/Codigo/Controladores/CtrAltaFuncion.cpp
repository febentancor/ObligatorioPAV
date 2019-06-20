//
// Created by gsoto on 17/06/2019.
//
#include "CtrPuntuarPelicula.h"
#include "CtrAltaFuncion.h"
#include "Sesion.h"
#include "dtPelicula.h"
#include "dtCine.h"
#include <list>
#include "ManejadorCine.h"
#include "ManejadorFunciones.h"

CtrAltaFuncion::CtrAltaFuncion() {}

list<dtPelicula> CtrAltaFuncion:: listarPeliculas(){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<dtPelicula> dtpeliculas;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        dtPelicula dt = dtPelicula((*it)->getTitulo(),(*it)->getSipnosis(),(*it)->getPoster(),(*it)->puntajePromedio());
        dtpeliculas.push_back(dt);
    }
    return dtpeliculas;
};

list<dtCine> CtrAltaFuncion::seleccionarPelicula(string titulo){
    this->tituloFuncion=titulo;
    ManejadorCine* mC = ManejadorCine::getInstancia();
    list<Cine*> cin = mC->getCines();
    list<dtCine> dtcines;
    for(list<Cine*>::iterator it= cin.begin(); it!=cin.end(); ++it){
        dtCine dt = dtCine((*it)->getId(),(*it)->getDireccion());
        dtcines.push_back(dt);
    }
    return dtcines;
};

bool CtrAltaFuncion::existeTitulo(string tit){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    bool existe=mP->existePelicula(tit);
    if(!existe)
        throw invalid_argument ("ERROR el titulo seleccionado no existe\n");
    return existe;
}

bool CtrAltaFuncion::existeCine(int id) {
    ManejadorCine* mC= ManejadorCine::getInstancia();
    bool existe=mC->existeCine(id);
    if(!existe)
        throw invalid_argument("ERROR el cine no existe \n");
    return  existe;
}


list<dtSala> CtrAltaFuncion::seleccionarCine(int idCine){
    this->idCine=idCine;
    ManejadorCine* mC = ManejadorCine::getInstancia();
    list<Cine*> cin = mC->getCines();
    list<dtSala> dtsalas;
    for(list<Cine*>::iterator it= cin.begin(); it!=cin.end(); ++it){
        if((*it)->getId() == idCine) {
            this->cineFuncion=(*it);
            list<Sala *> sal = ((*it)->getSalas());
            for (list<Sala *>::iterator it1 = sal.begin(); it1 != sal.end(); ++it1) {
                dtSala dt = dtSala((*it1)->getId(), (*it1)->getCapacidad());
                dtsalas.push_back(dt);
            }
        }
    }
    return dtsalas;
};

bool CtrAltaFuncion::existeSala(int id) {
    bool existe = false;
    list<Sala *> s = cineFuncion->getSalas();
    for (list<Sala *>::iterator it1 = s.begin(); it1 != s.end(); ++it1) {
        if ((*it1)->getId() == id) {
            existe = true;
        }
    }
    if (!existe)
        throw invalid_argument("ERROR la sala no existe \n");
    return existe;
}
list<dtFuncion> CtrAltaFuncion::seleccionarSala(int idSala){
    list<dtFuncion> dtfunciones;
    list<Sala*> sal = (cineFuncion->getSalas());
    for (list<Sala*>::iterator it1= sal.begin(); it1!=sal.end(); ++it1){
        if((*it1)->getId() == idSala) {
            this->salaFuncion=(*it1);
            list<Funcion *> fun = ((*it1)->getFuncion());
            for (list<Funcion *>::iterator it2 = fun.begin(); it2 != fun.end(); ++it2) {
                dtFuncion dt = dtFuncion((*it2)->getDia(), (*it2)->getHora());
                dtfunciones.push_back(dt);
            }
        }
    }
//    for(list<Cine*>::iterator it= cin.begin(); it!=cin.end(); ++it){
//        list<Sala*> sal = ((*it)->getSalas());
//        for (list<Sala*>::iterator it1= sal.begin(); it1!=sal.end(); ++it1){
//            if((*it1)->getId() == idSala){
//                list<Funcion*> fun = ((*it1)->getFuncion());
//                for (list<Funcion*>::iterator it2= fun.begin(); it2!=fun.end(); ++it2) {
//                    dtFuncion dt = dtFuncion((*it2)->getDia(),(*it2)->getHora());
//                    dtfunciones.push_back(dt);
//                }
//            }
//        }
//    }
    return dtfunciones;
};

bool CtrAltaFuncion::ingresarHorario(dtFecha Fecha, dtHorario Horario){
    Sala* s = salaFuncion;
    bool igual=false;
    list<Funcion *> fun = (s->getFuncion());
    for (list<Funcion *>::iterator it2 = fun.begin(); it2 != fun.end(); ++it2) {
        int Dia = (*it2)->getDia().getDia();
        int Mes = (*it2)->getDia().getMes();
        int Anio = (*it2)->getDia().getAnio();
        if(Dia == Fecha.getDia() && Mes == Fecha.getMes() && Anio == Fecha.getDia()){
            igual=true;
        }
    }
    if(!igual){
        this->fechaFuncion=Fecha;
        this->horarioFuncion=Horario;
    }else{
        throw invalid_argument("ERROR: LA SALA YA CONTIENE UN FUNCION PARA ESE DIA\n");
    }
    return igual;
};

Pelicula * CtrAltaFuncion::setPelicula(string Tit){
    Tit=tituloFuncion;
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    Pelicula* p;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        if((*it)->getTitulo() == Tit){
            p=(*it);
        }
    }
    return p;
}

void CtrAltaFuncion::darAltaFuncion (){
    Pelicula* p = setPelicula(tituloFuncion);
    p->ingresarCine(cineFuncion,idCine);

    Funcion* f = new Funcion(fechaFuncion,horarioFuncion);
    salaFuncion->ingresarFuncion(f->getId(),f);
    ManejadorFunciones* mF = ManejadorFunciones::getInstancia();
    mF->agregarFuncion(f);
};