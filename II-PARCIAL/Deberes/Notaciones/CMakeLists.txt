cmake_minimum_required(VERSION 3.0.0)
project(Pilas VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Pilas main.cpp Nodo.h Pila.h
                                Menu.h Menu.cpp
                                Notaciones.h Notaciones.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
