//
// Created by yokad on 6/22/2019.
//

#ifndef CODIGO_CTRRELOJ_H
#define CODIGO_CTRRELOJ_H

#include "Reloj.h"
#include <string>
#include "IctrReloj.h"
#include "dtReloj.h"

using namespace std;
class CtrReloj: public IctrReloj  {
public:
    CtrReloj();
    //void ingresarReloj(dtFecha, dtHora);
    dtReloj* obtenerReloj();
private:
    dtHorario dth;
    dtFecha dtf;
};


#endif //CODIGO_CTRRELOJ_H
