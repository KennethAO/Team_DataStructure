
#include <iostream>
#include <fstream>
#include "Nodo.h"

using namespace std;

class AVL{
    private:
        ofstream archivo;
    public:
        Nodo *raiz = nullptr; 
        AVL() = default;
        bool estaVacio();
        int obtenerAltura(Nodo *nodo);
        int obtenerFactorEquilibrio(Nodo *nodo);
        Nodo *rotarDerecha(Nodo *nodo);
        Nodo *rotarIzquierda(Nodo *nodo);
        Nodo *insertar(Nodo *nodo, Nodo *nuevo);
        Nodo *valorMinimoNodo(Nodo *nodo);
        Nodo *eliminarNodo(Nodo * nodo, int valor);
        void mostrarArbol(Nodo *nodo,int espacio);
        
        Nodo* Busquedaiterativa(int dato);
        Nodo* BusquedaRecursiva(Nodo *nodo,int dato);

        void generarGrafico();

        void graficarArbol(Nodo *nodo);

        

        
};


bool AVL::estaVacio(){
    return raiz == nullptr;
}


int AVL::obtenerAltura(Nodo *nodo){
    if (nodo == nullptr){
        return -1;
    }else{
        int alturaI = obtenerAltura(nodo->getIzquierda());
        int alturaD = obtenerAltura(nodo->getDerecha());

        if (alturaI > alturaD){
            return alturaI +1;
        }else{
            return alturaD +1;
        }
        
    }
    
}


int AVL::obtenerFactorEquilibrio(Nodo *nodo){
    if (nodo == nullptr){
        return -1;
    }else{
        return  obtenerAltura(nodo->getIzquierda())- obtenerAltura(nodo->getDerecha());
    }
    
}


Nodo* AVL::rotarDerecha(Nodo *nodo){
    Nodo *aux = nodo->getIzquierda();
    Nodo *aux2 = aux->getDerecha();

    aux->setDerecha(nodo);
    nodo->setIzquierda(aux2);

    return aux;
}


Nodo *AVL::rotarIzquierda(Nodo *nodo){
    
    Nodo *aux = nodo->getDerecha();
    Nodo *aux2 = aux->getIzquierda();

    aux->setIzquierda(nodo);
    nodo->setDerecha(aux2);

    return aux;
}


Nodo *AVL::insertar(Nodo *nodo, Nodo *nuevo){

    if (nodo == nullptr){
        nodo = nuevo;
        cout<<"Valor insertado"<<endl;
        return nodo;
    }

    if (nuevo->getDato() < nodo->getDato()){
        nodo->setIzquierda(insertar(nodo->getIzquierda(), nuevo));
    }else if(nuevo->getDato() > nodo->getDato()){
        nodo->setDerecha(insertar(nodo->getDerecha(), nuevo));
    }else{
        cout<<"No se permiten valores repetidos"<<endl;
        system("pause");
        return nodo;
    }

    int balance = obtenerFactorEquilibrio(nodo);

    if (balance > 1 && nuevo->getDato() < nodo->getIzquierda()->getDato()){
        return rotarDerecha(nodo);
    }

    if (balance < -1 && nuevo->getDato() > nodo->getDerecha()->getDato()){
        return rotarIzquierda(nodo);
    }

    if (balance > 1 && nuevo->getDato() > nodo->getIzquierda()->getDato()){
        nodo->setIzquierda(rotarIzquierda(nodo->getIzquierda()));
        return rotarDerecha(nodo);
    }

    if(balance < -1 && nuevo->getDato() < nodo->getDerecha()->getDato()){
        nodo->setDerecha(rotarDerecha(nodo->getDerecha()));
        return rotarIzquierda(nodo);
    }

    return nodo; 
}


Nodo *AVL::valorMinimoNodo(Nodo *nodo){
    Nodo *actual = nodo;

    while (actual->getIzquierda() != nullptr){
        actual = actual->getIzquierda();
    }

    return actual;
}


