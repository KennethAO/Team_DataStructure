#pragma once
#include <iostream>
using namespace std;
#include "NodoDoble.h"
#include "../Persona.h"
#include <sstream>
// #include "../OperacionesAmortizacion.h"
template <typename T>
class ListaDoble{
    
    private:
        int dimension = 0;
        NodoDoble<T> *cabeza = nullptr;
        NodoDoble<T> *obtenerUltimoNodo();
        NodoDoble<T> *obtenerNodo(int indice);
    public:
        ListaDoble() = default;
        void insertar(T dato);
        void insertarInicio(T dato);
        void insertEntre(T dato,int indice);
        void eliminarNodo(int indice);
        void imprimirLista();
        string datosLista(string);
        bool verificarVacia();
        NodoDoble<T>* obtenerDato(int indice);
        int obtenerDimension();
};




template <typename T>
void ListaDoble<T>::insertarInicio(T dato){

    NodoDoble<T> *newNode = new NodoDoble<T>(dato);
    if(cabeza == nullptr){
        this->cabeza = newNode;
    }else{
        cabeza->setAnterior(newNode);
        newNode->setSiguiente(cabeza);
        cabeza = newNode;
    }
    dimension++;
    
}

template <typename T>
void ListaDoble<T>::insertar(T dato){
    
    NodoDoble<T> *newNode = new NodoDoble<T>(dato);

    if(cabeza == nullptr){
        this->cabeza = newNode;
    }else{
        NodoDoble<T> *ultimo = obtenerUltimoNodo();
        ultimo->setSiguiente(newNode);
        newNode->setAnterior(ultimo);
    }

    dimension++;

}

template <typename T>
void ListaDoble<T>::insertEntre(T dato,int indice){

    if(indice < 0 || indice > dimension){
        cout<<"Indice fuera de rango"<<endl;
    }

    if(indice == 0 || dimension == 0){
        return insertar(dato);
    }else if(indice == dimension){
        return insertarInicio(dato);
    }

    NodoDoble<T> *now = obtenerNodo(indice);
    NodoDoble<T> *anterior = now->getAnterior();
    NodoDoble<T> *siguiente = now->getSiguiente();

    NodoDoble<T> *node = new NodoDoble<T>(dato);

    anterior->setSiguiente(node);
    node->setSiguiente(now);
    node->setAnterior(anterior);
    now->setAnterior(node);
    dimension++;
    
}

template <typename T>
void ListaDoble<T>::eliminarNodo(int indice){

    if(indice < 0 || indice > dimension){
        cout<<"Indice fuera de rango"<<endl;
    }

    if (indice == 0) {
        NodoDoble<T> *temp = cabeza;
        cabeza = cabeza->getSiguiente();
        cabeza->setAnterior(nullptr);
        delete temp;
    } else if (indice == dimension - 1) {
        NodoDoble<T> *node = obtenerUltimoNodo();
        NodoDoble<T> *anterior = node->getAnterior();
        
        anterior->setSiguiente(nullptr);
        delete node;
    } else {
        NodoDoble<T> *now = obtenerNodo(indice);
        NodoDoble<T> *anterior = now->getAnterior();
        NodoDoble<T> *siguiente = now->getSiguiente();
        
        anterior->setSiguiente(siguiente);
        siguiente->setAnterior(anterior);
        delete now;
    }

    dimension--;
}

template <typename T>
string ListaDoble<T>::datosLista(string name){
   stringstream s;
   NodoDoble<T> *aux = cabeza;
   if(name=="Persona"){
       while (aux != nullptr){
            Persona per= aux->getDato();
            s<<per.formatoTxt()<<endl; 
            aux = aux->getSiguiente();
       }
   }
    return s.str();
}

template <typename T>
void ListaDoble<T>::imprimirLista(){
    NodoDoble<T> *aux = cabeza;
    while (aux != nullptr){
        cout<<aux->getDato()<<"--->";
        aux = aux->getSiguiente();
    }
}

template<typename T>
bool ListaDoble<T>::verificarVacia(){
    NodoDoble<T> *aux = cabeza;
    if(aux!=nullptr){
        return true; 
    }else{
        return false; 
    }
}



template <typename T>
NodoDoble<T>* ListaDoble<T>::obtenerUltimoNodo(){

    NodoDoble<T> *aux = cabeza;
    while (aux->getSiguiente() != nullptr){
        aux = aux->getSiguiente();
    }
    return aux;
    
}

template <typename T>
NodoDoble<T> *ListaDoble<T>::obtenerNodo(int indice) {
    if (indice < 0 || indice >= dimension) {
        cout<<"Indice fuera de rango"<<endl;
    }

    if (indice == 0) {
        return cabeza;
    }

    int indiceAhora = 0;
    NodoDoble<T> *ultimo = cabeza;

    while (ultimo->getSiguiente() != nullptr) {
        if (indiceAhora == indice) {
            break;
        }

        indiceAhora++;
        ultimo = ultimo->getSiguiente();
    }
    return ultimo;
}

   

template <typename T>
NodoDoble<T>* ListaDoble<T>::obtenerDato(int indice){
    NodoDoble<T> *nodo = obtenerNodo(indice);
    return nodo;
}

template <typename T>
int ListaDoble<T>::obtenerDimension(){
    NodoDoble<T> *temp=cabeza;
    int cont=0;
    while (temp!=nullptr){
       temp = temp->getSiguiente();
       cont++;
    }
    return cont;
}