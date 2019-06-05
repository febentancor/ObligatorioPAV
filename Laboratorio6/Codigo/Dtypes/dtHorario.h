//
// Created by yokad on 6/4/2019.
//

#ifndef LABORATORIO6_DTHORARIO_H
#define LABORATORIO6_DTHORARIO_H

#include <string>
using namespace std;

class dtHorario {
private:
    string horaCominezo;
    string horaFin;
public:
    dtHorario();
    dtHorario(string, string);
    string &getHoraCominezo();

    void setHoraCominezo(string &horaCominezo);

    string &getHoraFin();

    void setHoraFin(string &horaFin);

};


#endif //LABORATORIO6_DTHORARIO_H
