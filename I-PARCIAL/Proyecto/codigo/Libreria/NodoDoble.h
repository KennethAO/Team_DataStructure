
template <typename T>
class NodoDoble{
    private:
        T dato;
        NodoDoble *siguiente = nullptr;
        NodoDoble *anterior = nullptr;
    public:
        NodoDoble(T _dato);
        T getDato();
        void setDato(T newDato);
        
        NodoDoble *getSiguiente();
        void setSiguiente(NodoDoble *newSiguiente);
        
        NodoDoble *getAnterior();
        void setAnterior(NodoDoble *newAnterior); 
};


template <typename T>
NodoDoble<T>::NodoDoble(T _dato){
    this->dato = _dato;
}

template <typename T>
T NodoDoble<T>::getDato(){
    return dato;
}

template <typename T>
void NodoDoble<T>::setDato(T newDato){
    dato = newDato;
}

template <typename T>
NodoDoble<T>* NodoDoble<T>::getSiguiente(){
    return siguiente;
}

template <typename T>
void NodoDoble<T>::setSiguiente(NodoDoble *newSiguiente){
    siguiente = newSiguiente;
}

template <typename T>
NodoDoble<T> *NodoDoble<T>::getAnterior(){
    return anterior;
}

template <typename T>
void NodoDoble<T>::setAnterior(NodoDoble *newAnterior){
   anterior = newAnterior;
} 
