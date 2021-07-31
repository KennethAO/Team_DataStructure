/***********************************************************************
 * Module:  Persona.h
 * Author:  Rafa
 * Modified: Wednesday, June 9, 2021 3:10:25 PM
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Persona_h)
#define __Class_Diagram_1_Persona_h
#include <iostream>

using namespace std;

class Persona{
	
	protected:
	private:
	   string nombre;
	   string apellido;
	   int edad;
	   string email;
	   
	public:
	   Persona(string _nombre, string _apellido, int _edad, string _email);
	   Persona() = default;
	   string getNombre(void);
	   void setNombre(string newNombre);
	   string getApellido(void);
	   void setApellido(string newApellido);
	   int getEdad(void);
	   void setEdad(int newEdad);
	   string getEmail(void);
	   void setEmail(string newEmail);
	   void mostrarDatos();
	   ~Persona();
};

#endif
