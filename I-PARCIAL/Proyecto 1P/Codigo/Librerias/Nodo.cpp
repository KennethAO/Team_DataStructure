#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Nodo.h"

using namespace std;

template<typename T>
Nodo<T>::Nodo() {
	this->siguiente= NULL;
}

template<typename T>
Nodo<T>::Nodo(T _valor,Nodo* _siguiente) {
	this->valor = _valor;
	this->siguiente = _siguiente;
}

template<typename T>
void Nodo<T>::setValor(T _valor) {
	valor = _valor;
}

template<typename T>
void Nodo<T>::setSiguiente(Nodo* _siguiente) {
	siguiente= _siguiente;
}

template<typename T>
T Nodo<T>::getValor() {
	return valor;
}

template<typename T>
Nodo<T>* Nodo<T>::getSiguiente() {
	return siguiente;
}

template<typename T>
Nodo<T>::~Nodo() 
{
	
}





