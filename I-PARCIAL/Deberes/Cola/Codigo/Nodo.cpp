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
 * Modified: Wednesday, June 16, 2021 3:50:04 PM
 * Purpose: Implementation of the class Nodo
 ***********************************************************************/
#include "Nodo.h"

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::Nodo()
// Purpose:    Implementation of Nodo:Nodo()
// Parameters:
// _dato
// Return:     
////////////////////////////////////////////////////////////////////////

template<typename T>
Nodo<T>::Nodo(T _dato){
	this->dato=_dato;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getSiguiente()
// Purpose:    Implementation of getSiguiente:Nodo()
// Parameters:
// Return:     Nodo<T>* 
////////////////////////////////////////////////////////////////////////

template<typename T>
Nodo<T>* Nodo<T>::getSiguiente(){
	return siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setSiguiente()
// Purpose:    Implementation of setSiguiente:Nodo()
// Parameters:
// Return:     Nodo<T>* 
////////////////////////////////////////////////////////////////////////

template<typename T>
void Nodo<T>::setSiguiente(Nodo<T>* _siguiente){
	this->siguiente=_siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getDato()
// Purpose:    Implementation of getDato:Nodo()
// Parameters:
// Return:     int
////////////////////////////////////////////////////////////////////////

template<typename T>
T Nodo<T>::getDato(){
	return dato;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setDato()
// Purpose:    Implementation of setDato:Nodo()
// Parameters:
// Return:     T
////////////////////////////////////////////////////////////////////////

template<typename T>
void Nodo<T>::setDato(T _dato){
	this->dato = _dato; 
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getIndice()
// Purpose:    Implementation of getIndice:Nodo()
// Parameters:
// Return:     Nodo<T>*
////////////////////////////////////////////////////////////////////////

template<typename T>
int Nodo<T>::getIndice(){
	return indice; 
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setIndice()
// Purpose:    Implementation of setIndice:Nodo()
// Parameters:
// Return:     
////////////////////////////////////////////////////////////////////////

template<typename T>
void Nodo<T>::setIndice(int _indice){
	indice = _indice; 
}
