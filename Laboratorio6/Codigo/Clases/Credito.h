//
// Created by yokad on 6/17/2019.
//

#ifndef CODIGO_CREDITO_H
#define CODIGO_CREDITO_H

#include <iostream>
#include "../Clases/Reserva.h"
#include "string"


using namespace std;

class Credito : public Reserva{
    private:
        string financiera;
        float porcentajeDto;

    public:
        Credito();
        Credito(string, float);
        string getFinanciera();
        void setFinanciera(string);
        float getPorcentajeDto();
        void setPorcentajeDto(float);
        ~Credito();

};


#endif //CODIGO_CREDITO_H
