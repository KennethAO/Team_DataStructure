#include<iostream>
#include<stdlib.h>
#include"Operacion.cpp"

using namespace std;

int main(){
	
	int **mat;
	Matriz matriz1(2,2);
	
	Operacion operacion(matriz1);
	operacion.segmentar();
	
	
	operacion.generar();
	operacion.procesar(3);
	
	operacion.imprimir_();
	system("pause");
	return 0;
}
