#ifndef CODIGO_USUARIO_H
#define CODIGO_USUARIO_H

#include <string>

using namespace std;

class Usuario{
    private:
        string nickname;
        string contrasena;
        string urlFoto;
    public:
    Usuario();
    Usuario(string,string,string);
    string getNickname();
    void setNickname(string nickname);
    string getContrasena();
    void setContrasena(string contrasena);
    string getUrlfoto();
    void setUrlfoto(string urlfoto);

    ~Usuario();

};
#endif //CODIGO_USUARIO_H
