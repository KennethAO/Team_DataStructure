#include "Nodo.h"
#include <iostream>
#include <functional>
#include <sstream>

using namespace std;

template <typename T>
class Cola{
    private:
        int tamanio = 0;
        Nodo<T> *primero = nullptr;
        Nodo<T> *ultimo = nullptr; 
    public:
        Cola() = default;
        void insertar(T dato);
        void eliminar();
        bool estaVacia();
        T obtenerPrimerDato();
        string mostrarElementos();
        void recorrerCola(function<void(Nodo<T> *dato)> obtenerDatos);  
        int obtenerTamanio();
};

template <typename T>
void Cola<T>::insertar(T dato){
    Nodo<T> *nuevo = new Nodo<T>(dato);
    if(estaVacia()){
        primero = nuevo;
    }else{
        ultimo->setSiguiente(nuevo);
    }
    ultimo = nuevo;
    tamanio++;
}
        
template <typename T>
void Cola<T>::eliminar(){
    Nodo<T> *aux;
    aux = primero;
    if(primero == ultimo){
        primero = nullptr;
        ultimo = nullptr;
    }else{
        primero = primero->getSiguiente();
    }
    tamanio--;
}
        
template <typename T>
bool Cola<T>::estaVacia(){
    return primero == nullptr;
}
        
template <typename T>
T Cola<T>::obtenerPrimerDato(){

    return primero->getDato();

}

template <typename T>
string Cola<T>::mostrarElementos(){
    Nodo<T> *aux;
    aux = primero;
    stringstream s; 
    while (aux != nullptr){
        s<<aux->getDato().mostrarDatos()<<endl;
        aux = aux->getSiguiente();
    }
    return s.str(); 
}

template<typename T>
void Cola<T>::recorrerCola(function<void(Nodo<T> *dato)> obtenerDatos){
    Nodo<T> *aux;
    aux = primero;
    while (aux != nullptr){
        obtenerDatos(aux);
        aux = aux->getSiguiente();
    }
}

template<typename T>
int Cola<T>::obtenerTamanio(){
    return tamanio;
}