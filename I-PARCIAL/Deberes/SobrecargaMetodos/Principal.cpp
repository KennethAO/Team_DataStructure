#include <iostream>
#include "Operaciones.cpp"

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int nValor;
	Operaciones<float> operaciones;
	do{
		system("cls");
		cout<<"Ingrese el numero de elementos a operar (Rango: 1-6):  ";
		cin>>nValor;
	}while(nValor<1||nValor>6);
	float numeros[nValor];
	for(int i=0;i<nValor;i++){
		cout<<"Ingrese el "<<i+1<<" valor: ";
		cin>>numeros[i];
		cout<<endl;
	}
	switch(nValor){
		case 1:
			    cout<<"Suma = ";
			    cout<<"Resta  = ";
			    cout<<"Multiplicación = ";
			    cout<<"Mayor = "; 
				break;
		case 2:
				cout<<"Suma = ";
			    cout<<"Resta  = ";
			    cout<<"Multiplicación = ";
			    cout<<"Mayor = "; 
				break;
		case 3:
				cout<<"Suma = ";
			    cout<<"Resta  = ";
			    cout<<"Multiplicación = ";
			    cout<<"Mayor = "; 
				break;
		case 4:
				cout<<"Suma = ";
			    cout<<"Resta  = ";
			    cout<<"Multiplicación = ";
			    cout<<"Mayor = "; 
				break;
		case 5:
				cout<<"Suma = ";
			    cout<<"Resta  = ";
			    cout<<"Multiplicación = ";
			    cout<<"Mayor = "; 
				break;
		case 6:
				cout<<"Suma = ";
			    cout<<"Resta  = ";
			    cout<<"Multiplicación = ";
			    cout<<"Mayor = "; 
				break;				
	}
	
}
