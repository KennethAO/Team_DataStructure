/**
 * "Universidad de las Fuerzas Armadas ESPE"
 * @file Principal.cpp
 * @author Kenneth Andrade (koandrade@espe.edu.ec.)
 * @author Rafael Buse (rebuse@espe.edu.ec)
 * @author David Calvopiña (ldvalvopina@espe.edu.ec)
 * @author Nicolas Hidrobo (anhidrobo@espe.edu.ec)
 * @author Henry Tiamba (hatiamba@espe.edu.ec)
 * @author Bryan Pariño (baclavon@espe.edu.ec)
 * @brief Sobrecarga de Métodos en Operaciones Matemáticas C++
 * @version 0.2
 * @date 2021-05-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include "Operaciones.cpp"
#include <vector>

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
	vector<float> numeros;

	for(int i=0;i<nValor;i++){
		int valor;
		cout << "Ingrese el " << i + 1 << " valor: ";
		cin >> valor;
		cout << endl;
		numeros.push_back(valor);
	}
	switch(nValor){
		case 1:
			    cout<<"Suma = "<<operaciones.sumar(numeros[0])<<endl;;
			    cout<<"Resta  = "<<operaciones.restar(numeros[0])<<endl;;
			    cout<<"Multiplicaci�n = "<<operaciones.multiplicar(numeros[0])<<endl;
			    cout<<"Mayor = "<<operaciones.calcularMayor(numeros[0])<<endl; 
				break;
		case 2:
				cout<<"Suma = "<<operaciones.sumar(numeros[0],numeros[1])<<endl;;
			    cout<<"Resta  = "<<operaciones.restar(numeros[0],numeros[1])<<endl;;
			    cout<<"Multiplicaci�n = "<<operaciones.multiplicar(numeros[0],numeros[1])<<endl;
			    cout<<"Mayor = "<<operaciones.calcularMayor(numeros[0],numeros[1])<<endl; 
				break;
		case 3:
				cout<<"Suma = "<<operaciones.sumar(numeros[0], numeros[1], numeros[2])<<endl;
			    cout<<"Resta  = "<<operaciones.restar(numeros[0], numeros[1], numeros[2])<<endl;
			    cout<<"Multiplicaci�n = "<<operaciones.multiplicar(numeros[0],numeros[1],numeros[2])<<endl;
			    cout<<"Mayor = "<<operaciones.calcularMayor(numeros[0], numeros[1], numeros[2]); 
				break;
		case 4:
				cout<<"Suma = "<<operaciones.sumar(numeros[0],numeros[1],numeros[2],numeros[3])<<endl;
			    cout<<"Resta  = "<<operaciones.restar(numeros[0],numeros[1],numeros[2],numeros[3])<<endl;
			    cout<<"Multiplicaci�n = "<<operaciones.multiplicar(numeros[0],numeros[1],numeros[2],numeros[3])<<endl;
			    cout<<"Mayor = "<<operaciones.calcularMayor(numeros[0],numeros[1],numeros[2],numeros[3])<<endl; 
				break;
		case 5:
				cout<<"Suma = "<<operaciones.sumar(numeros[0],numeros[1],numeros[2],numeros[3],numeros[4])<<endl;
			    cout<<"Resta  = "<<operaciones.restar(numeros[0],numeros[1],numeros[2],numeros[3],numeros[4])<<endl;
			    cout<<"Multiplicaci�n = "<<operaciones.multiplicar(numeros[0],numeros[1],numeros[2],numeros[3],numeros[4])<<endl;;
			    cout<<"Mayor = "<<operaciones.calcularMayor(numeros[0],numeros[1],numeros[2],numeros[3],numeros[4])<<endl; 
				break;
		case 6:
				cout<<"Suma = "<<operaciones.sumar(numeros[0],numeros[1],numeros[2],numeros[3],numeros[4],numeros[5])<<endl;;
			    cout<<"Resta  = "<<operaciones.restar(numeros[0],numeros[1],numeros[2],numeros[3],numeros[4],numeros[5])<<endl;
			    cout<<"Multiplicaci�n = "<<operaciones.multiplicar(numeros[0],numeros[1],numeros[2],numeros[3],numeros[4],numeros[5])<<endl;
			    cout<<"Mayor = "<<operaciones.calcularMayor(numeros[0],numeros[1],numeros[2],numeros[3],numeros[4],numeros[5])<<endl;; 
				break;				
	}
	
}
