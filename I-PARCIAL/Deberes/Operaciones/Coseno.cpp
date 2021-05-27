#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int fact(int t){
	int F=1;
	for(int i=1;i<=t;i++){
		F=F*i;
	}
	return F;
}

int main(){
	int n;
	float x;
	cout<<"Digite el numero de terminos: ";
	cin>>n;
	cout<<"Digite el valor del angulo: ";
	cin>>x;
	double cos=0;
	for(int m=0;m<n;m++){
		cos=cos+pow(-1,m)*pow(x,2*m)/fact(2*m);
	}
	
	cout<<"El valor del coseno es: "<<cos;
}
