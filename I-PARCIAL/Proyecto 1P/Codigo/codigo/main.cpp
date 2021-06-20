#include <iostream>
#include "OperacionesPersona.h"
#include "DateOperations.h"
#include "Menu.h"
int main(int, char**) {
    
    Menu menu;
    int opc;

    opc = menu.menuPrincipal();

    switch (opc)
    {
    case 1:
        Persona persona;
        OperacionesPersona op;
        persona = op.insertarDatos();

        op.generarCorreo(persona);

        cout<<"\n\n\t Datos Persona \n"<<persona.datosPersona();
        break;

    }
    
    

}
