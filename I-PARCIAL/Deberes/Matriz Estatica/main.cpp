#include <iostream>
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

int main()
{
	Operation operacion;
    int m1[10][10];
    int m2[10][10];
    int mr[10][10];
    string auxfila1,auxfila2,auxcolumna1,auxcolumna2;
    int fila1=0;
    int columna1=0;
    int fila2 = 0;
    int columna2 = 0;
    
    cout << "******* OPERACION  MULTIPLICAR *********" << endl;
    cout<<endl;
    cout << "ingrese el numero de filas de la primera matriz: ";
    cin >> auxfila1;
    fila1 = atoi(operacion.validarSoloNumeros(auxfila1).c_str());
    cout << "\ningrese el numero de columnas de la primera matriz: ";
    cin >> auxcolumna1;
    columna1 = atoi(operacion.validarSoloNumeros(auxcolumna1).c_str());
    cout << "\ningrese el numero de filas de la segunda matriz: ";
    cin >> auxfila2;
    fila2 = atoi(operacion.validarSoloNumeros(auxfila2).c_str());
    cout << "\ningrese el numero de columnas de la segunda matriz: ";
    cin >> auxcolumna2;
    columna2 = atoi(operacion.validarSoloNumeros(auxcolumna2).c_str());
    
    operacion.leer(m1,fila1,columna1);
    operacion.leer(m2, fila2, columna2);
    operacion.multiplicar(m1, m2, mr);
    operacion.mostrar(mr, fila1, columna2);
   
}
