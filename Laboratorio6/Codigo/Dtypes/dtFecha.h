//
// Created by yokad on 6/4/2019.
//

#ifndef LABORATORIO6_DTFECHA_H
#define LABORATORIO6_DTFECHA_H


class dtFecha {
private:
    int dia;
    int mes;
    int anio;
public:
    dtFecha();
    dtFecha(int dia, int mes, int anio);

    int getDia() const;

    void setDia(int dia);

    int getMes() const;

    void setMes(int mes);

    int getAnio() const;

    void setAnio(int anio);

    virtual ~dtFecha();
};


#endif //LABORATORIO6_DTFECHA_H
