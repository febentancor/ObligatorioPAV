main: Cine.o Comentario.o Credito.o Debit.o Fabrica.o Funcion.o Pelicula.o Puntaje.o Reloj.o Reserva.o Sala.o \
 Sesion.o Usuario.o CtrAltaCine.o CtrAltaFuncion.o CtrComentarPelicula.o CtrCargaDatos.o CtrCrearReserva.o CtrEliminarPelicula.o \
 CtrIniciarSesion.o CtrPuntuarPelicula.o CtrReloj.o CtrVerComentarioYPuntaje.o CtrVerinfoPelicula.o dtCine.o dtComentario.o \
 dtDireccion.o dtFecha.o dtFuncion.o dtHora.o dtHorario.o dtInfoPelicula.o dtPeliculaCompleto.o dtPelicula.o dtPuntaje.o \
 dtReloj.o dtSala.o dtTarjetas.o ManejadorCine.o ManejadorCrearReserva.o ManejadorFunciones.o ManejadorPelicula.o \
 ManejadorUsuario.o ui.o
	g++ -c main.cpp -o obligatorio main: Cine.o Comentario.o Credito.o Debit.o Fabrica.o Funcion.o Pelicula.o \
	 Puntaje.o Reloj.o Reserva.o Sala.o Sesion.o Usuario.o CtrAltaCine.o CtrAltaFuncion.o CtrComentarPelicula.o \
	 CtrCargaDatos.o CtrCrearReserva.o CtrEliminarPelicula.o CtrIniciarSesion.o CtrPuntuarPelicula.o CtrReloj.o \
	 CtrVerComentarioYPuntaje.o CtrVerinfoPelicula.o dtCine.o dtComentario.o dtDireccion.o dtFecha.o dtFuncion.o \
	 dtHora.o dtHorario.o dtInfoPelicula.o dtPeliculaCompleto.o dtPelicula.o dtPuntaje.o dtReloj.o dtSala.o dtTarjetas.o \
	 ManejadorCine.o ManejadorCrearReserva.o ManejadorFunciones.o ManejadorPelicula.o ManejadorUsuario.o ui.o

Cine.o:	Clases/Cine.cpp Clases/Cine.h Clases/Sala.h Dtypes/dtDireccion.h Clases/Sala.h
	g++ -c Clases/Cine.cpp -o Cine.o

Comentario.o: Clases/Comentario.cpp Clases/Usuario.h Clases/Comentario.h Dtypes/dtComentario.h
	g++ -c Clases/Comentario.cpp -o Comentario.o

Credito.o: Clases/Credito.cpp Clases/Credito.h Clases/Reserva.h
	g++ -c Clases/Credito.cpp -o Credito.o

Debit.o: Clases/Debito.cpp Clases/Debito.h Clases/Reserva.h
	g++ -c Clases/Debito.cpp -o Debito.o

Fabrica.o: Clases/Fabrica.cpp Controladores/CtrIniciarSesion.h Controladores/CtrAltaCine.h Controladores/CtrPuntuarPelicula.h \
Controladores/CtrAltaFuncion.h Controladores/CtrComentarPelicula.h Controladores/CtrVerinfoPelicula.h Controladores/CtrCrearReserva.h \
Controladores/CtrVerComentarioYPuntaje.h Controladores/CtrEliminarPelicula.h Controladores/CtrReloj.h Controladores/CtrCargarDatos.h \
Inrterfaces/IctrAltaFuncion.h Inrterfaces/IctrComentarPelicula.h Inrterfaces/IctrInicioSesion.h Inrterfaces/IctrAltaCine.h \
Inrterfaces/IctrPuntuarPelicula.h Inrterfaces/IctrVerinfoPelicula.h Inrterfaces/IctrVerComentarioYPuntaje.h Inrterfaces/IctrEliminarPelicula.h \
Inrterfaces/IctrCrearReserva.h Inrterfaces/IctrCargaDatos.h Inrterfaces/IctrReloj.h
	g++ -c Clases/Fabrica.cpp -o Fabrica.o

