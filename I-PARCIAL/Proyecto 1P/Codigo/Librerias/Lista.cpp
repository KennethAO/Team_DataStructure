#include "Lista.h"
#include <iostream>

using namespace std; 

template<typename T>
Lista<T>::Lista() {
	this->primero = NULL;
	this->actual = NULL;
}

template<typename T>
bool Lista<T>::vacio(){
	return (this->primero == NULL) ? true : false;
}

template<typename T>
void Lista<T>::ingresarCabeza(T datoIng)
{
    if (this->vacio()) {
        this->primero = new Nodo<T>(datoIng, NULL);
    }
    else {
        Nodo<T>* aux = new Nodo<T>(datoIng, primero);
        this->primero = aux;
    }
}


template<typename T>
void Lista<T>::imprimir(void){
	Nodo<T> *temp = this->primero;
	while(temp!=NULL){ 
		cout<<temp->getValor()<<" ->";
		temp = temp->getSiguiente();
	}
	cout<<" NULL";
}


template<typename T>
void Lista<T>::ingresarCola(T newData)
{
	Nodo<T>* nuevo = new Nodo<T>(newData,NULL);
	if(primero==NULL){
		this->primero = nuevo;
	}
	else{
		this->actual->setSiguiente(nuevo);
	}
	this->actual=nuevo;
}

template<typename T>
void Lista<T>::eliminar(T valor){
   Nodo<T> *aux_borrar;
   Nodo<T> *anterior=NULL;
   aux_borrar=this->primero;
   while((aux_borrar!=NULL)&&(aux_borrar->getValor()!= valor)){
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


template<typename T>
Nodo<T>* Lista<T>::getPrimero(void){
	return primero;
}

template<typename T>
void Lista<T>::setPrimero(Nodo<T> *_primero){
	primero=_primero;
}

template<typename T>
Nodo<T>* Lista<T>::getActual(void){
	return actual;
}

template<typename T>
void Lista<T>::setActual(Nodo<T> *_actual){
	actual=_actual;
}




