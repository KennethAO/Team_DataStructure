#include<iostream>
#include<stdlib.h>
#include"Operacion.cpp"

using namespace std;

int main(){
	
	Matriz matriz1(4,5);
	Matriz matriz2(5,4);
	
	Operacion operacion(matriz1,matriz2);
	operacion.generar();
	
	
	system("pause");
	return 0;
}
