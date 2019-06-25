//
// Created by yokad on 6/22/2019.
//

#include "CtrReloj.h"
#include <string>
#include "Reloj.h"
#include "dtReloj.h"
#include "dtFecha.h"
#include "dtHorario.h"
#include "Sesion.h"

using namespace std;

CtrReloj::CtrReloj(){}

dtReloj* CtrReloj::obtenerReloj(){
    Sesion* s = Sesion::getInstancia();
    dtFecha f = (s->getReloj()->getFecha());
    dtHora h = (s->getReloj()->getHora());
    dtReloj* r = new dtReloj(f,h);
    return r;
}