Nodo *AVL::eliminarNodo(Nodo * nodo, int valor){

    if (nodo == nullptr){
        return nullptr;
    }else if(valor < nodo->getDato()){
        nodo->setIzquierda(eliminarNodo(nodo->getIzquierda(),valor));
    }else if(valor < nodo->getDato()){
        nodo->setDerecha(eliminarNodo(nodo->getDerecha(), valor));
    }else{
        if (nodo->getIzquierda() == nullptr){
            Nodo *temp = nodo->getDerecha();
            delete nodo;
            return temp;
        }else if(nodo->getDerecha() == nullptr){
            Nodo *temp = nodo->getIzquierda();
            delete nodo;
            return temp;
        }else{
            Nodo *temp = valorMinimoNodo(nodo->getDerecha());
            nodo->setDato(temp->getDato());
            nodo->setDerecha(eliminarNodo(nodo->getDerecha(), temp->getDato()));
        }
    }

    int balance = obtenerFactorEquilibrio(nodo);

    if (balance == 2 && obtenerFactorEquilibrio(nodo->getIzquierda()) == -1){
        return rotarDerecha(nodo);
    }else if(balance == 2 && obtenerFactorEquilibrio(nodo->getIzquierda()) == -1){
        nodo->setIzquierda(rotarIzquierda(nodo->getIzquierda()));
        return rotarDerecha(nodo);
    }else if(balance == -2 && obtenerFactorEquilibrio(nodo->getDerecha()) <= -0){
        return rotarIzquierda(nodo);
    }else if(balance == -2 && obtenerFactorEquilibrio(nodo->getDerecha()) == 1){
        nodo->setDerecha(rotarDerecha(nodo->getDerecha()));
        return rotarIzquierda(nodo);
    }

    return nodo;
    
}


void AVL::mostrarArbol(Nodo *nodo,int espacio){
    if(nodo == nullptr){
        return;
    }

    espacio += 10;
    mostrarArbol(nodo->getDerecha(), espacio);
    cout<<endl;
    for (int i = 10; i < espacio; i++){
        cout<<" ";
    }
    cout<<nodo->getDato()<<"\n";
    mostrarArbol(nodo->getIzquierda(), espacio);   
}

Nodo* AVL::Busquedaiterativa(int dato){
    if(raiz == nullptr){
        return raiz;
    }else{
        Nodo *temp = raiz;
        while (temp != raiz){
            if(dato == temp->getDato()){
                return temp;
            }else if(dato < temp->getDato()){
                temp = temp->getIzquierda();
            }else{
                temp = temp->getDerecha();
            }
        }
        return nullptr;
        
    }
}

Nodo* AVL::BusquedaRecursiva(Nodo *nodo,int dato){
    if (nodo == nullptr || nodo->getDato() == dato){
        return nodo;
    }else if(dato < nodo->getDato()){
        return BusquedaRecursiva(nodo->getIzquierda(), dato);
    }else{
        return BusquedaRecursiva(nodo->getDerecha(), dato);
    }
}


void AVL::generarGrafico(){
    
    archivo.open("AVL.dot", ios::out);
    archivo<<"digraph G {\n";
    graficarArbol(raiz);
    archivo<<"}";
    archivo.close();

    system("dot.exe -Tpng AVL.dot -o AVL.png");

    
}


void AVL::graficarArbol(Nodo *nodo){
    if (nodo == nullptr)
    {
        return;
    }
    archivo<<"x"<<nodo<<"[label=\""<<nodo->getDato()<<"\"];"<<endl;
    if (nodo->getIzquierda() != nullptr)
    {
        archivo<<"x"<<nodo<<"->"<<"x"<<nodo->getIzquierda()<<"[arrowhead = normaltee];"<<endl;
    }

    if (nodo->getDerecha() != nullptr)
    {
        archivo<<"x"<<nodo<<"->"<<"x"<<nodo->getDerecha()<<"[arrowhead = normaltee];"<<endl;
    }

    graficarArbol(nodo->getIzquierda());
    graficarArbol(nodo->getDerecha());
}
