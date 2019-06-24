//
// Created by gsoto on 17/06/2019.
//

#ifndef CODIGO_DTFUNCION_H
#define CODIGO_DTFUNCION_H

#include "dtFecha.h"
#include "dtHorario.h"

class dtFuncion {
private:
    int idFuncion;
    static int idAutoF;
    dtFecha dia;
    dtHorario horario;
public:
    virtual ~dtFuncion();
    dtFuncion();
    dtFuncion(dtFecha, dtHorario);

    dtFecha getDia();
    dtHorario getHora();

    int getIdFuncion();
    static int getIdAutoF();

};


#endif //CODIGO_DTFUNCION_H
