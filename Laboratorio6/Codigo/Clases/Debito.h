//
// Created by yokad on 6/17/2019.
//

#ifndef CODIGO_DEBITO_H
#define CODIGO_DEBITO_H

#include <iostream>
#include <string>
#include "Reserva.h"
using namespace std;

class Debito : public  Reserva{
private:
    string banco;

public:
    Debito();
    Debito(string);
    string getBanco();
    void setBanco(string);
    ~Debito();

};


#endif //CODIGO_DEBITO_H
