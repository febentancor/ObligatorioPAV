#include <iostream>
#include "Dtypes/dtDireccion.h"
#include "Dtypes/dtFecha.h"
#include "Dtypes/dtHorario.h"
#include "Clases/Fabrica.h"
#include "Dtypes/dtPelicula.h"
#include "Inrterfaces/IctrInicioSesion.h"
#include "Inrterfaces/IctrAltaCine.h"
#include "Inrterfaces/IctrPuntuarPelicula.h"
#include "Inrterfaces/IctrAltaFuncion.h"
#include "Inrterfaces/IctrComentarPelicula.h"
#include "string.h"
#include "UI/ui.h"
#include <list>

using namespace std;
Fabrica* fabrica;
IctrInicioSesion* ictrIS;
IctrAltaCine* ictrAC;
IctrPuntuarPelicula* ictrmP;
IctrAltaFuncion* ictrAF;
IctrComentarPelicula* ictrCP;





/////main
int main() {
    fabrica = Fabrica::getInstancia();
    ictrIS = fabrica->getIControlador();//Contiene el controlador de inicio sesion
    ictrAC = fabrica->getIControlador2();//Contien el controlador de alta cine
    ictrmP = fabrica->getIControlador3();//Contiene controlador de puntuar Pelicula
    ictrAF = fabrica->getIControlador4();//Contiene el controlador de alta funcion
    ictrCP = fabrica->getIcontrolador5();//Contiene el controlador de comentar pelicula
    int opcion;
    bool existe = true;
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
    list<dtCine> listCi;
    string AFtitulo;
    int AFidCine;
    list<dtSala> listSa;
    int AFidSala;
    list<dtFuncion> listFu;
    int dia;
    int mes;
    int anio;
    dtFecha fechaF;
    string horaCamienzoF;
    string horaFinF;
    dtHorario HorarioF;
    bool igualF;

    menu();
    cin >> opcion;
    while (opcion != 7) {
        switch (opcion) {
            case 1:
                cout << "Ingreses Usuario: " << endl;
                cin >> usr;
                try {
                    if (ictrIS->existeUsuario(usr)) {
                        ictrIS->ingresarUsuario(usr);
                        cout << "Ingresar contrasena: " << endl;
                        cin >> pass;
                        try {
                            ictrIS->ingresarContrasena(pass);
                            ictrIS->iniciarSesion();
                            cout << "Sesion iniciada" << endl;
                        } catch (invalid_argument &a) {
                            cout << a.what() << endl;
                        }
                    };
                } catch (invalid_argument &e) {
                    cout << e.what() << endl;
                }

                break;

            case 2:
                cout << "Ingreses calle: " << endl;
                cin >> calle;
                cout << "Ingreses numero: " << endl;
                cin >> numeroDir;
                dir = dtDireccion(calle, numeroDir);
                ictrAC->ingresarDireccion(dir);
                cout << "Ingreses capacidad: " << endl;
                cin >> capacidadSalas;
                ictrAC->ingresarCapacidad(capacidadSalas);
                ictrAC->darAltaCine();
                break;
            case 3:
                listpl = ictrmP->listarTituloPelicula();
                for (list<string>::iterator it = listpl.begin(); it != listpl.end(); ++it) {
                    cout << "\n" << *it;
                    cout << "\n";
                }
                cout << "Seleccionar Pelicula: " << endl;
                cin >> tituloPelicula;
                tiene = ictrmP->seleccionarPelicula(tituloPelicula);
                if (tiene) {
                    verPuntaje = ictrmP->verPuntaje();
                    cout << "El puntaje que tiene ingresado es:" << verPuntaje;
                    cout << "\n";
                    cout << "Desea ingresar un nuevo puntaje a esta pelicula(y/n)" << endl;
                    cin >> nuevoPuntaje;
                    if (nuevoPuntaje == "y" || nuevoPuntaje == "Y") {
                        cout << "Ingresar nuevo puntaje a la Pelicula: " << endl;
                        cin >> puntos;
                        ictrmP->ingresarPuntaje(puntos);
                    }
                } else {
                    cout << "Ingresar puntaje a la Pelicula: " << endl;
                    cin >> puntos;
                    ictrmP->ingresarPuntaje(puntos);
                }
                break;
            case 4:
                listdtPe = ictrAF->listarPeliculas();
                cout << "\n---PELICULAS---";
                for (list<dtPelicula>::iterator it=listdtPe.begin(); it != listdtPe.end(); ++it){

                    cout << "\n Titulo: " << (*it).getTitulo();
                    cout << "\n Poster: " << (*it).getPoster();
                    cout << "\n Sipnosis: " << (*it).getSipnosis();
                    cout << "\n Puntaje: " << (*it).getPuntaje();
                    cout << "\n";
                }
                cout << "\n Seleccionar la Pelicula: " << endl;
                cin >> AFtitulo;

                listCi = ictrAF->seleccionarPelicula(AFtitulo);
                cout << "\n---CINES---";
                for (list<dtCine>::iterator it=listCi.begin(); it != listCi.end(); ++it){

                    cout << "\n IdCine: " << (*it).getIdCine();
                    cout << "\n Calle: " << (*it).getDireccion().getCalle();
                    cout << "\n Numero: " << (*it).getDireccion().getNumero();
                    cout << "\n";
                }
                cout << "\n Seleccionar la Cine: " << endl;
                cin >> AFidCine;

                listSa = ictrAF->seleccionarCine(AFidCine);
                cout << "\n---SALAS---";
                for (list<dtSala>::iterator it=listSa.begin(); it != listSa.end(); ++it){

                    cout << "\n IdSala: " << (*it).getIdSala();
                    cout << "\n Capacidad: " << (*it).getCapacidad();
                    cout << "\n";
                }

                cout << "\n Seleccionar la Sala: " << endl;
                cin >> AFidSala;

                listFu = ictrAF->seleccionarSala(AFidSala);
                cout << "\n---FUNCIONES DE LA SALA---";
                for (list<dtFuncion>::iterator it=listFu.begin(); it != listFu.end(); ++it){

                    cout << "\n Dia: " << (*it).getDia().getDia();
                    cout << "\n Año: " << (*it).getDia().getAnio();
                    cout << "\n Mes: " << (*it).getDia().getMes();
                    cout << "\n Horario de comienzo: " << (*it).getHora().getHoraCominezo();
                    cout << "\n Horario de fin: " << (*it).getHora().getHoraFin();
                    cout << "\n";
                }
                cout << "\n Ingresar Dia: " << endl;
                cin >> dia;
                cout << "\n Ingresar Mes: " << endl;
                cin >> mes;
                cout << "\n Ingresar Anio: " << endl;
                cin >> anio;
                fechaF = dtFecha(dia,mes,anio);
                cout << "\n Ingresar Horario de comienzo: " << endl;
                cin >> horaCamienzoF;
                cout << "\n Ingresar Horario de fin: " << endl;
                cin >> horaFinF;
                HorarioF = dtHorario(horaCamienzoF,horaFinF);
                try {
                    if(!ictrAF->ingresarHorario(fechaF, HorarioF)){
                        ictrAF->darAltaFuncion();
                    }
                }
                catch (invalid_argument &e) {
                    cout << e.what() << endl;
                }

                break;
            case 5: //comentarpelicula();
                listpl = ictrCP->ListarTituloPeliculas();
                for (list<string>::iterator it = listpl.begin(); it != listpl.end(); ++it) {
                    cout << "\n" << *it;
                    cout << "\n";
                }
                cout << "Seleccionar Pelicula: " << endl;
                cin >> tituloPelicula;
               // tiene = ictrmP->seleccionarPelicula(tituloPelicula);
                break;
            case 6: //obtenerMascotas();
                break;
            case 7:
                system("exit");
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
