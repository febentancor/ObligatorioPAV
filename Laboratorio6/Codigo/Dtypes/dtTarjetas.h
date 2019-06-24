//
// Created by yokad on 6/20/2019.
//

#ifndef CODIGO_DTTARJETAS_H
#define CODIGO_DTTARJETAS_H

#include <string>
#include <map>

using namespace std;

class dtTarjetas {
private:
    int descuento;
    string nombrebanco;
    map<string,int>tarjetas;

public:
    dtTarjetas();
    dtTarjetas(int,string);
    void ingresarFinanciera(int, string);
    int obtenerDescuento(string);
    int getDescuento();
    string getNombreBanco();
    bool existeBanco(string);
    ~dtTarjetas();
};


#endif //CODIGO_DTTARJETAS_H
