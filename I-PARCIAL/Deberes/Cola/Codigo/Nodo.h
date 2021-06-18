/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Nodo.h
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Wednesday, June 16, 2021 3:50:04 PM
 * Purpose: Prototypes of the class Nodo
 ***********************************************************************/
 
template<typename T>
class Nodo{
	private:
			Nodo *siguiente=nullptr;
			T dato; 
			int indice; 
	public:
			Nodo(T);
			Nodo<T> *getSiguiente();
			void setSiguiente(Nodo<T>*);
			T getDato();
			void setDato(T);
			
			int getIndice();
			void setIndice(int);
};












