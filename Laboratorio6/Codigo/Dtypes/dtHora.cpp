//
// Created by mrodriguez on 24/06/19.
//

#include "../Dtypes/dtHora.h"

dtHora::dtHora() {}

dtHora::dtHora(int h, int min) {
    this->h=h;
    this->min=min;

}
int dtHora::getHora(){
    return this->h;
}
int dtHora::getMinuto(){
    return this->min;
}

dtHora::~dtHora(){}