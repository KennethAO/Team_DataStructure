#include <iostream>

/*
@author Brayan Patiño
*/

using namespace std;

//FUNCION RAIZ CUADRADA
double squareRoot(double a){
	double remainder;
	double i=0;
	do{
		i+=0.000001;
		remainder=i*i;		
	}while(a>=remainder);
	return i;
}


//VERIFICACION DE QUE FUNCIONA LA FUNCION
using namespace std;
int main(int argc, char** argv) {
	
	cout << "LA RAIZ CUADRADA ES: "<<squareRoot(200)<<endl;
}
