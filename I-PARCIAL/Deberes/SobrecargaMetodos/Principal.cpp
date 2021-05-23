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
			    cout<<"Resta  = "<<operaciones.restar(numeros[0]);
			    cout<<"Multiplicación = "<<operaciones.multiplicar(numeros[0])<<endl;
			    cout<<"Mayor = "; 
				break;
		case 2:
				cout<<"Suma = ";
			    cout<<"Resta  = ";
			    cout<<"Multiplicación = "<<operaciones.multiplicar(numeros[0],numeros[1])<<endl;
			    cout<<"Mayor = "<<operaciones.calcularMayor(numeros[0],numeros[1])<<endl; 
				break;
		case 3:
				cout<<"Suma = "<<operaciones.sumar(numeros[0], numeros[1], numeros[2])<<endl;
			    cout<<"Resta  = "<<operaciones.restar(numeros[0], numeros[1], numeros[2])<<endl;
			    cout<<"Multiplicación = "<<operaciones.multiplicar(numeros[0],numeros[1],numeros[2])<<endl;
			    cout<<"Mayor = "<<operaciones.calcularMayor(numeros[0], numeros[1], numeros[2]); 
				break;
		case 4:
				cout<<"Suma = "<<operaciones.sumar(numeros[0],numeros[1],numeros[2],numeros[3])<<endl;
			    cout<<"Resta  = ";
			    cout<<"Multiplicación = ";
			    cout<<"Mayor = "<<operaciones.calcularMayor(numeros[0],numeros[1],numeros[2],numeros[3])<<endl; 
				break;
		case 5:
				cout<<"Suma = "<<operaciones.sumar(numeros[0],numeros[1],numeros[2],numeros[3],numeros[4])<<endl;
			    cout<<"Resta  = "<<operaciones.restar(numeros[0],numeros[1],numeros[2],numeros[3],numeros[4])<<endl;
			    cout<<"Multiplicación = ";
			    cout<<"Mayor = "<<operaciones.calcularMayor(numeros[0],numeros[1],numeros[2],numeros[3],numeros[4])<<endl; 
				break;
		case 6:
				cout<<"Suma = ";
			    cout<<"Resta  = "<<operaciones.restar(numeros[0],numeros[1],numeros[2],numeros[3],numeros[4],numeros[5])<<endl;
			    cout<<"Multiplicación = "<<operaciones.multiplicar(numeros[0],numeros[1],numeros[2],numeros[3],numeros[4],numeros[5])<<endl;
			    cout<<"Mayor = "; 
				break;				
	}
	
}
