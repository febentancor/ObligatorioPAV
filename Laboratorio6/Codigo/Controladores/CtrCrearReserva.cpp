//
// Created by yokad on 6/17/2019.
//

#include "CtrCrearReserva.h"
#include "Sesion.h"
#include "dtPelicula.h"
#include "dtCine.h"
#include "dtSala.h"
#include "dtHorario.h"
#include "dtFecha.h"
#include "dtFuncion.h"
#include "dtTarjetas.h"
#include "ManejadorFunciones.h"
#include "ManejadorCine.h"
#include "ManejadorPelicula.h"
#include "ManejadorCrearReserva.h"
#include "Debito.h"
#include "Credito.h"

#include <list>

CtrCrearReserva::CtrCrearReserva() {}

list<string> CtrCrearReserva::listarPeliculas(){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<string> titulos;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        titulos.push_back((*it)->getTitulo());
    }
    return titulos;
}

list<dtInfoPelicula> CtrCrearReserva::seleccionarPeliculaC(string titulo){
    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    list<Pelicula*> pelis = mP->getPeliculas();
    list<dtInfoPelicula> dtpelis;
    for(list<Pelicula*>::iterator it= pelis.begin(); it!=pelis.end(); ++it){
        if((*it)->getTitulo() == titulo){
            peliculaCfuncion=(*it);
            dtInfoPelicula dt = dtInfoPelicula((*it)->getPoster(),(*it)->getSipnosis());
            dtpelis.push_back(dt);
        }
    }
    return dtpelis;
}

list<dtCine> CtrCrearReserva::listarCineC(){
    list<Cine*> c = peliculaCfuncion->obternerCines();
    list<dtCine> dtcin;
    for(list<Cine*>::iterator it=c.begin();it!=c.end(); ++it){
        dtCine dt = dtCine((*it)->getId(),(*it)->getDireccion());
        dtcin.push_back(dt);
    }
    return dtcin;
};

list<dtFuncion> CtrCrearReserva::seleccionarCineC(int idCine){
    list<Cine*> c = peliculaCfuncion->obternerCines();
    list<dtFuncion> dtfun;
    for(list<Cine*>::iterator it=c.begin();it!=c.end(); ++it){
        if((*it)->getId() == idCine){
            this->cineReserva=(*it);
            list<Sala*> s = (*it)->getSalas();
            for(list<Sala*>::iterator it1=s.begin();it1!=s.end(); ++it1){
                list<Funcion*> f = (*it1)->getFuncion();
                for(list<Funcion*>::iterator it2=f.begin();it2!=f.end(); ++it2) {
                    dtFuncion dt = dtFuncion((*it2)->getDia(),(*it2)->getHora(),(*it2)->getId());
                    dtfun.push_back(dt);
                }
            }
        }
    }
    return dtfun;
}

void CtrCrearReserva::seleccionarFuncion(int idFuncion){
    list<Sala*> s = cineReserva->getSalas();
    for(list<Sala*>::iterator it1=s.begin();it1!=s.end(); ++it1){
        list<Funcion*> f = (*it1)->getFuncion();
        for(list<Funcion*>::iterator it2=f.begin();it2!=f.end(); ++it2) {
            if((*it2)->getId() == idFuncion){
                this->funcionReserva=(*it2);
            }
        }
    }
}

void CtrCrearReserva::ingresarCantidadAsientos(int CantAs){
    this->CantAsisentos=CantAs;
}
void CtrCrearReserva::ingresarTipoPago(int tiPago){
    this->tipoPago=tiPago;
}
void CtrCrearReserva::ingresarNombreDeBanco(string nomBan){
    this->nomBanco=nomBan;
}
void CtrCrearReserva::ingresarFinanciera(int descuento){
    this->descuento=descuento;
}
float CtrCrearReserva::verPrecioTotal(){
    float precio = 0;
    float des;
    int precioFuncion=funcionReserva->getPrecioFuncion();
    if(tipoPago==0){
        precio = precioFuncion * CantAsisentos;
    }
    else{
        precio = precioFuncion * CantAsisentos;
        des= (precio * descuento);
        des = des/100;
        precio = precio - des;
    }
    this->precioTotal=precio;
    return precio;
}

void CtrCrearReserva::cargaFinancieras() {
    dtTarjetas* dt= new dtTarjetas;
    dt->ingresarFinanciera(10,"Santander");
    dt->ingresarFinanciera(25, "BROU");
    this->tipoDescuento=dt;
}

int CtrCrearReserva::obtDescuento(string x){
    int r= tipoDescuento->obtenerDescuento(x);
    return r;
}

bool CtrCrearReserva::existeBanco(string x) {
    dtTarjetas* dt= new dtTarjetas;
    bool y;
    y= dt->existeBanco(x);
    return  y;
}
void CtrCrearReserva::confirmar(){
    Reserva* r = new Reserva(precioTotal,CantAsisentos);
    ManejadorCrearReserva* mCR = ManejadorCrearReserva::getInstancia();
    mCR->agregarReserva(r);

    funcionReserva->ingresarReserva(r,r->getId());
    if(tipoPago==1){
         Debito* d = new Debito(nomBanco);
    }else{
        Credito* c = new Credito(nomBanco,descuento);
    }
}

