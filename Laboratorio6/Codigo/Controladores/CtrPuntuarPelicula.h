//
// Created by yokad on 6/13/2019.
//

#ifndef CODIGO_CTRPUNTUARPELICULA_H
#define CODIGO_CTRPUNTUARPELICULA_H
#include <Inrterfaces/IctrPuntuarPelicula.h>
#include <string>
using namespace std;

class CtrPuntuarPelicula: public IctrPuntuarPelicula {
public:
    //CtrPuntuarPelicula();
    list<string> listarTituloPelicula();
   bool seleccionarPelicula(string);
   float verPuntaje ();
   void ingresarPuntaje(float);

private:
    string titulo;
    float puntaje;
};


#endif //CODIGO_CTRPUNTUARPELICULA_H
