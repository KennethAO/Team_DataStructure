#include "Operacion.h"
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<iostream>

using namespace std; 

Matriz Operacion::getMatriz1(void)
{
   return matriz1;
}

void Operacion::setMatriz1(Matriz newMatriz1)
{
	matriz1 = newMatriz1; 
}

Matriz Operacion::getMatrizR(void)
{
   return matrizR;
}


void Operacion::setMatrizR(Matriz newMatrizR)
{
   matrizR = newMatrizR;
}


void Operacion::setMatrizAux(Matriz newMatrizAux){
	matrizAux=newMatrizAux;
}


Matriz Operacion::getMatrizAux(void){
	return matrizAux; 
}


Operacion::Operacion(Matriz matriz1)
{
   this->matriz1=matriz1;
}


void Operacion::generar()
{
	srand(time(NULL));
	//Rand para matriz 1
	int i, j;
	for (i = 0; i < matriz1.getFila_(); i++)
		for (j = 0; j < matriz1.getColumna_(); j++)
			*(*(matriz1.getMatriz_() + i) + j) = rand() % (100-0);
}

void Operacion::imprimir_(void)
{
	cout<<endl<<endl;
	cout<<"Matriz "<<endl<<endl;
   for(int i =0;i<matriz1.getFila_();i++){
			for(int j=0;j<matriz1.getColumna_();j++){
				cout<<"  "<<*(*(matriz1.getMatriz_()+i)+j);
			}
			cout<<endl; 
		}	
	cout<<endl<<endl;
	
} 
void Operacion::guardar(){
	int **matriz;	
	*matriz=(int*)calloc(2,sizeof(int*));
}



