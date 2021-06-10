/***********************************************************************
 * Module:  Nodo.h
 * Author:  Rafa
 * Modified: Wednesday, June 9, 2021 3:09:19 PM
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Nodo_h)
#define __Class_Diagram_1_Nodo_h
#include "Persona.h"

class Nodo{
	
	protected:
	private:
	   Persona person;
	   Nodo *siguiente;
	   
	public:
	   Nodo(Persona, Nodo *);
	   Nodo() = default;
	   Persona getPersona(void);
	   void setDato(Persona);
	   Nodo* getSiguiente(void);
	   void setSiguiente(Nodo *newSiguiente);
	   ~Nodo();
};

#endif
