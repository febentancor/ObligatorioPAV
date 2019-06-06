#include <iostream>
#include "./Dtypes/dtDireccion.h"
#include "./Dtypes/dtFecha.h"
#include "./Dtypes/dtHorario.h"
#include "./Clases/Fabrica.h"
#include "./Clases/IctrInicioSesion.h"
#include "string.h"
using namespace std;
Fabrica* fabrica;
IctrInicioSesion* ictrIS;

//Operacion Inicio Sesion
//void iniciarSesion(){};
//void ingresarUsuario(){};
void menu(){
    //system("clear");
    cout <<"_____________________________________________" <<endl;
    cout <<"____________G R U P O    C I  S N E__________"<< endl;
    cout <<"1. Iniciar Sesion"<<endl;
    cout <<"2. Agregar Mascota"<<endl;
    cout <<"3. Agregar Consulta"<<endl;
    cout <<"4. Ver consultas antes de una fecha"<<endl;
    cout <<"5. Eliminar Socio"<<endl;
    cout <<"6. Obtener Mascotas de un Socio"<<endl;
    cout <<"7. Salir"<<endl;
    cout <<"_____________________________________________" <<endl;
    cout <<"OPCION: ";
}



/////main
int main() {
    fabrica = Fabrica::getInstancia();
    ictrIS = fabrica->getIControlador();
    int opcion;
    string usr;
    string pass;
    ictrIS->cargaDatos();
    menu();
    cin >> opcion;
    while(opcion != 7){
        switch(opcion){
            case 1:
                cout <<"Ingreses Usuario..."<<endl;
                cin >> usr;
                ictrIS->ingresarUsuario(usr);
                cout <<"Ingresar contrasena"<<endl;
                cin >> pass;
                if(ictrIS->ingresarContrasena(pass)){
                    ictrIS->iniciarSesion();
                    cout <<"Sesion iniciada"<<endl;
                }else{
                    cout <<"Usuario no existe o contrasena invalida"<<endl;
                }
                break;
            case 2: //agregarMascota();
                break;
            case 3: //ingresarConsulta();
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