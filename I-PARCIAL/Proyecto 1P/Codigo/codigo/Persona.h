/***********************************************************************
 * Module:  Persona.h
 * Author:  Rafa
 * Modified: Wednesday, June 9, 2021 10:39:19 PM
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
	   string cedula;
	   string direccion;
	   string telefono;
	   string correo;
	   
	public:
	   Persona(string _nombre, string _apellido, string _cedula, string _direccion, string _telefono);
	   Persona() = default;
	   string getNombre(void);
	   void setNombre(string newNombre);
	   string getApellido(void);
	   void setApellido(string newApellido);
	   string getCedula(void);
	   void setCedula(string newCedula);
	   string getDireccion(void);
	   void setDireccion(string newDireccion);
	   string getTelefono(void);
	   void setTelefono(string newTelefono);
	   string getCorreo(void);
	   void setCorreo(string newCorreo);
	   string datosPersona();
	   ~Persona();
};

#endif
