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
 * Modified: Wednesday, June 9, 2021 3:10:25 PM
 * Purpose: Implementation of the class Nodo
 ***********************************************************************/

#include "Nodo.h"

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::Nodo(int _dato, Nodo _siguiente)
// Purpose:    Implementation of Nodo::Nodo()
// Parameters:
// - _dato
// - _siguiente
// Return:     
////////////////////////////////////////////////////////////////////////

Nodo::Nodo(Persona _person, Nodo * _siguiente = NULL)
{
   this->person = _person;
   this->siguiente = _siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getDato()
// Purpose:    Implementation of Nodo::getDato()
// Return:     int
////////////////////////////////////////////////////////////////////////

Persona Nodo::getPersona()
{
   return person;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setDato(int newDato)
// Purpose:    Implementation of Nodo::setDato()
// Parameters:
// - newDato
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setDato(Persona newPersona)
{
   person = newPersona;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getSiguiente()
// Purpose:    Implementation of Nodo::getSiguiente()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

Nodo* Nodo::getSiguiente(void)
{
   return siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setSiguiente(Nodo newSiguiente)
// Purpose:    Implementation of Nodo::setSiguiente()
// Parameters:
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setSiguiente(Nodo *newSiguiente)
{
   siguiente = newSiguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::~Nodo()
// Purpose:    Implementation of Nodo::~Nodo()
// Return:     
////////////////////////////////////////////////////////////////////////

Nodo::~Nodo()
{
   // TODO : implement
}
