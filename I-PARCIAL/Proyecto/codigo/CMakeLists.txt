cmake_minimum_required(VERSION 3.0.0)
project(ProyectoP1 VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories(Libreria)

add_executable(ProyectoP1 main.cpp
                            OperacionesPersona.h OperacionesPersona.cpp
                            Persona.h Persona.cpp
                            Date.h Date.cpp
                            DateOperations.h DateOperations.cpp
                            Validar.h Validar.cpp
                            Validation.cpp
                            Movimientos.h Movimientos.cpp
                            OperacionesAmortizacion.h OperacionesAmortizacion.cpp  
                            Archivo.h
                            Libreria/Menu.h Libreria/Menu.cpp
                            Libreria/ListaDoble.h
                            )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
