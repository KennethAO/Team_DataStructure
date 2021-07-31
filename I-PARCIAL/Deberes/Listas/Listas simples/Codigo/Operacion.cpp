
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
