#include <iostream>
#include "Nodo.h"
#include <functional>


using namespace std;
template<typename T>

class ListaSimple{
	protected:
	private:
    	Nodo<T>* enlace;
        int tamanio = 0;
	public:
	    ListaSimple();
		void insertar(T dato);
		void insertarInicio(T dato);
        void eliminar(int indice);
        void recorrer(function<void(T valor)> callback);
        void recorrerNodos(function<void(Nodo<T> *nodo)> callback);
        Nodo<T>* buscar(int valor);
		bool estaVacio();
		void imprimirLista();
        
};


template<typename T>
ListaSimple<T>::ListaSimple() {
	this->enlace = NULL;
}

template<typename T>
bool ListaSimple<T>::estaVacio(){
	return (this->enlace == nullptr);
}

template<typename T>
void ListaSimple<T>::insertar(T dato){
	if (estaVacio()) {
        this->enlace = new Nodo<T>(dato, nullptr);
    }
    else {
        Nodo<T>* aux = new Nodo<T>();
        Nodo<T>* aux1 = new Nodo<T>();
        Nodo<T>* aux2 = new Nodo<T>(dato, nullptr);

        aux = this->enlace;

        while (aux != nullptr)
        {
            aux1 = aux;
            aux = aux->getSiguiente();
        }

        aux1->setSiguiente(aux2);
    }
    tamanio++;
}
template<typename T>
void ListaSimple<T>::insertarInicio(T dato){
	
	if (estaVacio()) {
        this->enlace = new Nodo<T>(dato, nullptr);
    }
    else {
        Nodo<T>* aux = new Nodo<T>(dato, enlace);
        this->enlace = aux;
    }
    tamanio++;
}

template<typename T>
void ListaSimple<T>::imprimirLista(void){
	Nodo<T>* aux = new Nodo<T>();
    aux = this->enlace;
    while (aux != nullptr) {
    	cout<<"\n"<<aux->getDato();
        aux = aux->getSiguiente();
    }
}

template<typename T>
void ListaSimple<T>::recorrer(function<void(T valor)> callback)
{
    Nodo<T>* temporal = enlace;

    while (temporal != nullptr) {
        callback(temporal->getDato());
        temporal = temporal->getSiguiente();
    }
}

template<typename T>
void ListaSimple<T>::recorrerNodos(function<void(Nodo<T> *nodo)> callback)
{
    Nodo<T>* temporal = enlace;

    while (temporal != nullptr) {
        callback(temporal);
        temporal = temporal->getSiguiente();
    }
}
template<typename T>
void ListaSimple<T>::eliminar(int indice)
{
    if (indice < 0 || indice >= tamanio) {
        cout << "Error: indice no encontrado en la lista";
        return;
    }

    // si la lista tiene 1 solo elemento, se elimina
    // ese unico nodo, es decir la cabeza
    if (tamanio == 1) {
        delete enlace;
        enlace = nullptr;
    }
    
    // si indice es la cabeza
    else if (indice == 0) {
        Nodo<T>* temporal = enlace;
        enlace = enlace->getSiguiente();
        delete temporal;
    }

    // si el indice es la cola o el ultimo elemento
    else if (indice == tamanio - 1) {
        Nodo<T>* temporal = enlace;
        Nodo<T>* penultimo;
        int i = 0;

        while (temporal->getSiguiente() != nullptr) {
            if (i == tamanio - 2) {
                penultimo = temporal;
            }

            temporal = temporal->getSiguiente();
            i++;
        };

         delete temporal;
         penultimo->setSiguiente(nullptr);
    }

    // si el nodo esta entre la cola y la cabeza
    else {
        Nodo<T>* actual;
        Nodo<T>* anterior;
        Nodo<T>* siguiente;
        Nodo<T>* temporal = enlace;
        int i = 0;

        while (temporal != nullptr) {
            if (i == indice) {
                actual = temporal;
            } else if (i == indice - 1) {
                anterior = temporal;
            }

            temporal = temporal->getSiguiente();
            i++;
        }

        siguiente = actual->getSiguiente();
        anterior->setSiguiente(siguiente);
        delete actual;
    }

    tamanio--;
}
template<typename T>
Nodo<T>* ListaSimple<T>::buscar(int valor)
{
    Nodo<T>* temporal = enlace;

    while (temporal != nullptr) {
        if (valor == temporal->getDato()) {
            cout<<"\n numero: "<<temporal->getDato();
            return temporal;
        }

        temporal = temporal->getSiguiente();
    }

    return nullptr;
}

