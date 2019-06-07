#ifndef CODIGO_SESION_H
#define CODIGO_SESION_H

#include <string>

using namespace std;

class Sesion{
private:
    static Sesion* instancia;
    string nickname;
    Sesion();
public:
    static Sesion* getInstancia();
    string getNickname();
    void setNickname(string);
    virtual ~Sesion();
};
#endif //CODIGO_SESION_H
