//
// Created by yokad on 6/17/2019.
//

#include "Credito.h"

Credito::Credito(){}
Credito::Credito(string financiera, float porcetajeDto) {
    this->financiera=financiera;
    this->porcentajeDto=porcetajeDto;
};

string Credito::getFinanciera() {
    return this->financiera;
};

void Credito::setFinanciera(string financiera) {
    this->financiera=financiera;
};

float Credito::getPorcentajeDto() {
    return this->porcentajeDto;
};
void Credito::setPorcentajeDto(float porcentajeDto)  {
    this->porcentajeDto=porcentajeDto;
};
Credito::~Credito(){}
