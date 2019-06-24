//
// Created by yokad on 6/4/2019.
//

#ifndef CODIGO_DTHORARIO_H
#define CODIGO_DTHORARIO_H

#include <string>
using namespace std;

class dtHorario {
private:
    string horaCominezo;
    string horaFin;
public:
    dtHorario();
    dtHorario(string, string);
    string getHoraCominezo();

    string getHoraFin();
    ~dtHorario();


};


#endif //CODIGO_DTHORARIO_H
