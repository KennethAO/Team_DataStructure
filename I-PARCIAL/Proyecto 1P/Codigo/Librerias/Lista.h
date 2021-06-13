#ifndef LIST_H
#define LIST_H

#include "Nodo.cpp"

//#include "Node.cpp"

template<typename T>
class Lista
{
public:
    Lista();
	void ingresarCabeza(T);
	void ingresarCola(T);
	bool vacio();
	void imprimir();
	void eliminar(T);
	Nodo<T>* getPrimero(void);
	void setPrimero(Nodo<T> *);
	Nodo<T>* getActual(void);
	void setActual(Nodo<T> *);
protected:
private:
    Nodo<T>* primero;
    Nodo<T>* actual;
};

#endif
