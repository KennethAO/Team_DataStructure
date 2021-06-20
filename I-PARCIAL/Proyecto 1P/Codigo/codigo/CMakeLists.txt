cmake_minimum_required(VERSION 3.0.0)
project(ProyectoP1 VERSION 0.1.0)

include(CTest)
enable_testing()


add_executable(ProyectoP1 main.cpp
                            OperacionesPersona.h OperacionesPersona.cpp
                            Persona.h Persona.cpp
                            Validar.h Validar.cpp
                            Date.h Date.cpp
                            DateOperations.h DateOperations.cpp
                            Validation.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
