 /***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Persona.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Wednesday, June 9, 2021 3:10:25 PM
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#include "Persona.h"

////////////////////////////////////////////////////////////////////////
// Name:       Persona::Persona(std::string _nombre, std::string _apellido, int _edad, std::string _email)
// Purpose:    Implementation of Persona::Persona()
// Parameters:
// - _nombre
// - _apellido
// - _edad
// - _email
// Return:     
////////////////////////////////////////////////////////////////////////

Persona::Persona(string _nombre, string _apellido, int _edad, string _email)
{
   this->nombre = _nombre;
   this->apellido = _apellido;
   this->edad = _edad;
   this->email = _email;
}


////////////////////////////////////////////////////////////////////////
// Name:       Persona::getNombre()
// Purpose:    Implementation of Persona::getNombre()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

string Persona::getNombre(void)
{
   return nombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setNombre(std::string newNombre)
// Purpose:    Implementation of Persona::setNombre()
// Parameters:
// - newNombre
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setNombre(string newNombre)
{
   nombre = newNombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getApellido()
// Purpose:    Implementation of Persona::getApellido()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

string Persona::getApellido(void)
{
   return apellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setApellido(std::string newApellido)
// Purpose:    Implementation of Persona::setApellido()
// Parameters:
// - newApellido
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setApellido(string newApellido)
{
   apellido = newApellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getEdad()
// Purpose:    Implementation of Persona::getEdad()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

int Persona::getEdad(void)
{
   return edad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setEdad(std::string newEdad)
// Purpose:    Implementation of Persona::setEdad()
// Parameters:
// - newEdad
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setEdad(int newEdad)
{
   edad = newEdad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getEmail()
// Purpose:    Implementation of Persona::getEmail()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Persona::getEmail(void)
{
   return email;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setEmail(std::string newEmail)
// Purpose:    Implementation of Persona::setEmail()
// Parameters:
// - newEmail
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setEmail(std::string newEmail)
{
   email = newEmail;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::~Persona()
// Purpose:    Implementation of Persona::~Persona()
// Return:     
////////////////////////////////////////////////////////////////////////

Persona::~Persona()
{
   // TODO : implement
}

void Persona::mostrarDatos(){
	
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Apellido: "<<apellido<<endl;
	cout<<"edad: "<<edad<<endl;
	cout<<"E-mail: "<<email<<endl;
	
}
