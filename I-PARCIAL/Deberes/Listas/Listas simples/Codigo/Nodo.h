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
 * Modified: Wednesday, June 9, 2021 3:10:25 PM
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
