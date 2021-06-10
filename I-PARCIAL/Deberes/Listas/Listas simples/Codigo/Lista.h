/***********************************************************************
 * Module:  Lista.h
 * Author:  Rafa
 * Modified: Wednesday, June 9, 2021 3:08:43 PM
 * Purpose: Declaration of the class Lista
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Lista_h)
#define __Class_Diagram_1_Lista_h

#include "Nodo.h"
#include "Persona.h"

class Lista{
	
	protected:
	private:
	   Nodo *primero;
	   Nodo *actual;
	   
	public:
	   Lista();
	   void vaciar(void);
	   void insertarInicio(Persona);
	   void insertarFinal(Persona);
	   void eliminar(int);
	   void imprimir(void);
	   Nodo* getPrimero(void);
	   void setPrimero(Nodo *newPrimero);
	   Nodo* getActual(void);
	   void setActual(Nodo *newActual);
	   ~Lista();
};

#endif
