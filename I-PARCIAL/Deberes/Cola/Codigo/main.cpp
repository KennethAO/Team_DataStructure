/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  main.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Wednesday, June 16, 2021 3:50:04 PM
 * Purpose: main
 ***********************************************************************/
 
#include <iostream>
#include "Cola.cpp"
#include <stdlib.h>
#include "Validacion.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Validacion validar;
	Cola<int> cola;
	int num,digito; 
	do{
		system("cls");
		cout<<"1. Insertar  elemento"<<endl;
		cout<<"2. Eliminar elemento"<<endl;
		cout<<"3. Mostrar elementos"<<endl;
		cout<<"4. Salir"<<endl;
		num=validar.validarNum("Ingrese una opcion: ");
		cout<<endl;
		switch(num){
			case 1: 
				digito=validar.validarNum("Ingrese el numero a insertar: ");
				cola.insertar(digito);
				cout<<endl;
				break;
			case 2: 
				digito=validar.validarNum("Ingrese el indice a eliminar");
				cola.eliminar(digito);
				cout<<endl;
				system("pause");
				break;
			case 3:
				cola.imprimir();
				cout<<endl;
				system("pause");
				break;	
		}
	}while(num!=4);

	return 0;
}
