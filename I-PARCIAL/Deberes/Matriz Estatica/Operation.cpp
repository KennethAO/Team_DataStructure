
#include "Operation.h"
//			ENCABEZADO
//UNIERSIDAD DE LAS FUERZAS ARMADAS 'ESPE'
//TITULO: 
//		MATRIZ ESTATICA 
//AUTORES:
//		ANDRADE KENNETH
//		BUSE RAFAEL 
//		CALVOPIÑA DAVID
//		NICOLAS HIDROBO
// 	 	BRYAN PATIÑO
//		TIAMBA HENRY 
//FECHA DE CREACION: 
//		19/05/2021 
//CARRERA: 
//		SOFTWARE
//MATERIA: 
//		ESTRUCTURA DE DATOS
//NRC:
//		3685
using namespace std;
Operation::Operation()
{
}

//VALIDAR SOLO NUMEROS


bool esEntero(string linea) {
	bool esEntero = true;
	int longitud = linea.size();
	
	if (longitud == 0) {
		esEntero = false;
	} else if (longitud == 1 && !isdigit(linea[0])) {
		esEntero = false;
	} else {
		int indice = 0;
		if (linea[0] == '+' || linea[0] == '-') {
			indice = 1;
		} else {
			indice = 0;
		}
		
		while (indice < longitud) {
			if (!isdigit(linea[indice])) {
				esEntero = false;
				break;
			}
			indice++;
		}
	}
	return esEntero;	
}


std::string Operation::validarSoloNumeros(string linea)
{
	int numero;
	bool repite = true;
	int cont=0;
	
	do {
			
		if (esEntero(linea)) {
			repite = false;
		} else {
				cout << "No has ingresado un valor entero. Intentalo nuevamente" << endl;
				getline(cin, linea);
			}
		}while (repite);
	
	numero = atoi(linea.c_str());
	
	cout << "El numero " << numero << " fue ingresado exitosamente " << endl;
	
	return linea;
	
}





//MULTIPLICAR
void Operation::multiplicar(int m1[10][10], int m2[10][10], int mr[10][10])
{
	
	for (int i = 0; i < 10; i++) {
		
		for (int j = 0; j < 10; j++) {
			mr[i][j] = 0;
			for (int k = 0; k < 10; k++) {
				mr[i][j] = mr[i][j] + (m1[i][k] * m2[k][j]);

			}
			

		}

	}

}

void Operation::encerar(int matriz[10][10])
{
	for (int i = 0; i < 10;i++) {
		for (int j = 0; j < 10; j++) {
			matriz[i][j] = 0;

		}

	}
}

void Operation::leer(int matriz[10][10], int fila, int columna)
{
	encerar(matriz);
	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < columna; j++) {
			cout << "ingrese datos a la fila " << i+1 << " columna: " << j+1<<" :";
			cin>>matriz[i][j];
			cout << endl;

		}

	}

}

void Operation::mostrar(int matriz[10][10],int fila, int columna)
{

cout<<"****** OPERACIONES REALIZADAS ********"<<endl;
	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < columna; j++) {
			cout << "\n Columna " << i + 1 << " Fila " << j + 1 << ": ";
			cout << matriz[i][j] << endl;
		}
		cout << endl;

	}
}
