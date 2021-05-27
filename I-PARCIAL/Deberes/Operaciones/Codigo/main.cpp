#include <iostream>
#include <stdlib.h>
#include "Functions.cpp"

using namespace std; 

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
					cout<<"Ingrese el valor de posicion para PI: ";
					cin>>value;
				    cout<<"El valor de PI con el valor de posicion indicado es: "<<functions.calculatePi(value);
					break;
		}
	}while(opc>6||opc<1);

	
	return 0;
}
