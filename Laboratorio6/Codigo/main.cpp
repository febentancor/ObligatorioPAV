#include <iostream>
#include "Dtypes/dtDireccion.h"
#include "Dtypes/dtFecha.h"
#include "Dtypes/dtHorario.h"
#include "dtReloj.h"
#include "Clases/Fabrica.h"
#include "Dtypes/dtPelicula.h"
#include "Dtypes/dtPeliculaCompleto.h"
#include "Dtypes/dtPuntaje.h"
#include "dtTarjetas.h"
#include "Inrterfaces/IctrInicioSesion.h"
#include "Inrterfaces/IctrAltaCine.h"
#include "Inrterfaces/IctrPuntuarPelicula.h"
#include "Inrterfaces/IctrAltaFuncion.h"
#include "Inrterfaces/IctrComentarPelicula.h"
#include "IctrReloj.h"
#include "IctrEliminarPelicula.h"
#include "IctrVerComentarioYPuntaje.h"
#include "IctrVerinfoPelicula.h"
#include "IctrCrearReserva.h"
#include "string.h"
#include "UI/ui.h"
#include <list>
#include "Sesion.h"
#include "Comentario.h"
#include <map>



using namespace std;
Fabrica* fabrica;
IctrInicioSesion* ictrIS;
IctrAltaCine* ictrAC;
IctrPuntuarPelicula* ictrmP;
IctrAltaFuncion* ictrAF;
IctrComentarPelicula* ictrCP;
IctrVerinfoPelicula* ictrVP;
IctrCrearReserva* ictrCR;
IctrVerComentarioYPuntaje* ictrVCP;
IctrEliminarPelicula* ictrEP;
IctrReloj* ictrRL;



