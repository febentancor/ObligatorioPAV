//
// Created by gsoto on 19/06/2019.
//

#ifndef CODIGO_DTPUNTAJE_H
#define CODIGO_DTPUNTAJE_H

#include <string>
using namespace std;


class dtPuntaje {
private:
    string nickname;
    int puntos;
public:
    dtPuntaje();
    dtPuntaje(string nickname, int puntos);
    string getNickname() ;
    void setNickname(string nickname);
    
    float getPuntos();
    void setPuntos(int punaje);
    ~dtPuntaje();
};


#endif //CODIGO_DTPUNTAJE_H
