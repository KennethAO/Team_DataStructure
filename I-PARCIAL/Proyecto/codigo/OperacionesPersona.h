#include "Persona.h"


class OperacionesPersona{
	
	public:
		OperacionesPersona() = default;
		Persona insertarDatos();
		void generarCorreo(Persona &persona);
		int calcularEdad(Date);
		int compararCorreo(Persona &persona);
		string convertirMinusculas(string dato);
		void guardarArchivo(Persona persona);
		void consultarDatos(string cedula);
		bool compararCedula();
};