/////main
int main() {
    fabrica = Fabrica::getInstancia();
    ictrIS = fabrica->getIControlador();//Contiene el controlador de inicio sesion
    ictrAC = fabrica->getIControlador2();//Contien el controlador de alta cine
    ictrmP = fabrica->getIControlador3();//Contiene controlador de puntuar Pelicula
    ictrAF = fabrica->getIControlador4();//Contiene el controlador de alta funcion
    ictrCP = fabrica->getIcontrolador5();//Contiene el controlador de comentar pelicula
    ictrVP = fabrica->getIcontrolador7();//Contiene el controlador de ver informacion de la pelicula
    ictrCR = fabrica->getIncontrolador8();//Continene el controlador de crear reserva
    ictrVCP = fabrica->getIncontrolador9();//Contiene el controlador de ver comentarios y puntajes de pelicula
    ictrEP = fabrica->getIcontrolador10(); //Contiene el controlador de EliminarPelicula
    ictrRL = fabrica->getIcontrolador11(); //Contiene el controlador de Modificar Reloj

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
    ictrIS->cargarReloj();



    ictrCR->cargaFinancieras();
    // Se variables para ingresar puntaje
    list<string> listpl;
    string tituloPelicula;
    bool tiene, existePelicula, tieneComentario, existeComent; //utilizadas en funcion 3. y 5.
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

    //variables de crear reserva
    list<string> listCRLP;
    list<dtInfoPelicula> dtListCRSP;
    list<dtCine> dtListCRLC;
    list<dtFuncion> dtListCRF;
    int idFuncion;
    int idCineCR;
    int cantidaddAsientos;
    int tipoPago;
    string NombreBanco;
    string CRTitulo;
    string financiera;
    int desc;

    //Variables de ver comentario y puntaje
    list<string> listCPP;
    string VCPtitulo;
    list<dtPeliculaCompleto> dtlistPC;

    //Variable modificar reloj
    dtReloj* reloj;
    int hora;
    int minutos;
    dtHora horaTotal;

    menu();
    cin >> opcion;
    while (opcion != 99) {
        switch (opcion) {
            case 1:
                cout << "+++++++++++INCIAR SESION+++++++++++++" << endl;
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
                cout << "+++++++++++ALTA CINE+++++++++++++" << endl;

                try {
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
                    while (masSala) {
                        cout << "Desea ingresar otra sala y/n: " << endl;
                        cin >> resAcine;
                        if (resAcine == "y" || resAcine == "Y") {
                            cout << "Ingreses capacidad de la sala: " << endl;
                            cin >> capacidadSalas;
                            ictrAC->ingresarCapacidad(capacidadSalas);
                        } else {
                            masSala = false;
                        }
                    }
                    ictrAC->darAltaCine();
                } catch (invalid_argument &e) {
                    cout << e.what() << endl;
                }

                break;

            case 3:
                cout << "+++++++++++PUNTUAR PELICULA+++++++++++++" << endl;
                try {
                    if(ictrIS->existeUsuario(usr)){
                        if (ictrIS->invitado()==true)
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

                    }

                } catch (invalid_argument &e) {
                    cout << e.what() << endl;
                }

                break;

            case 4:
                cout << "+++++++++++ALTA FUNCION+++++++++++++" << endl;
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
                                cout << "\n\n\n\n---FUNCIONES DE LA SALA---";

                                for (list<dtFuncion>::iterator it = listFu.begin(); it != listFu.end(); ++it) {
                                    cout << "\n idFuncion: " << (*it).getIdFuncion();
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
                } catch (invalid_argument &e) {
                    cout << e.what() << endl;
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
                existePelicula = ictrCP->existePelicula(tituloPelicula);
                if(existePelicula == true ){
                    //list<dtComentario*> coment;
                    //existeComent = ictrCP->existeComentario(tituloPelicula);
                    if(ictrCP->existeComentario(tituloPelicula)){
                        cout << "Listo Comentarios de:" << tituloPelicula << endl;
                        list<dtComentario*> dt1 = ictrCP->seleccionarPelicula(tituloPelicula);

                        for (list<dtComentario*>::iterator it1 = dt1.begin(); it1 != dt1.end(); ++it1) {
                            cout << "\n" << "ID: " << (*it1)->getComentarioId() << " " << (*it1)->getNick() << ": " << (*it1)->getComentario() ;
                            cout << "\n";
                            map<int, dtComentario*> com1 =(*it1)->getdtComentComentado();
                            if (com1.empty()){
                              //  cout << "no tiene comentarios comentados" << "\n";
                            } else{
                               // cout << "tiene comentarios comentados" << "\n";


                                ictrVCP->imprimircmtcmtdo((*it1)->getdtComentComentado(), 0);
                            }
                        }
                        cout << "1 -Comentario nuevo " << endl;
                        cout << "2 -Comentar comentario " << endl;
                        int opcionComentar;
                        cin >> opcionComentar;
                        if (opcionComentar == 1){
                            string nuevoComentario;
                            cout << "Ingrese comentario para " <<tituloPelicula<< " : ";
                            cin >> nuevoComentario;

                            Sesion* s = Sesion::getInstancia();
                            string t = s->getNickname();
                            ManejadorUsuario* mU = ManejadorUsuario::getInstancia();
                            Usuario* UsrC = mU->buscarUsuario(t);
                            map<int, Comentario*>com;


                            Comentario* C1 = new Comentario(nuevoComentario,UsrC,com);
                            ManejadorPelicula* mP1 = ManejadorPelicula::getInstancia();
                            Pelicula* p1 = mP1->buscarPelicula(tituloPelicula);
                            p1->agregarComentario(C1);

                        }
                        if (opcionComentar == 2){

                            ManejadorPelicula* mP1 = ManejadorPelicula::getInstancia();
                            Pelicula* p1 = mP1->buscarPelicula(tituloPelicula);
                            Sesion* s = Sesion::getInstancia();
                            string t = s->getNickname();
                            ManejadorUsuario* mU = ManejadorUsuario::getInstancia();
                            Usuario* UsrC = mU->buscarUsuario(t);
                            map<int, Comentario*>com2;
                            string nuevaRespuesta;
                            int idResponder;
                            cout << "Ingrese ID del comentario a responder: " << endl;
                            cin >> idResponder;

                            Comentario* c1 = ictrCP->buscarComentario(idResponder, p1->getComentariosPeliculas());
//                            cout <<"" << c1->getComentarios();
                            cout << "Ingrese comentario a responder: " << endl;
                            cin >> nuevaRespuesta;
                            Comentario* c2 = new Comentario(nuevaRespuesta, UsrC, com2);
                            c1->comentarComentario(c2);
                            cout << "" << c2->getComentarios();
                            //cout << "Ingrese comentario para " <<tituloPelicula<< " : ";
                            //cin >> nuevaRespuesta;



                        }


                    }else{
                        cout << "No tiene comentarios " << endl;
                    }
                }else{
                    cout << "No existe la pelicula o fue ingresada incorrectamente" << endl;
                }
                break;

            case 6:
                cout << "++++++++++++CREAR RESERVA++++++++++++++++++++++++++++++++" << endl;
                try {
                    if (ictrIS->invitado());
                    listCRLP = ictrCR->listarPeliculas();
                    cout << "Lista de peliculas\n";
                    for (list<string>::iterator it = listCRLP.begin(); it != listCRLP.end(); ++it) {
                        cout << "\n" << *it;
                        cout << "\n";
                    }
                    cout << "\n Seleccionar la Pelicula: " << endl;
                    cin >> CRTitulo;
                    dtListCRSP = ictrCR->seleccionarPeliculaC(CRTitulo);
                    cout << "Info Pelicula\n";
                    for (list<dtInfoPelicula>::iterator it1 = dtListCRSP.begin(); it1 != dtListCRSP.end(); ++it1) {
                        cout << "\n Poster: " << (*it1).getPoster();
                        cout << "\n Sinopsis: " << (*it1).getSinopsis();
                        cout << "\n";
                    }
                    dtListCRLC = ictrCR->listarCineC();
                    cout << "\n ---Informacion del los Cines--- " << endl;
                    for (list<dtCine>::iterator it2 = dtListCRLC.begin(); it2 != dtListCRLC.end(); ++it2) {
                        cout << "\n Id Cine: " << (*it2).getIdCine();
                        cout << "\n Calle: " << (*it2).getDireccion().getCalle();
                        cout << "\n Numero: " << (*it2).getDireccion().getNumero();
                        cout << "\n";
                    }
                    cout << "\n Seleccionar la Cine: " << endl;
                    cin >> idCineCR;
                    dtListCRF = ictrCR->seleccionarCineC(idCineCR);

                    cout << "\n ---Informacion del las Funciones--- " << endl;
                    for (list<dtFuncion>::iterator it3 = dtListCRF.begin(); it3 != dtListCRF.end(); ++it3) {
                        cout << "\n IdFuncion: " << (*it3).getIdFuncion();
                        cout << "\n Dia: " << (*it3).getDia().getDia();
                        cout << "\n Mes: " << (*it3).getDia().getMes();
                        cout << "\n Anio: " << (*it3).getDia().getAnio();
                        cout << "\n Hora de comienzo: " << (*it3).getHora().getHoraCominezo();
                        cout << "\n Hora de fin: " << (*it3).getHora().getHoraFin();
                        cout << "\n";
                    }
                    cout << "\n Seleccionar la Funcion: " << endl;
                    cin >> idFuncion;
                    ictrCR->seleccionarFuncion(idFuncion);

                    cout << "\n Ingrese Cantidad de asientos: " << endl;
                    cin >> cantidaddAsientos;
                    ictrCR->ingresarCantidadAsientos(cantidaddAsientos);
                    cout << "\n Ingresar Tipo de pago: " << endl;
                    cout << "\n 0.Debito\n 1.Credito\n " << endl;
                    cin >> tipoPago;
                    ictrCR->ingresarTipoPago(tipoPago);
                    if (tipoPago == 0) {
                        cout << "Ingrese nombre de Banco" << endl;
                        cin >> NombreBanco;
                        ictrCR->ingresarNombreDeBanco(NombreBanco);
                    } else {
                        cout << "Ingrese Financiera" << endl;
                        cin >> financiera;
                        idFuncion = ictrCR->obtDescuento(financiera);
                        ictrCR->ingresarFinanciera(idFuncion);
                    }
                    cout << "Precio total: " << ictrCR->verPrecioTotal();
                    cout << "\n";
                    cout << "Desea Confirmar la reserva (y/n)" << endl;
                    cin >> NombreBanco;
                    if (NombreBanco == "y" || NombreBanco == "Y") {
                        ictrCR->confirmar();
                    } else {
                        cout << "La reserva fue canselada" << endl;
                    }
                } catch (invalid_argument &e) {
                    cout << e.what() << endl;
                }
                break;

            case 7:
                cout << "+++++++++++VER INFORMACION DE LA PELICULA+++++++++++++" << endl;
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
                    cout << "\n idFuncion: " << (*it3).getIdFuncion();
                    cout << "\n Fecha: " << (*it3).getDia().getDia();
                    cout << "/" << (*it3).getDia().getMes();
                    cout << "/ " << (*it3).getDia().getAnio();
                    cout << "\n Hora de comienzo: " << (*it3).getHora().getHoraCominezo();
                    cout << "\n Hora de fin: " << (*it3).getHora().getHoraFin();
                    cout << "\n";
                }

                break;

            case 8:

                cout << "+++++++++++VER COMENTARIOS Y PUNTAJES DE PELICULA+++++++++++++" << endl;
                listCPP = ictrVCP->listarPeliculas();
                for (list<string>::iterator it = listCPP.begin(); it != listCPP.end(); ++it) {
                    cout << "\n" << *it;
                    cout << "\n";
                }

                cout << "\n Seleccionar la Pelicula: " << endl;
                cin >> VCPtitulo;
                dtlistPC = ictrVCP->seleccionarPeliculaV(VCPtitulo);

                cout << "\n ---Puntaje y comentarios de la pelicula--- " << endl;
                for (list<dtPeliculaCompleto>::iterator it1 = dtlistPC.begin(); it1 != dtlistPC.end(); ++it1) {
                    cout << "\n Titulo: " << (*it1).getTitulo();
                    cout << "\n Puntaje Promedio: " << (*it1).getPunaje();
                    cout << "\n";

                    //LISTO LOS PUNTAJES
                    cout << "\n Puntajes: " << endl;
                    list<dtPuntaje *> lista = (*it1).getListaPuntajes();
                    for (list<dtPuntaje *>::iterator it2 = lista.begin(); it2 != lista.end(); ++it2) {
                        cout << "\n Nickname: " << (*it2)->getNickname();
                        cout << "\n Puntaje: " << (*it2)->getPuntos();
                        cout << "\n";
                    }


                }

                break;

            case 9: //ELIMINAR PELICULA
                try {
                    if (ictrIS->esAdmin(usr));
                    string EPtitulo;
                    cout << "+++++++++++ELIMINAR PELICULA+++++++++++++" << endl;

                    listVIP = ictrEP->listarPelicula();

                    for (list<string>::iterator it = listVIP.begin(); it != listVIP.end(); ++it) {
                        cout << "\n" << *it;
                        cout << "\n";
                    }

                    cout << "\n Seleccionar la Pelicula: " << endl;
                    cin >> EPtitulo;

                    if (ictrEP->existePelicula(EPtitulo))
                        ictrEP->eliminarPelicula(EPtitulo);

                    else
                        cout << "\nLa pelicula seleccionada no existe";
                } catch (invalid_argument &e) {
                    cout << e.what() << endl;
                }
                break;
            case 10:
                cout << "+++++++++++ MODIFICAR RELOJ +++++++++++++" << endl;
                reloj = ictrRL->obtenerReloj();
                cout << "\n Fecha: " << reloj->getFecha().getDia();
                cout << "/" << reloj->getFecha().getMes();
                cout << "/" << reloj->getFecha().getAnio();
                cout << "\n";
                cout << " Hora: " << reloj->getHora().getHora();
                cout << ":" << reloj->getHora().getMinuto();
                cout << "\n";
                cout << "Desea modificar la hora (y/n)" << endl;
                cin >> NombreBanco;
                if (NombreBanco == "y" || NombreBanco == "Y") {
                    cout << "\n Ingresar Dia: " << endl;
                    cin >> dia;
                    cout << "\n Ingresar Mes: " << endl;
                    cin >> mes;
                    cout << "\n Ingresar Anio: " << endl;
                    cin >> anio;
                    fechaF = dtFecha(dia, mes, anio);
                    cout << "\n Ingresar hora: " << endl;
                    cin >> hora;
                    cout << "\n Ingresar minutos: " << endl;
                    cin >> minutos;
                    horaTotal = dtHora(hora,minutos);
                    ictrRL->ingresarReloj(fechaF,horaTotal);
                    cout << "\n La fecha fue ingresada" << endl;
                } else {
                    cout << "\n La fecha no fue modificada" << endl;
                }
                break;
            case 99: {
                system("exit");
                cout << "SALIENDO..." << endl;
                break;
            }

            default:
                cout << "OPCIÓN INCORRECTA" << endl;
                break;

        }
        //1system("sleep 5");
        menu();
        cin >> opcion;
    }

    return 0;
}
