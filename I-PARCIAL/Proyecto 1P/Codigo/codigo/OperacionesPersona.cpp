
#include "OperacionesPersona.h"
#include "Validar.h"
#include "DateOperations.h"

Persona OperacionesPersona::insertarDatos(){
	Validar v;
	DateOperations vd;
	Persona persona;
	cout<<"\n\n";
	persona.setNombre(v.validarLetras("Nombre: ", 15,true));
	cout<<endl;
	persona.setApellido(v.validarLetras("Apellido: ", 8,false));
	cout<<endl;
	persona.setNacimiento(vd.enterDate());
	cout<<endl;
	persona.setCedula(v.validarCedula());
	cout<<endl;
	persona.setDireccion(v.validarNumeros("Direccion: ",15));
	cout<<endl;
	persona.setTelefono(v.validarNumeros("Telefono: ",10));
	cout<<endl;

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
