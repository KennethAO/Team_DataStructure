#include <iostream>
#include "Menu.h"
#include "Operacion.h"
#include "Lista.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	string opciones[] = {"Insertar por la cabeza", "Insertar por la cola", "Eliminar elemento", "Mostrar elementos de la lista", "Salir"};
	string si_no[] = {"SI","NO"};
	Menu menu;
	Lista list;
	Operacion op;
	int opc,desicion;
	
	Persona empleado ;
	do{
	opc = menu.crearMenu("Menu principal",opciones,5);
	switch(opc){
		case 1:
			do{
				empleado = op.insertarDatos();
				list.insertarInicio(empleado);
				desicion = menu.crearMenu("¿ Desea volver a ingresar ?", si_no, 2);
			}while(desicion != 2);
			
			break;
			
		case 2:
			do{
				empleado = op.insertarDatos();
				list.insertarFinal(empleado);
				desicion = menu.crearMenu("¿ Desea volver a ingresar ?", si_no, 2);
			}while(desicion != 2);
			break;
		
		case 3:
			int valor;
			cout<<"\n\n\tIngrese el valor a eliminar: ";
			cin>>valor;
			list.eliminar(valor);
			list.imprimir();
			system("pause");
			
			break;
		
		case 4:
			list.imprimir();
			system("pause");
			break;
			
		case 5:
			exit(0);
			break;
	}
	}while(opc != 5);

	return 0;
}
