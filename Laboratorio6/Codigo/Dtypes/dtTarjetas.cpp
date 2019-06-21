//
// Created by yokad on 6/20/2019.
//

#include "dtTarjetas.h"
#include <map>
#include <string>
using  namespace std;
dtTarjetas::dtTarjetas(){}
dtTarjetas::dtTarjetas(int descuento, string nombrebanco) {
    this->descuento=descuento;
    this->nombrebanco=nombrebanco;
}

int dtTarjetas::getDescuento(){
    return this->descuento;
}

void dtTarjetas::setDescuento(int descuento){
    this->descuento=descuento;
}

string dtTarjetas::getNombreBanco(){
    return this -> nombrebanco;
}

void dtTarjetas::setNombreBanco(string nombreBanco){
    this->nombrebanco=nombreBanco;
}


void dtTarjetas::ingresarFinanciera(int descuento, string nombreBanco){
     tarjetas.insert(pair<string,int>(nombreBanco,descuento));

};

bool dtTarjetas::existeBanco(string banco) {
    map<string, int>::iterator it = this->tarjetas.find(banco);
    return (it != this->tarjetas.end());
}
int dtTarjetas::obtenerDescuento(string banco) {
    if(existeBanco(banco)){
        map<string,int>::iterator it = this->tarjetas.find(banco);
        return it->second;
    }else{
        return 0;
    }
}


dtTarjetas::~dtTarjetas(){}

