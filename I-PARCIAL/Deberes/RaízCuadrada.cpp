#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;


double raizCuadrada(double a){
	double res;
	double i=0;
	do{
		i=i+0.000001;
		res=i*i;		
	}while(a>=res);
	return i;
}

using namespace std;
int main(int argc, char** argv) {
	cout<<"HOLA MUNDO"<<endl;
	double a, total;
	a=50;
	cout << "LA RAIZ CUADRADA ES: "<<raizCuadrada(a)<<endl;
}
