#include<iostream>
#include<stdlib.h>
#include"Operacion.h"

using namespace std;

int main(){
	
		
	int **mat,dimension;	
	cout<<"Ingrese una dimension para su matriz: ";
	cin>>dimension;
	Matriz matriz1(dimension,dimension);
	Operacion operacion(matriz1);
	//operacion.segmentar();
	operacion.generar();
	cout<<endl; 
	operacion.imprimir_();
	cout<<endl;
	system("pause");
	return 0;
}
