#include <iostream>
#include "OperacionesPersona.h"
int main(int, char**) {
    
    Persona persona;
    OperacionesPersona op;
    persona = op.insertarDatos();

    op.generarCorreo(persona);

    cout<<"\n\n\t Datos Persona \n"<<persona.datosPersona();
}
