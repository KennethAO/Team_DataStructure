/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Cola.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Wednesday, June 16, 2021 3:50:04 PM
 * Purpose: Implementation of the class Cola
 ***********************************************************************/
 
#include "Cola.h"
#include <iostream>

using namespace std; 

////////////////////////////////////////////////////////////////////////
// Name:       Cola::insertar()
// Purpose:    Implementation of Cola::insertar()
// Parameters:
// valor
// Return:     
////////////////////////////////////////////////////////////////////////

template<typename T>
void Cola<T>::insertar(T valor){
	Nodo<T> *temp = new Nodo<T>(valor);
	temp->setSiguiente(nullptr);

	if(cabeza==nullptr){
		cabeza = temp; 
		temp->getSiguiente();
	}
	else{
		cola->setSiguiente(temp);
	}
	cola=temp;
	insertarIndice();
}

////////////////////////////////////////////////////////////////////////
// Name:       Cola::imprimir1()
// Purpose:    Implementation of Cola::imprimir1()
// Parameters:
// temp
// Return:     	Nodo<T>*
////////////////////////////////////////////////////////////////////////

template<typename T>
Nodo<T>* Cola<T>::imprimir1(Nodo<T>* temp){
	if(temp!=nullptr){
		cout<<endl;
		cout<<"Indice: "<<temp->getIndice()<<" Valor:"<<temp->getDato();
		return imprimir1(temp->getSiguiente());
	}
	else{
		return nullptr;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Cola::imprimir()
// Purpose:    Implementation of Cola::imprimir()
// Parameters:
// Return:     	
////////////////////////////////////////////////////////////////////////

template<typename T>
void Cola<T>::imprimir(){
	Nodo<T> *temp =cabeza;
	imprimir1(temp);
}

////////////////////////////////////////////////////////////////////////
// Name:       Cola::insertarIndice()
// Purpose:    Implementation of Cola::insertarIndice()
// Parameters:
// Return:     	
////////////////////////////////////////////////////////////////////////

template<typename T>
void Cola<T>::insertarIndice(){
	Nodo<T> *temp=cabeza;
	int i=0;
	while(temp!=nullptr){
		temp->setIndice(i);
		temp=temp->getSiguiente();
		i++;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Cola::eliminar()
// Purpose:    Implementation of Cola::eliminar()
// Parameters:
// Return:     	
////////////////////////////////////////////////////////////////////////

template<typename T>
void Cola<T>::eliminar(int _indice){
   Nodo<T> *aux_borrar;
   Nodo<T> *anterior=NULL;
   aux_borrar=this->cabeza;
   
   while((aux_borrar!=NULL)&&(aux_borrar->getIndice()!= _indice)){
		anterior=aux_borrar;
		aux_borrar=aux_borrar->getSiguiente();
	}
	if(aux_borrar==NULL){
		cout<<"Elemento no existe"<<endl;
	}
	else if(anterior==NULL){
		this->cabeza=this->cabeza->getSiguiente();
		delete aux_borrar;
	}else{
		anterior->setSiguiente(aux_borrar->getSiguiente());
		delete aux_borrar;
	}
}