Funcion.o: Clases/Funcion.cpp Dtypes/dtFecha.h Clases/Funcion.h Dtypes/dtHorario.h Clases/Pelicula.h Clases/Reserva.h
	g++ -c Clases/Funcion.cpp -o Funcion.o

Pelicula.o: Clases/Pelicula.cpp Clases/Pelicula.h Clases/Sesion.h Clases/Puntaje.h Manejadores/ManejadorPelicula.h \
Dtypes/dtFecha.h Clases/Comentario.h
	g++ -c Clases/Pelicula.cpp -o Pelicula.o

Puntaje.o: Clases/Puntaje.cpp Clases/Usuario.h Clases/Puntaje.h
	g++ -c Clases/Puntaje.cpp -o Puntaje.o

Reloj.o: Clases/Reloj.cpp Clases/Reloj.h Dtypes/dtFecha.h Dtypes/dtHora.h
	g++ -c Clases/Reloj.cpp -o Reloj.o

Reserva.o: Clases/Reserva.cpp Clases/Reserva.h
	g++ -c Clases/Reserva.cpp -o Reserva.o

Sala.o: Clases/Sala.cpp Clases/Sala.h Clases/Funcion.h
	g++ -c Clases/Sala.cpp -o Sala.o

Sesion.o: Clases/Sesion.cpp Clases/Sesion.h Clases/Reloj.h
	g++ -c Clases/Sesion.cpp -o Sesion.o

Usuario.o: Clases/Usuario.cpp Clases/Usuario.h
	g++ -c Clases/Usuario.cpp -o Usuario.o

#Controladores

CtrAltaCine.o: Controladores/CtrAltaCine.cpp Controladores/CtrAltaCine.h  Dtypes/dtDireccion.h  Controladores/CtrAltaFuncion.h  \
Clases/Cine.h  Clases/Sala.h  Manejadores/ManejadorCine.h
	g++ -c Cotroladores/CtrAltaCine.cpp -o CtrAltaCine.o

CtrAltaFuncion.o: Controladores/CtrAltaFuncion.cpp Controladores/CtrPuntuarPelicula.h Controladores/CtrAltaFuncion.h \
Clases/Sesion.h Dtypes/dtPelicula.h Dtypes/dtCine.h Manejadores/ManejadorCine.h Manejadores/ManejadorFunciones.h \
Dtypes/dtFecha.h Dtypes/dtSala.h Dtypes/dtFuncion.h Inrterfaces/IctrAltaFuncion.h Clases/Cine.h
	g++ -c Cotroladores/CtrAltaFuncion.cpp -o CtrAltaFuncion.o

CtrComentarPelicula.o: Controladores/CtrComentarPelicula.cpp Controladores/CtrComentarPelicula.h Manejadores/ManejadorPelicula.h \
Clases/Pelicula.h Dtypes/dtComentario.h Dtypes/dtCine.h Inrterfaces/IctrComentarPelicula.h Clases/Comentario.h
	g++ -c Cotroladores/CtrComentarPelicula.cpp -o CtrComentarPelicula.o

CtrCargaDatos.o: Controladores/CtrCargarDatos.cpp Controladores/CtrCargarDatos.h Manejadores/ManejadorUsuario.h \
 Manejadores/ManejadorPelicula.h Dtypes/dtComentario.h Dtypes/dtDireccion.h Dtypes/dtHorario.h Manejadores/ManejadorCine.h \
 Manejadores/ManejadorFunciones.h Inrterfaces/IctrCargaDatos.h
	g++ -c Cotroladores/CtrCargaDatos.cpp -o CtrCargaDatos.o

