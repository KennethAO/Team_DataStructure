#include <iostream>

using namespace std;

class Nodo {
    private:
        //int data;
        //Node *parent;
        //Node *left;
        //Node *right;
        //int color;
        int dato;
        Nodo *padre;
        Nodo *izquierda;
        Nodo *derecha;
        int color; 
    public:
        Nodo() = default; 
        void setDato(int);
        int getDato();
        Nodo* getNodoPadre();
        void setNodoPadre(Nodo*);
        Nodo* getNodoIzquierda();
        void setNodoIzquierda(Nodo*);
        Nodo* getNodoDerecha();
        void setNodoDerecha(Nodo*);
        void setColor(int);
        int getColor();
};


void Nodo::setDato(int _dato){
    this->dato = _dato;
}

int Nodo::getDato(){
    return dato;
}

Nodo* Nodo::getNodoPadre(){
    return padre;
}

void Nodo::setNodoPadre(Nodo* _padre){
    padre = _padre;
}

Nodo* Nodo::getNodoIzquierda(){
    return izquierda;
}

void Nodo::setNodoIzquierda(Nodo* _izquierda){
    izquierda = _izquierda;
}

Nodo* Nodo::getNodoDerecha(){
    return derecha;
}

void Nodo::setNodoDerecha(Nodo* _derecha){
    derecha = _derecha;
}

void Nodo::setColor(int _color){
    color = _color;
}

int Nodo::getColor(){
    return color; 
}

