/***********************************************************************
 * Module:  main.cpp
 * Author:  Kenneth
 * Modified: martes, 8 de junio de 2021 13:37:23
 * Purpose: Declaration of the main
 ***********************************************************************/
#include <iostream>
#include "Operations.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int **mat1;
	int dim;
	cout<<"Ingrese una dimension para su matriz: "<<endl;
	cin>>dim;
	Matrix matrix(mat1,dim);
	Operations operations(matrix);
	operations.segment();
	cout<<"Su matriz encerada es: "<<endl; 
	operations.wax();
	operations.print();
	cout<<"Su matriz randomica es: "<<endl; 
	operations.generate();
	operations.print();
	cout<<"Su matriz identidad es: "<<endl;
	operations.process();
	operations.print();
	return 0;
}
