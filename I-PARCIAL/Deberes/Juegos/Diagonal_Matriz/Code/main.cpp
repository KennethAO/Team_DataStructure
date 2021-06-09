#include <iostream>
#include "Operacion.h"

using namespace std; 
int main(int argc, char** argv) {
	int dimension;
	cout<<"Ingrese la dimension de su matriz: ";
	cin>>dimension;
	Matriz matriz(dimension, dimension);
	Operacion operacion(matriz);
	operacion.segmentar();
	operacion.generar();
	operacion.imprimir();
	operacion.procesar(matriz);
	
	
	cout<<endl;
	system("pause");
	return 0;	
	
	return 0;
}
