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
    const string &getHoraCominezo() const;

    void setHoraCominezo(const string &horaCominezo);

    const string &getHoraFin() const;

    void setHoraFin(const string &horaFin);

};


#endif //LABORATORIO6_DTHORARIO_H
