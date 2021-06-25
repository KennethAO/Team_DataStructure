#include "Libreria\Menu.h"
#include "OperacionesPersona.h"
#include "OperacionesAmortizacion.h"
#include "Archivo.h"
#include "Validar.h"

using namespace std; 

int main(int, char**) {
    Validar v;
    Menu menu;
    Persona persona;
    OperacionesPersona op;
    Archivo<Persona> arch;
    OperacionesAmortizacion opA;
    string cedula;
    int opc;
    
    do{
        opc = menu.menuPrincipal();
        switch (opc){
        case 1:
            persona = op.insertarDatos();
            op.generarCorreo(persona);
            op.guardarArchivo(persona);
            break;

        case 2:
            opA.ingresoDatos();
            opA.calcularTEM();
            opA.calcularCuota();
            opA.generarTabla();
            break;

        case 3:
            cedula = v.validarNumeros("\n\nIngrese la cedula a buscar: ",10);
            op.consultarDatos(cedula);
            break;
        }
    }while (opc != 4);

    
    
    


    // ListaDoble<Persona> lista;
    // //ListaDoble<string> lista1;

    // Persona person;
    // OperacionesPersona operacionesPersona;
    // person = operacionesPersona.insertarDatos();
    // operacionesPersona.generarCorreo(person);

    // lista.insertar(person);
    //     Archivo<Persona> archivo(lista);
    //     archivo.guardarTxt("Personas");

}
