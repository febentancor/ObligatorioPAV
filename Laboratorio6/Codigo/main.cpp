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
#include "IctrVerinfoPelicula.h"
#include "string.h"
#include "UI/ui.h"
#include <list>
#define sangtander 10
#define banco republica 20

using namespace std;
Fabrica* fabrica;
IctrInicioSesion* ictrIS;
IctrAltaCine* ictrAC;
IctrPuntuarPelicula* ictrmP;
IctrAltaFuncion* ictrAF;
IctrComentarPelicula* ictrCP;
IctrVerinfoPelicula* ictrVP;





/////main
int main() {
    fabrica = Fabrica::getInstancia();
    ictrIS = fabrica->getIControlador();//Contiene el controlador de inicio sesion
    ictrAC = fabrica->getIControlador2();//Contien el controlador de alta cine
    ictrmP = fabrica->getIControlador3();//Contiene controlador de puntuar Pelicula
    ictrAF = fabrica->getIControlador4();//Contiene el controlador de alta funcion
    ictrCP = fabrica->getIcontrolador5();//Contiene el controlador de comentar pelicula
    ictrVP = fabrica->getIcontrolador7();//Contiene el controlador de ver informacion de la pelicula

    int opcion;
    bool existe = true;
    bool masSala = true;
    string resAcine;
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
    int precioAF;
    //Variables de verInfoPeliculas
    list<string> listVIP;
    string VPtitulo;
    list<dtInfoPelicula> dtlistVIP;
    list<dtCine> dtlistCiV;
    list<dtFuncion> dtlistFuV;
    int VCid;

    menu();
    cin >> opcion;
    while (opcion != 8) {
        switch (opcion) {
            case 1:
                cout << "+++++++++++INCIAR SESION+++++++++++++"<<endl;
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
                cout << "+++++++++++ALTA CINE+++++++++++++"<<endl;

                try{
                    ictrIS->esAdmin(usr);

                    cout << "Ingreses calle: " << endl;
                cin >> calle;
                cout << "Ingreses numero: " << endl;
                cin >> numeroDir;
                dir = dtDireccion(calle, numeroDir);
                ictrAC->ingresarDireccion(dir);

                cout << "Ingreses capacidad de la sala: " << endl;
                cin >> capacidadSalas;
                ictrAC->ingresarCapacidad(capacidadSalas);
                while(masSala){
                    cout << "Desea ingresar otra sala y/n: " << endl;
                    cin >> resAcine;
                    if(resAcine == "y" || resAcine == "Y"){
                        cout << "Ingreses capacidad de la sala: " << endl;
                        cin >> capacidadSalas;
                        ictrAC->ingresarCapacidad(capacidadSalas);
                    }else{
                        masSala=false;
                    }
                }
                ictrAC->darAltaCine();
                } catch (invalid_argument &e){
                    cout<< e.what()<<endl;
                }
                break;
            case 3:
                cout << "+++++++++++PUNTUAR PELICULA+++++++++++++"<<endl;
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
                cout << "+++++++++++ALTA FUNCION+++++++++++++"<<endl;
                try {
                    ictrIS->esAdmin(usr);
                    listdtPe = ictrAF->listarPeliculas();
                    cout << "\n---PELICULAS---";
                    for (list<dtPelicula>::iterator it = listdtPe.begin(); it != listdtPe.end(); ++it) {

                        cout << "\n Titulo: " << (*it).getTitulo();
                        cout << "\n Poster: " << (*it).getPoster();
                        cout << "\n Sipnosis: " << (*it).getSipnosis();
                        cout << "\n Puntaje: " << (*it).getPuntaje();
                        cout << "\n";
                    }
                    cout << "\n Seleccionar la Pelicula: " << endl;
                    cin >> AFtitulo;
                    try {
                        if (ictrAF->existeTitulo(AFtitulo))
                            listCi = ictrAF->seleccionarPelicula(AFtitulo);
                        cout << "\n---CINES---";
                        for (list<dtCine>::iterator it = listCi.begin(); it != listCi.end(); ++it) {
                            cout << "\n IdCine: " << (*it).getIdCine();
                            cout << "\n Calle: " << (*it).getDireccion().getCalle();
                            cout << "\n Numero: " << (*it).getDireccion().getNumero();
                            cout << "\n";
                        }

                        cout << "\n Seleccionar el Cine: " << endl;
                        cin >> AFidCine;
                        try {
                            if (ictrAF->existeCine(AFidCine))
                                listSa = ictrAF->seleccionarCine(AFidCine);

                            cout << "\n---SALAS---";
                            for (list<dtSala>::iterator it = listSa.begin(); it != listSa.end(); ++it) {

                                cout << "\n IdSala: " << (*it).getIdSala();
                                cout << "\n Capacidad: " << (*it).getCapacidad();
                                cout << "\n";
                            }

                            cout << "\n Seleccionar la Sala: " << endl;
                            cin >> AFidSala;
                            try {
                                if (ictrAF->existeSala(AFidSala))
                                    listFu = ictrAF->seleccionarSala(AFidSala);
                                cout << "\n---FUNCIONES DE LA SALA---";
                                for (list<dtFuncion>::iterator it = listFu.begin(); it != listFu.end(); ++it) {

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
                                fechaF = dtFecha(dia, mes, anio);
                                cout << "\n Ingresar Horario de comienzo: " << endl;
                                cin >> horaCamienzoF;
                                cout << "\n Ingresar Horario de fin: " << endl;
                                cin >> horaFinF;
                                HorarioF = dtHorario(horaCamienzoF, horaFinF);
                                try {
                                    if (!ictrAF->ingresarHorario(fechaF, HorarioF)) {
                                        cout << "\n Ingresar el precio de la funcion: " << endl;
                                        cin >> precioAF;
                                        ictrAF->ingresarPrecio(precioAF);
                                        ictrAF->darAltaFuncion();
                                    }
                                }
                                catch (invalid_argument &e) {
                                    cout << e.what() << endl;
                                }

                            } catch (invalid_argument &e) {
                                cout << e.what() << endl;
                            }
                        } catch (invalid_argument &e) {
                            cout << e.what() << endl;
                        }
                    } catch (invalid_argument &e) {
                        cout << e.what() << endl;
                    }
                }catch (invalid_argument &e){
                    cout<< e.what()<<endl;
                }
                    break;
                    case 5: //comentarpelicula();
                        cout << "+++++++++++COMENTAR PELICULA+++++++++++++"<<endl;
                listpl = ictrCP->ListarTituloPeliculas();
                    for (list<string>::iterator it = listpl.begin(); it != listpl.end(); ++it) {
                        cout << "\n" << *it;
                        cout << "\n";
                    }
                    cout << "Seleccionar Pelicula: " << endl;
                    cin >> tituloPelicula;
                    // tiene = ictrmP->seleccionarPelicula(tituloPelicula);
                    break;
                    case 6: // Crear reserva

                        break;
                    case 7:
                        cout << "+++++++++++VER INFORMACION DE LA PELICULA+++++++++++++"<<endl;
                        listVIP = ictrVP->listarPeliculas();
                        for (list<string>::iterator it = listVIP.begin(); it != listVIP.end(); ++it) {
                            cout << "\n" << *it;
                            cout << "\n";
                         }
                        cout << "\n Seleccionar la Pelicula: " << endl;
                        cin >> VPtitulo;
                        dtlistVIP = ictrVP->seleccionarPeliculaV(VPtitulo);
                        cout << "\n ---Informacion de la pelicula--- " << endl;
                        for (list<dtInfoPelicula>::iterator it1 = dtlistVIP.begin(); it1 != dtlistVIP.end(); ++it1) {
                            cout << "\n Poster: " << (*it1).getPoster();
                            cout << "\n Sinopsis: " << (*it1).getSinopsis();
                            cout << "\n";
                        }

                        dtlistCiV = ictrVP->listarCine();
                        cout << "\n ---Informacion del los Cines--- " << endl;
                        for (list<dtCine>::iterator it2 = dtlistCiV.begin(); it2 != dtlistCiV.end(); ++it2) {
                            cout << "\n Id Cine: " << (*it2).getIdCine();
                            cout << "\n Calle: " << (*it2).getDireccion().getCalle();
                            cout << "\n Numero: " << (*it2).getDireccion().getNumero();
                            cout << "\n";
                        }
                        cout << "\n Seleccionar la Cine: " << endl;
                        cin >> VCid;

                        dtlistFuV = ictrVP->seleccionarCine(VCid);
                        cout << "\n ---Informacion del las Funciones--- " << endl;
                        for (list<dtFuncion>::iterator it3 = dtlistFuV.begin(); it3 != dtlistFuV.end(); ++it3) {
                            cout << "\n Dia: " << (*it3).getDia().getDia();
                            cout << "\n Mes: " << (*it3).getDia().getMes();
                            cout << "\n Anio: " << (*it3).getDia().getAnio();
                            cout << "\n Hora de comienzo: " << (*it3).getHora().getHoraCominezo();
                            cout << "\n Hora de fin: " << (*it3).getHora().getHoraFin();
                            cout << "\n";
                        }
                        break;
                    case 8:
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
