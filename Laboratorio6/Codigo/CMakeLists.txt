cmake_minimum_required(VERSION 3.14)
project(Codigo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Clases)
include_directories(Dtypes)

add_executable(Codigo
        Clases/Cine.cpp
        Clases/Cine.h
        Clases/Funcion.cpp
        Clases/Funcion.h
        Clases/Pelicula.cpp
        Clases/Pelicula.h
        Clases/Sala.cpp
        Clases/Sala.h
        Dtypes/dtDireccion.cpp
        Dtypes/dtDireccion.h
        Dtypes/dtFecha.cpp
        Dtypes/dtFecha.h
        Dtypes/dtHorario.cpp
        Dtypes/dtHorario.h
        main.cpp
        ManejadorUsuario.cpp
        ManejadorUsuario.h
        Puntaje.cpp
        Puntaje.h
        Sesion.cpp
        Sesion.h
        Usuario.cpp
        Usuario.h)
