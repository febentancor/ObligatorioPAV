//
// Created by yokad on 6/22/2019.
//

#ifndef CODIGO_CTRRELOJ_H
#define CODIGO_CTRRELOJ_H

#include "Reloj.h"
#include <string>
#include "IctrReloj.h"

using namespace std;
class CtrReloj: public IctrReloj  {
public:
    CtrReloj();
    void ingresarReloj(dtFecha, dtHora);
    Reloj obtenerReloj();
private:
    dtHorario dth;
    dtFecha dtf;
};


#endif //CODIGO_CTRRELOJ_H
