#include <iostream>
#include "./Dtypes/dtDireccion.h"
#include "./Dtypes/dtFecha.h"
#include "./Dtypes/dtHorario.h"
#include "./Clases/Fabrica.h"
#include "Inrterfaces/IctrInicioSesion.h"
#include "Inrterfaces/IctrAltaCine.h"
#include "Inrterfaces/IctrPuntuarPelicula.h"
#include "string.h"
#include "UI/ui.h"
#include <list>

using namespace std;
Fabrica* fabrica;
IctrInicioSesion* ictrIS;
IctrAltaCine* ictrAC;
IctrPuntuarPelicula* ictrmP;

//Operacion Inicio Sesion
//void iniciarSesion(){};
//void ingresarUsuario(){};




/////main
int main() {
    fabrica = Fabrica::getInstancia();
    ictrIS = fabrica->getIControlador();//Contiene el controlador de inicio sesion
    ictrAC = fabrica->getIControlador2();//Contien el controlador de alta cine
    ictrmP = fabrica->getIControlador3();//Contiene controlador de puntuar Pelicula
    int opcion;
    string usr;
    string calle;
    int numeroDir;
    string pass;
    dtDireccion dir;
    int capacidadSalas;
    ictrIS->cargaDatos();
    ictrIS->cargaPelicula();
    list<string> listpl;
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
                break;
            case 4: //verConsultasAntesDeFecha();
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