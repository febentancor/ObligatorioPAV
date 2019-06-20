//
// Created by yokad on 6/17/2019.
//

#ifndef CODIGO_RESERVA_H
#define CODIGO_RESERVA_H


using namespace std;


class Reserva {
private:
    int id;
    float costo;
    int cantEntradas;
    static int idAutoR;
public:
    Reserva();
    Reserva(float,int );
    int getId();
    void setId(int);
    float getCosto();
    void setCosto(float);
    int getCantEntradas();
    void setCantEntradas(int);
    static int getIdAutoR();
    ~Reserva();

};


#endif //CODIGO_RESERVA_H
