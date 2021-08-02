
class Nodo{
    private:
        int dato = 0;
        Nodo *izquierda = nullptr;
        Nodo *derecha = nullptr;

    public:
        
        Nodo() = default;
        Nodo(int _dato);
        int getDato();
        void setDato(int newDato);

        Nodo* getIzquierda();
        void setIzquierda(Nodo *newIzquierda);

        Nodo* getDerecha();
        void setDerecha(Nodo *newDerecha);

};


Nodo::Nodo(int _dato){
    dato = _dato;
}

int Nodo::getDato(){
    return dato;
}


void Nodo::setDato(int newDato){
    dato = newDato;
}


Nodo* Nodo::getIzquierda(){
    return izquierda;
}


void Nodo::setIzquierda(Nodo *newIzquierda){
    izquierda = newIzquierda;
}


Nodo* Nodo::getDerecha(){
    return derecha;
}

void Nodo::setDerecha(Nodo *newDerecha){
    derecha = newDerecha;
}