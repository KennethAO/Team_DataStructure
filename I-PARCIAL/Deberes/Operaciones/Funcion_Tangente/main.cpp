#include <iostream>
#include "Functions.cpp"
#include <math.h>

using namespace std; 

int main(){
	
	long double angle,n;
	cout<<"Ingrese el angulo: ";
	cin>>angle;
	cout<<"Ingrese el n: ";
	cin>>n;
	
	cout<<"Seno: "<<sin(45)<<endl;
	cout<<"Coseno: "<<cos(45)<<endl;
	cout<<"Tangente: "<<tan(45)<<endl;
	cout<<endl<<endl;
	cout<<"-------------"<<endl;
	
	Functions functions(n);
	cout<<functions.calculateTan(angle);
	
	
	return 0;
}
