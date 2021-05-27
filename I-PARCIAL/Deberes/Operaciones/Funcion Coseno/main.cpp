#include<iostream>
#include"Funciones.cpp"
using namespace std;

int main(){
	double angulo,n;
	cout<<"Ingrese el valor del angulo: ";
	cin>>angulo;
	cout<<"Ingrese el valor del n para las operaciones: ";
	cin>>n;
	
	Funciones funciones(n);
	cout<<"COSENO es: "<<funciones.CalculateCos(angulo)<<endl;
	
	
	system("pause");
	return 0;
}
