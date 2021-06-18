/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Cola.h
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Wednesday, June 16, 2021 3:50:04 PM
 * Purpose: Prototypes of the class Cola
 ***********************************************************************/
 
#include "Nodo.cpp"

template<typename T>
class Cola{
	private:
			Nodo<T>* cabeza=nullptr;
			Nodo<T>* cola=nullptr;
			void insertarIndice();
			Nodo<T>* imprimir1(Nodo<T>*);
			
			
	public:
			Cola()=default;
			void insertar(T);	
			void imprimir();
			void eliminar(int);
			
			
};
