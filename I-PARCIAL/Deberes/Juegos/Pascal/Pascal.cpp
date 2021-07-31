#include "Pascal.h"
#include <iostream>

using namespace std; 

float Pascal::factorial(float n){
	if(n<1)
		return 1;
	else 
		return n*factorial(n-1);
}

float Pascal::combinacion(float n,int k){
	return (factorial(n))/(factorial(k)*factorial(n-k));
}

int Pascal::getNumA(){
	return this->numA;
}
void Pascal::setNumA(int _numA){
	this->numA=_numA;
}
Pascal::Pascal(int _numA){
	this->numA = _numA;
}
void Pascal::imprimir(){
	for(int i=0;i<=this->numA;i++){	
	 	cout<<"\t";	
		for(int j=0;j<=i;j++){
			cout<<combinacion(i,j)<<" ";
		}
		cout<<"\n";
	}
}
	
	
	
