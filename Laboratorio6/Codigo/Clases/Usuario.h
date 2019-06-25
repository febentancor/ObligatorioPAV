#ifndef CODIGO_USUARIO_H
#define CODIGO_USUARIO_H

#include <string>

using namespace std;

class Usuario{
    private:
        string nickname;
        string contrasena;
        string urlFoto;
        bool esAdmin;
    public:
    Usuario();
    Usuario(string,string,string, bool);
    string getNickname();
    void setNickname(string nickname);
    string getContrasena();
    void setContrasena(string contrasena);
    string getUrlfoto();
    void setUrlfoto(string urlfoto);
    void setEsAdmin(bool ok);
    bool getEsAdmin();


    ~Usuario();

};
#endif //CODIGO_USUARIO_H
