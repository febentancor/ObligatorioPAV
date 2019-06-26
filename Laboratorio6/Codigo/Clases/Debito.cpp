//
// Created by yokad on 6/17/2019.
//

#include "../Clases/Debito.h"
#include "string"
using namespace std;

Debito::Debito(){}

Debito::Debito(string banco) {
   this->banco=banco;
}

string Debito::getBanco() {
    return this->banco;
}

void Debito::setBanco(string banco) {
    this ->banco=banco;
}
Debito::~Debito(){}
