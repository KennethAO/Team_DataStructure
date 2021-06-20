
#include "OperacionesPersona.h"
#include "Validar.h"

Persona OperacionesPersona::insertarDatos(){
	Validar v;
	Persona persona;
	persona.setNombre(v.validarLetras("\nNombre: ", 15,true));
	persona.setApellido(v.validarLetras("\nApellido: ", 8,false));
	persona.setCedula(v.validarCedula());
	persona.setDireccion(v.validarNumeros("\nDireccion: ",15));
	persona.setTelefono(v.validarNumeros("\nTelefono: ",10));

	return persona;
}

void OperacionesPersona::generarCorreo(Persona &persona){
	
	char *nombre = (char*)persona.getNombre().c_str();
	char *apellido = (char*)persona.getApellido().c_str();
	string correo = "";
	
	correo += tolower(*(nombre + 0));
	for (int i = 0; i < persona.getNombre().length(); i++){
		if(*(nombre+i) == 32){
			correo += tolower(*(nombre + (i+1)));
		}
	}
	*(apellido + 0) = tolower(*(apellido + 0));
	correo += apellido;
	correo += "@espe.fin.ec";
	persona.setCorreo(correo);
	
}
