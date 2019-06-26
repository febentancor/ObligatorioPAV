//
// Created by yokad on 6/22/2019.
//

#include "../Controladores/CtrReloj.h"
#include <string>
#include "../Clases/Reloj.h"
#include "../Dtypes/dtReloj.h"
#include "../Dtypes/dtFecha.h"
#include "../Dtypes/dtHorario.h"
#include "../Clases/Sesion.h"

using namespace std;

CtrReloj::CtrReloj(){}

dtReloj* CtrReloj::obtenerReloj(){
    Sesion* s = Sesion::getInstancia();
    dtFecha f = (s->getReloj()->getFecha());
    dtHora h = (s->getReloj()->getHora());
    dtReloj* r = new dtReloj(f,h);
    return r;
}
void CtrReloj::ingresarReloj(dtFecha fec, dtHora hor){
    Sesion* s = Sesion::getInstancia();
    Reloj* r = new Reloj(fec,hor);
    s->setReloj(r);
}