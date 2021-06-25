template <typename T>
class Nodo{
	
	protected:
		
	private:
	   T dato;
	   Nodo *siguiente;
	public:
		
	   Nodo(T _dato, Nodo * _siguiente);
	   Nodo();
	   T getDato(void);
	   void setDato(T newDato);
	   Nodo* getSiguiente(void);
	   void setSiguiente(Nodo *newSiguiente);

};

template<typename T>
Nodo<T>::Nodo() {
	this->siguiente = nullptr;
}

template<typename T>
Nodo<T>::Nodo(T _dato,Nodo* _siguiente) {
	this->dato = _dato;
	this->siguiente = _siguiente;
}

template<typename T>
void Nodo<T>::setDato(T newDato) {
	dato = newDato;
}

template<typename T>
void Nodo<T>::setSiguiente(Nodo* _newSiguiente) {
	siguiente = _newSiguiente;
}

template<typename T>
T Nodo<T>::getDato() {
	return dato;
}

template<typename T>
Nodo<T>* Nodo<T>::getSiguiente() {
	return siguiente;
}
