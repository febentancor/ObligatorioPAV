//
// Created by mrodriguez on 24/06/19.
//

#ifndef CODIGO_DTHORA_H
#define CODIGO_DTHORA_H


class dtHora {
private:
    int h;
    int min;
public:
    dtHora();
    dtHora(int h, int min);
    int getHora();
    int getMinuto();
    virtual ~dtHora();
};


#endif //CODIGO_DTHORA_H
