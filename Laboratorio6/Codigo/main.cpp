#include <iostream>
#include "./Dtypes/dtDireccion.h"
#include "./Dtypes/dtFecha.h"
#include "./Dtypes/dtHorario.h"
#include "./Clases/Fabrica.h"
#include "dtPelicula.h"
#include "Inrterfaces/IctrInicioSesion.h"
#include "Inrterfaces/IctrAltaCine.h"
#include "Inrterfaces/IctrPuntuarPelicula.h"
#include "IctrAltaFuncion.h"
#include "string.h"
#include "UI/ui.h"
#include <list>

using namespace std;
Fabrica* fabrica;
IctrInicioSesion* ictrIS;
IctrAltaCine* ictrAC;
IctrPuntuarPelicula* ictrmP;
IctrAltaFuncion* ictrAF;

//Operacion Inicio Sesion
//void iniciarSesion(){};
//void ingresarUsuario(){};




/////main
int main() {
    fabrica = Fabrica::getInstancia();
    ictrIS = fabrica->getIControlador();//Contiene el controlador de inicio sesion
    ictrAC = fabrica->getIControlador2();//Contien el controlador de alta cine
    ictrmP = fabrica->getIControlador3();//Contiene controlador de puntuar Pelicula
    ictrAF = fabrica->getIControlador4();//Contiene el controlador de alta funcion
    int opcion;
    string usr;
    string calle;
    int numeroDir;
    string pass;
    dtDireccion dir;
    int capacidadSalas;
    ictrIS->cargaDatos();
    ictrIS->cargaPelicula();
    // Se variables para ingresar puntaje
    list<string> listpl;
    string tituloPelicula;
    bool tiene;
    float puntos;
    string nuevoPuntaje;
    float verPuntaje;
    //Las variables de alta funcion
    list<dtPelicula> listdtPe;
    menu();
    cin >> opcion;
    while(opcion != 7){
        switch(opcion){
            case 1:
                cout <<"Ingreses Usuario: "<<endl;
                cin >> usr;
                ictrIS->ingresarUsuario(usr);
                cout <<"Ingresar contrasena: "<<endl;
                cin >> pass;
                if(ictrIS->ingresarContrasena(pass)){
                    ictrIS->iniciarSesion();
                    cout <<"Sesion iniciada"<<endl;
                }else{
                    cout <<"Usuario no existe o contrasena invalida"<<endl;
                }
                break;
            case 2:
                cout <<"Ingreses calle: "<<endl;
                cin >> calle;
                cout <<"Ingreses numero: "<<endl;
                cin >> numeroDir;
                dir = dtDireccion(calle,numeroDir);
                ictrAC->ingresarDireccion(dir);
                cout <<"Ingreses capacidad: "<<endl;
                cin >> capacidadSalas;
                ictrAC->ingresarCapacidad(capacidadSalas);
                ictrAC->darAltaCine();
                break;
            case 3:
                listpl = ictrmP->listarTituloPelicula();
                for (list<string>::iterator it=listpl.begin(); it != listpl.end(); ++it){
                    cout << "\n" << *it;
                    cout << "\n";
                }
                cout <<"Seleccionar Pelicula: "<<endl;
                cin >> tituloPelicula;
                tiene=ictrmP->seleccionarPelicula(tituloPelicula);
                if(tiene){
                    verPuntaje=ictrmP->verPuntaje();
                    cout <<"El puntaje que tiene ingresado es:"<<verPuntaje;
                    cout << "\n";
                    cout <<"Desea ingresar un nuevo puntaje a esta pelicula(y/n)"<<endl;
                    cin >> nuevoPuntaje;
                    if(nuevoPuntaje == "y" || nuevoPuntaje == "Y"){
                        cout <<"Ingresar nuevo puntaje a la Pelicula: "<<endl;
                        cin >> puntos;
                        ictrmP->ingresarPuntaje(puntos);
                    }
                }else{
                    cout <<"Ingresar puntaje a la Pelicula: "<<endl;
                    cin >> puntos;
                    ictrmP->ingresarPuntaje(puntos);
                }
                break;
            case 4:
                listdtPe = ictrAF->listarPeliculas();
                for (list<dtPelicula>::iterator it=listdtPe.begin(); it != listdtPe.end(); ++it){
                    cout << "\n" << (*it).getTitulo();
                    cout << "\n" << (*it).getPoster();
                    cout << "\n" << (*it).getSipnosis();
                    cout << "\n" << (*it).getPuntaje();
                    cout << "\n";
                }

                break;
            case 5: //eliminarSocio();
                break;
            case 6: //obtenerMascotas();
                break;
            case 7: system("exit");
                cout << "SALIENDO..." << endl;
            default:
                cout << "OPCIÓN INCORRECTA" << endl;
        }
        //1system("sleep 5");
        menu();
        cin >> opcion;
    }

    return 0;
}