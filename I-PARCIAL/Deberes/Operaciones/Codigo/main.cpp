/**
 * "Universidad de las Fuerzas Armadas ESPE"
 * @file main.cpp
 * @author Kenneth Andrade (koandrade@espe.edu.ec.)
 * @author Rafael Buse (rebuse@espe.edu.ec)
 * @author David CalvopiÃ±a (ldvalvopina@espe.edu.ec)
 * @author Nicolas Hidrobo (anhidrobo@espe.edu.ec)
 * @author Henry Tiamba (hatiamba@espe.edu.ec)
 * @author Bryan PariÃ±o (baclavon@espe.edu.ec)
 * @brief Funciones con operaciones matematicas
 * @version 0.1
 * @date 2021-05-27
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <stdlib.h>
#include "Functions.cpp"

using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){
	
	int opc=0;
	double value = 0;
	long double value1=0;
	Functions functions(50);
	do{
		system("cls");
		cout<<"Calcular: "<<endl;
		cout<<"1. Raiz Cuadrada"<<endl;
		cout<<"2. Seno"<<endl;
		cout<<"3. Coseno"<<endl;
		cout<<"4. Tangente"<<endl;
		cout<<"5. Cotangente"<<endl;
		cout<<"6. Pi"<<endl;
		cout<<"Ingrese el numero indicado para seleccionar una funcionalidad: ";
		cin>>opc;
		cout<<endl<<endl;
		switch(opc){
			case 1: 
					cout<<"Funcionalidad:'RAIZ CUADRADA' "<<endl;
					cout<<"Ingrese el numero: ";
					cin>>value;	
					while(value<0){
					cout<<"NUMERO NEGATIVO, NO TIENE SOLUCION, POR FAVOR: Ingrese el numero nuevamente: ";
					cin>>value;	
					}
					cout<<"La raiz cuadrada de "<<value<<" es: "<<functions.squareRoot(value);
					break;
			case 2:
					cout<<"Funcionalidad:'SENO' "<<endl;
					cout<<"Ingrese el numero: ";
					cin>>value1;
				    cout<<"El seno de "<<value1<<" es: "<<functions.calculateSin(value1);
					break;
			case 3:
					cout<<"Funcionalidad:'COSENO' "<<endl;
					cout<<"Ingrese el numero: ";
					cin>>value1;
				    cout<<"El coseno de "<<value1<<" es: "<<functions.calculateCos(value1);
					break;
			case 4:
					cout<<"Funcionalidad:'TANGENTE' "<<endl;
					cout<<"Ingrese el numero: ";
					cin>>value1;
				    cout<<"La tangente de "<<value1<<" es: "<<functions.calculateTan(value1);
					break;
			case 5:
					cout<<"Funcionalidad:'COTANGENTE' "<<endl;
					cout<<"Ingrese el numero: ";
					cin>>value1;
				    cout<<"La cotangente de "<<value1<<" es: "<<functions.calculateCotan(value1);
					break;
			case 6:
					cout<<"Funcionalidad:'PI' "<<endl;
					cout<<"El valor de  PI es de:  "<<functions.calculatePi(0.0001);
					break;
		}
	}while(opc>6||opc<1);

	
	return 0;
}
