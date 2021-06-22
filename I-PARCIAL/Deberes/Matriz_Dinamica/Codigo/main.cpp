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
 * Modified: miércoles, 2 de junio de 2021 15:46:42
 * Purpose: Declaration of the method main
 ***********************************************************************/
 
#include<iostream>
#include<stdlib.h>
#include"Operacion.h"

using namespace std;

int main(){
	
	int **mat,dimension,exp;
	cout<<"Ingrese una dimension para su matriz: ";
	cin>>dimension;
	Matriz matriz1(dimension,dimension);
	Operacion operacion(matriz1);
	operacion.segmentar();
	operacion.generar();
	cout<<endl; 
	cout<<"Ingrese un exponente para su matriz: ";
	cin>>exp;
	operacion.procesar(exp);
	operacion.imprimir_();
	cout<<endl;
	system("pause");
	return 0;
}
