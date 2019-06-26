//
// Created by yokad on 6/22/2019.
//

#ifndef CODIGO_CTRRELOJ_H
#define CODIGO_CTRRELOJ_H

#include "../Clases/Reloj.h"
#include <string>
#include "../Inrterfaces/IctrReloj.h"
#include "../Dtypes/dtReloj.h"
#include "../Dtypes/dtFecha.h"
#include "../Dtypes/dtHora.h"

using namespace std;
class CtrReloj: public IctrReloj  {
public:
    CtrReloj();
    void ingresarReloj(dtFecha, dtHora);
    dtReloj* obtenerReloj();
};


#endif //CODIGO_CTRRELOJ_H
