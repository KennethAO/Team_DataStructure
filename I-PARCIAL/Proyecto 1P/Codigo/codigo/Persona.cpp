/***********************************************************************
 * Module:  Persona.cpp
 * Author:  Rafa
 * Modified: Wednesday, June 9, 2021 10:39:19 PM
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#include <sstream>
#include "Persona.h"


Persona::Persona(string _nombre, string _apellido, string _cedula, string _direccion, string _telefono)
{
   this->nombre = _nombre;
   this->apellido = _apellido;
   this->cedula = _cedula;
   this->direccion = _direccion;
   this->telefono = _telefono;
   this->correo = "";
}

string Persona::getNombre(void)
{
   return nombre;
}

void Persona::setNombre(string newNombre)
{
   nombre = newNombre;
}

string Persona::getApellido(void)
{
   return apellido;
}

void Persona::setApellido(string newApellido)
{
   apellido = newApellido;
}

Date Persona::getNacimiento(){
   return nacimiento;
}
void Persona::setNacimiento(Date newNacimiento){
   nacimiento = newNacimiento;
}

string Persona::getCedula(void)
{
   return cedula;
}

void Persona::setCedula(string newCedula)
{
   cedula = newCedula;
}

string Persona::getDireccion(void)
{
   return direccion;
}

void Persona::setDireccion(string newDireccion)
{
   direccion = newDireccion;
}

string Persona::getTelefono(void)
{
   return telefono;
}

void Persona::setTelefono(string newTelefono)
{
   telefono = newTelefono;
}

string Persona::getCorreo(void)
{
   return correo;
}

void Persona::setCorreo(string newCorreo)
{
   correo = newCorreo;
}

string Persona::datosPersona(){
   stringstream s;
   s<<"Nombre: "<<nombre<<endl;
   s<<"Apellido: "<<apellido<<endl;
   s<<"Fecha de nacimiento: "<<nacimiento.datosFecha()<<endl;
   s<<"Cedula: "<<cedula<<endl;
   s<<"Direccion: "<<direccion<<endl;
   s<<"Telefono: "<<telefono<<endl;
   s<<"Correo: "<<correo<<endl;

   return s.str();
}


Persona::~Persona()
{
   // TODO : implement
}
