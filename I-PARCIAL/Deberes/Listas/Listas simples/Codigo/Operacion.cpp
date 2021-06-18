/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Operacion.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Wednesday, June 9, 2021 3:10:25 PM
 * Purpose: Implementation of the class Operacion
 ***********************************************************************/
 
#include "Operacion.h"

Persona Operacion::insertarDatos(){
	
	string nombre,apellido,email;
	int edad;
	system("cls");
	cout<<"\t\tIngreso de Datos\n"<<endl;
	cout<<"Nombre: "; cin>>nombre;
	fflush(stdin);
	cout<<"Apellido: "; cin>>apellido;
	fflush(stdin);
	cout<<"Edad: "; cin>>edad;
	fflush(stdin);
	cout<<"E-mail: "; cin>>email;
	fflush(stdin);
	Persona p1(nombre,apellido,edad,email);
	
	return p1;
	
}
