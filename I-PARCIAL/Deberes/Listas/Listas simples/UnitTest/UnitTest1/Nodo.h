#pragma once
/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Nodo.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: martes, 8 de junio de 2021 14:50:42
 * Purpose: Declaration of the prototypes of the fuction Nodo.h
 ***********************************************************************/
#include<iostream>

using namespace std; 

class Nodo
{
public:
    Nodo();
    Nodo(int, Nodo*);
    int getDato(void);
    Nodo* getLista();
    void setDato(int);
    Nodo getSiguiente(void);
    void setSiguiente(Nodo*);
    void insertarInicio(int);
    void insertarFinal(int);
    bool vacio(void);
    void imprimir();
protected:

private:
    int dato;
    Nodo* siguiente;
};
/**
 * @brief Getter de Dato
 * @return Nodo
 */

int Nodo::getDato(void)
{
    return dato;
}

/**
 * @brief Getter de Nodo
 * @return siguiente
 */

Nodo* Nodo::getLista()
{
    return siguiente;
}

/**
 * @brief Setter de dato
 * @parameter
 * _dato
 * @return void
 */

void Nodo::setDato(int dato)
{
    this->dato = dato;
}

/**
 * @brief Getter de siguiente
 * @parameter
 * @return *siguiente
 */

Nodo Nodo::getSiguiente(void)
{
    return *siguiente;
}

/**
 * @brief Setter de Siguiente
 * @parameter
 * _siguiente
 * @return void
 */

void Nodo::setSiguiente(Nodo* siguiente)
{
    this->siguiente = siguiente;
}

/**
 * @brief Constructor de Nodo
 * @parameter
 */

Nodo::Nodo()
{
    this->dato = 0;
    this->siguiente = NULL;
}

/**
 * @brief Constructor de Nodo
 * @parameter
 * _dato
 * _*siguiente
 * @return Nodo
 */

Nodo::Nodo(int dato, Nodo* siguiente)
{
    this->dato = dato;
    this->siguiente = siguiente;
}

/**
 * @brief Definition of  Nodo::vacio
 * @parameter
 * @return bool
 */

bool Nodo::vacio(void) {
    if (siguiente == NULL) {
        return true;
    }
    else {
        return false;
    }
}

/**
 * @brief Definition of  Nodo::insertarInicio
 * @parameter
 * _dato
 */

void Nodo::insertarInicio(int dato) {
    if (vacio()) {
        siguiente = new Nodo(dato, NULL);
    }
    else {
        Nodo* aux = new Nodo();
        aux->setDato(dato);
        aux->setSiguiente(siguiente);
        siguiente = aux;
    }
}

/**
 * @brief Definition of  Nodo::insertarFinal
 * @parameter
 * _dato
 */

void Nodo::insertarFinal(int dato) {
    if (vacio()) {
        siguiente = new Nodo(dato, NULL);
    }
    else {
        Nodo* aux = new Nodo();
        aux = siguiente;
        Nodo* aux1 = new Nodo();
        while (aux != NULL) {
            aux1 = aux;
            aux = aux->siguiente;
        }
        Nodo* aux2 = new Nodo(dato, NULL);
        aux1->setSiguiente(aux2);
    }
}

/**
 * @brief Definition of  Nodo::imprimir
 * @parameter
 */

void Nodo::imprimir() {
    Nodo* actual = new Nodo();
    actual = siguiente;
    while (actual != NULL) {
        printf("%d ", actual->dato);
        actual = actual->siguiente;
    }
}
