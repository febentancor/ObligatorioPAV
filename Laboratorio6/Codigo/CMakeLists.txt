cmake_minimum_required(VERSION 3.14)
project(Codigo)

set(CMAKE_CXX_STANDARD 14)

include_directories(Clases)
include_directories(Controladores)
include_directories(Dtypes)
include_directories(Inrterfaces)
include_directories(Manejadores)
include_directories(UI)

add_executable(Codigo
        Clases/Cine.cpp
        Clases/Cine.h
        Clases/Comentario.cpp
        Clases/Comentario.h
        Clases/Fabrica.cpp
        Clases/Fabrica.h
        Clases/Funcion.cpp
        Clases/Funcion.h
        Clases/Pelicula.cpp
        Clases/Pelicula.h
        Clases/Puntaje.cpp
        Clases/Puntaje.h
        Clases/Sala.cpp
        Clases/Sala.h
        Dtypes/dtDireccion.cpp
        Dtypes/dtDireccion.h
        Dtypes/dtFecha.cpp
        Dtypes/dtFecha.h
        Dtypes/dtFuncion.cpp
        Dtypes/dtFuncion.h
        Dtypes/dtHorario.cpp
        Dtypes/dtHorario.h
        Clases/Fabrica.cpp
        Clases/Fabrica.h
        main.cpp
        Manejadores/ManejadorUsuario.cpp
        Manejadores/ManejadorUsuario.h
        Clases/Puntaje.cpp
        Clases/Puntaje.h
        Clases/Sesion.cpp
        Clases/Sesion.h
        Clases/Usuario.cpp
        Clases/Usuario.h
        Controladores/CtrAltaCine.h
        Controladores/CtrAltaCine.cpp
        Controladores/CtrIniciarSesion.h
        Controladores/CtrIniciarSesion.cpp
        Manejadores/ManejadorUsuario.cpp
        Manejadores/ManejadorUsuario.h
        Manejadores/ManejadorCine.cpp
        Manejadores/ManejadorCine.h
        Manejadores/ManejadorPelicula.cpp
        Manejadores/ManejadorPelicula.h UI/ui.cpp UI/ui.h Controladores/CtrPuntuarPelicula.cpp Controladores/CtrPuntuarPelicula.h Inrterfaces/IctrPuntuarPelicula.h)