CtrCrearReserva.o: Controladores/CtrCrearReserva.cpp Controladores/CtrCrearReserva.h Clases/Sesion.h Dtypes/dtPelicula.h Dtypes/dtCine.h \
Dtypes/dtSala.h Dtypes/dtHorario.h Dtypes/dtFecha.h Dtypes/dtFuncion.h Dtypes/dtTarjetas.h Manejadores/ManejadorFunciones.h \
Manejadores/ManejadorCine.h Manejadores/ManejadorPelicula.h Manejadores/ManejadorCrearReserva.h Clases/Debito.h Clases/Credito.h \
Dtypes/dtInfoPelicula.h Inrterfaces/IctrCrearReserva.h Clases/Pelicula.h Clases/Funcion.h
	g++ -c Cotroladores/CtrCrearReserva.cpp -o CtrCrearReserva.o

CtrEliminarPelicula.o: Controladores/CtrEliminarPelicula.cpp Manejadores/ManejadorPelicula.h Manejadores/ManejadorFunciones.h \
Manejadores/ManejadorCine.h Controladores/CtrEliminarPelicula.h Inrterfaces/IctrEliminarPelicula.h
	g++ -c Cotroladores/CtrEliminarPelicula.cpp -o CtrEliminarPelicula.o

CtrIniciarSesion.o: Controladores/CtrIniciarSesion.cpp Controladores/CtrIniciarSesion.h Manejadores/ManejadorUsuario.h \
Manejadores/ManejadorPelicula.h Manejadores/ManejadorCine.h Manejadores/ManejadorFunciones.h Dtypes/dtTarjetas.h \
Clases/Sesion.h Clases/Reloj.h Dtypes/dtFecha.h Dtypes/dtHora.h Inrterfaces/IctrInicioSesion.h
	g++ -c Cotroladores/CtrIniciarSesion.cpp -o CtrIniciarSesion.o

CtrPuntuarPelicula.o: Controladores/CtrPuntuarPelicula.cpp Controladores/CtrPuntuarPelicula.h Manejadores/ManejadorPelicula.h \
Manejadores/ManejadorUsuario.h Clases/Sesion.h Clases/Puntaje.h Inrterfaces/IctrPuntuarPelicula.h
	g++ -c Cotroladores/CtrPuntuarPelicula.cpp -o CtrPuntuarPelicula.o

CtrReloj.o: Controladores/CtrReloj.cpp Controladores/CtrReloj.h Clases/Reloj.h Dtypes/dtReloj.h Dtypes/dtFecha.h Dtypes/dtHorario.h \
Clases/Sesion.h Inrterfaces/IctrReloj.h Dtypes/dtHora.h
	g++ -c Cotroladores/CtrReloj.cpp -o CtrReloj.o

CtrVerComentarioYPuntaje.o: Controladores/CtrVerComentarioYPuntaje.cpp Controladores/CtrVerComentarioYPuntaje.h Clases/Sesion.h \
Dtypes/dtPelicula.h Dtypes/dtCine.h Dtypes/dtSala.h Dtypes/dtHorario.h Dtypes/dtFecha.h Dtypes/dtFuncion.h \
Manejadores/ManejadorFunciones.h Manejadores/ManejadorCine.h Manejadores/ManejadorPelicula.h Inrterfaces/IctrVerComentarioYPuntaje.h Clases/Pelicula.h
	g++ -c Cotroladores/CtrVerComentarioYPuntaje.cpp -o CtrVerComentarioYPuntaje.o

CtrVerinfoPelicula.o: Controladores/CtrVerinfoPelicula.cpp Controladores/CtrVerinfoPelicula.h Clases/Sesion.h Dtypes/dtPelicula.h \
Dtypes/dtCine.h Dtypes/dtSala.h Dtypes/dtHorario.h Dtypes/dtFecha.h Dtypes/dtFuncion.h Manejadores/ManejadorFunciones.h \
Manejadores/ManejadorCine.h Manejadores/ManejadorPelicula.h Inrterfaces/IctrVerinfoPelicula.h Clases/Pelicula.h
	g++ -c Cotroladores/CtrVerinfoPelicula.cpp -o CtrVerinfoPelicula.o

#dtypes
dtCine.o: Dtypes/dtCine.cpp Dtypes/dtCine.h Dtypes/dtDireccion.h
	g++ -c Dtypes/dtCine.cpp -o dtCine.o

