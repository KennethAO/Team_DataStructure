#include "Persona.h"


class OperacionesPersona{
	
	public:
		OperacionesPersona() = default;
		Persona insertarDatos();
		void generarCorreo(Persona &persona);
};
