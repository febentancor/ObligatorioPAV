//
// Created by yokad on 6/4/2019.
//

#ifndef CODIGO_DTFECHA_H
#define CODIGO_DTFECHA_H


class dtFecha {
private:
    int dia;
    int mes;
    int anio;
public:
    dtFecha();
    dtFecha(int dia, int mes, int anio);

    int getDia();

    int getMes();

    int getAnio();

    virtual ~dtFecha();
};


#endif //CODIGO_DTFECHA_H