dtComentario.o: Dtypes/dtComentario.cpp Dtypes/dtComentario.h Clases/Usuario.h
	g++ -c Dtypes/dtComentario.cpp -o dtComentario.o

dtDireccion.o: Dtypes/dtDireccion.cpp Dtypes/dtDireccion.h
	g++ -c Dtypes/dtDireccion.cpp -o dtDireccion.o

dtFecha.o: Dtypes/dtFecha.cpp Dtypes/dtFecha.h
	g++ -c Dtypes/dtFecha.cpp -o dtFecha.o

dtFuncion.o: Dtypes/dtFuncion.cpp Dtypes/dtFuncion.h Dtypes/dtHorario.h Dtypes/dtFecha.h
	g++ -c Dtypes/dtFuncion.cpp -o dtFuncion.o

dtHora.o: Dtypes/dtHora.cpp Dtypes/dtHora.h
	g++ -c Dtypes/dtHora.cpp -o dtHora.o

dtHorario.o: Dtypes/dtHorario.cpp Dtypes/dtHorario.h
	g++ -c Dtypes/dtHorario.cpp -o dtHorario.o

dtInfoPelicula.o: Dtypes/dtInfoPelicula.cpp Dtypes/dtInfoPelicula.h
	g++ -c Dtypes/dtInfoPelicula.cpp -o dtInfoPelicula.o

dtPeliculaCompleto.o: Dtypes/dtPeliculaCompleto.cpp Dtypes/dtPeliculaCompleto.h Dtypes/dtPuntaje.h
	g++ -c Dtypes/dtPeliculaCompleto.cpp -o dtPeliculaCompleto.o

dtPelicula.o: Dtypes/dtPelicula.cpp Dtypes/dtPelicula.h
	g++ -c Dtypes/dtPelicula.cpp -o dtPelicula.o

dtPuntaje.o: Dtypes/dtPuntaje.cpp Dtypes/dtPuntaje.h
	g++ -c Dtypes/dtPuntaje.cpp -o dtPuntaje.o

dtReloj.o: Dtypes/dtReloj.cpp Dtypes/dtReloj.h Clases/Reloj.h Dtypes/dtFecha.h Dtypes/dtHora.h
	g++ -c Dtypes/dtReloj.cpp -o dtReloj.o

dtSala.o: Dtypes/dtSala.cpp Dtypes/dtSala.h Dtypes/dtFuncion.h
	g++ -c Dtypes/dtSala.cpp -o dtSala.o

dtTarjetas.o: Dtypes/dtTarjetas.cpp Dtypes/dtTarjetas.h
	g++ -c Dtypes/dtTarjetas.cpp -o dtTarjetas.o

#Manejadores
ManejadorCine.o: Clases/ManejadorCine.cpp Manejadores/ManejadorCine.h Clases/Cine.h
	g++ -c Manejador/ManejadorCine.cpp -o ManejadorCine.o

ManejadorCrearReserva.o: Clases/ManejadorCrearReserva.cpp Manejadores/ManejadorCrearReserva.h Clases/Reserva.h
	g++ -c Manejador/ManejadorCrearReserva.cpp -o ManejadorCrearReserva.o

ManejadorFunciones.o: Clases/ManejadorFunciones.cpp Manejadores/ManejadorFunciones.h Clases/Funcion.h
	g++ -c Manejador/ManejadorFunciones.cpp -o ManejadorFunciones.o

ManejadorPelicula.o: Clases/ManejadorPelicula.cpp Manejadores/ManejadorPelicula.h Clases/Pelicula.h
	g++ -c Manejador/ManejadorPelicula.cpp -o ManejadorPelicula.o

ManejadorUsuario.o: Clases/ManejadorUsuario.cpp Clases/Usuario.h Manejadores/ManejadorUsuario.h
	g++ -c Manejador/ManejadorUsuario.cpp -o ManejadorUsuario.o

ui.o: Clases/ui.cpp UI/ui.h
	g++ -c UI/ui.cpp -o ui.o
