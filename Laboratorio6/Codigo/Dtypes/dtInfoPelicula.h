//
// Created by gsoto on 19/06/2019.
//

#ifndef CODIGO_DTINFOPELICULA_H
#define CODIGO_DTINFOPELICULA_H

#include <string>
using namespace std;


class dtInfoPelicula {
private:
    string poster;
    string sinopsis;
public:
    dtInfoPelicula();
    dtInfoPelicula(string, string);
    string getPoster() ;
    void setPoster(string poster);

    string getSinopsis();
    void setSinopsis(string sinopsis);
    ~dtInfoPelicula();
};


#endif //CODIGO_DTINFOPELICULA_H
