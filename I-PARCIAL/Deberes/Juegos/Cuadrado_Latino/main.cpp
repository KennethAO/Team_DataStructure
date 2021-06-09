#include <iostream>
#include "Latin_Square.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

	int dim,i,j,k,p=0,m=0;
	cout<<"Ingrese la dimension del cuadrado latino:"<<endl;
	cin>> dim;
	Latin_Square matrix;
	matrix.validate(dim);

	k=dim;
    matrix.generate_square(dim);



    return 0;
	}

