//
// Created by mrodriguez on 24/06/19.
//

#include "dtHora.h"
dtHora::dtHora() {}

dtHora::dtHora(int h, int min) {

    this->h=h;
    this->min=min;

}
int dtHora::getHora(){
    return h, min;
}

dtHora::~dtHora(){}