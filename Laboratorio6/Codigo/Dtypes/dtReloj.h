//
// Created by yokad on 6/21/2019.
//

#ifndef CODIGO_DT_H
#define CODIGO_DT_H

#include "dtHorario.h"
#include "dtFuncion.h"
class dtReloj {
public:
    dtHorario horario;
    dtFecha fecha;
private:
    dtReloj();
    dtReloj(dtFecha, dtHorario);
    void setFecha(dtFecha);
    dtFecha getFecha();
    void setHora(dtHorario);
    dtHorario getHora();
    ~dtReloj();

};


#endif //CODIGO_DT_H
