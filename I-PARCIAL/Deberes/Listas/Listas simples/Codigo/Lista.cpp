/***********************************************************************
 * Module:  Lista.cpp
 * Author:  Rafa
 * Modified: Wednesday, June 9, 2021 3:08:43 PM
 * Purpose: Implementation of the class Lista
 ***********************************************************************/
 
#include <iostream>
#include "Lista.h"

////////////////////////////////////////////////////////////////////////
// Name:       Lista::Lista()
// Purpose:    Implementation of Lista::Lista()
// Return:     
////////////////////////////////////////////////////////////////////////

Lista::Lista()
{
   this->primero = NULL;
   this->actual = NULL;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::vaciar()
// Purpose:    Implementation of Lista::vaciar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::vaciar(void){
	
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::insertarInicio()
// Purpose:    Implementation of Lista::insertarInicio()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::insertarInicio(Persona newPersona)
{
	Nodo *nuevo = new Nodo(newPersona,NULL);
	if(primero == NULL){
		this->primero = nuevo;
	}else{
		this->actual->setSiguiente(nuevo);
	}
	this->actual = nuevo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::insertarFinal()
// Purpose:    Implementation of Lista::insertarFinal()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::insertarFinal(Persona newPersona){
	Nodo *nuevo=new Nodo(newPersona,NULL);
	if(primero == NULL){
		this->primero=nuevo;	
	}else{
		Nodo *puntero = this->primero;
		while(puntero->getSiguiente()){
			puntero=puntero->getSiguiente();	
		}
		puntero->setSiguiente(nuevo);
	}
	
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::eliminar()
// Purpose:    Implementation of Lista::eliminar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::eliminar(int valor){
   Nodo *aux_borrar;
	Nodo *anterior=NULL;
	aux_borrar=this->primero;
	while((aux_borrar!=NULL)&&(aux_borrar->getPersona().getEdad()!= valor)){
		anterior=aux_borrar;
		aux_borrar=aux_borrar->getSiguiente();
	}
	if(aux_borrar==NULL){
		cout<<"Elemento no existe"<<endl;
	}
	else if(anterior==NULL){
		this->primero=this->primero->getSiguiente();
		delete aux_borrar;
	}else{
		anterior->setSiguiente(aux_borrar->getSiguiente());
		delete aux_borrar;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::imprimir()
// Purpose:    Implementation of Lista::imprimir()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::imprimir(void){
	Nodo *temp = this->primero;
	cout<<"\n\n\t\tDatos clientes";
	while(temp!=NULL){
		cout<<"\n\n";
		temp->getPersona().mostrarDatos();
		cout<<"\n";
		temp = temp->getSiguiente();
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::getPrimero()
// Purpose:    Implementation of Lista::getPrimero()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

Nodo* Lista::getPrimero(void)
{
   return primero;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::setPrimero(Nodo newPrimero)
// Purpose:    Implementation of Lista::setPrimero()
// Parameters:
// - newPrimero
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::setPrimero(Nodo *newPrimero)
{
   primero = newPrimero;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::getActual()
// Purpose:    Implementation of Lista::getActual()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

Nodo* Lista::getActual(void)
{
   return actual;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::setActual(Nodo newActual)
// Purpose:    Implementation of Lista::setActual()
// Parameters:
// - newActual
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::setActual(Nodo *newActual)
{
   actual = newActual;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::~Lista()
// Purpose:    Implementation of Lista::~Lista()
// Return:     
////////////////////////////////////////////////////////////////////////

Lista::~Lista()
{
   // TODO : implement
}
