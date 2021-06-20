/***********************************************************************
 * Module:  Persona.cpp
 * Author:  Rafa
 * Modified: Wednesday, June 9, 2021 10:39:19 PM
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#include <sstream>
#include "Persona.h"


////////////////////////////////////////////////////////////////////////
// Name:       Persona::Persona(std::string _nombre, std::string _apellido, std::string _cedula, std::string _direccion, std::string _telefono)
// Purpose:    Implementation of Persona::Persona()
// Parameters:
// - _nombre
// - _apellido
// - _cedula
// - _direccion
// - _telefono
// Return:     
////////////////////////////////////////////////////////////////////////

Persona::Persona(string _nombre, string _apellido, string _cedula, string _direccion, string _telefono)
{
   this->nombre = _nombre;
   this->apellido = _apellido;
   this->cedula = _cedula;
   this->direccion = _direccion;
   this->telefono = _telefono;
   this->correo = "";
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
// Name:       Persona::getCedula()
// Purpose:    Implementation of Persona::getCedula()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

string Persona::getCedula(void)
{
   return cedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setCedula(std::string newCedula)
// Purpose:    Implementation of Persona::setCedula()
// Parameters:
// - newCedula
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setCedula(string newCedula)
{
   cedula = newCedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getDireccion()
// Purpose:    Implementation of Persona::getDireccion()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

string Persona::getDireccion(void)
{
   return direccion;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setDireccion(std::string newDireccion)
// Purpose:    Implementation of Persona::setDireccion()
// Parameters:
// - newDireccion
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setDireccion(string newDireccion)
{
   direccion = newDireccion;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getTelefono()
// Purpose:    Implementation of Persona::getTelefono()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

string Persona::getTelefono(void)
{
   return telefono;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setTelefono(std::string newTelefono)
// Purpose:    Implementation of Persona::setTelefono()
// Parameters:
// - newTelefono
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setTelefono(string newTelefono)
{
   telefono = newTelefono;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getCorreo()
// Purpose:    Implementation of Persona::getCorreo()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

string Persona::getCorreo(void)
{
   return correo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setCorreo(std::string newCorreo)
// Purpose:    Implementation of Persona::setCorreo()
// Parameters:
// - newCorreo
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setCorreo(string newCorreo)
{
   correo = newCorreo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::~Persona()
// Purpose:    Implementation of Persona::~Persona()
// Return:     
////////////////////////////////////////////////////////////////////////
string Persona::datosPersona(){
   stringstream s;
   s<<"Nombre: "<<nombre<<endl;
   s<<"Apellido: "<<apellido<<endl;
   s<<"Cedual: "<<cedula<<endl;
   s<<"Direccion: "<<direccion<<endl;
   s<<"Telefono: "<<telefono<<endl;
   s<<"Correo: "<<correo<<endl;

   return s.str();
}


Persona::~Persona()
{
   // TODO : implement
}
