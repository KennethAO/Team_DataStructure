#include "Functions.h"

Functions::Functions(long double _value){
	value = _value; 
}
void Functions::setValue(long double _value){
	value = _value;
}
long double Functions::getValue() {
	return value;
}
long double Functions::calculateTan(long double angle){
	long double sen=0;
	for(int i=0;i<value;i++){
			sen = sen + powerNumber(-1,i)*powerNumber(angle,2*i+1)/factorialNumber(2*i+1);
	}
	cout<<"Valor seno = "<<sen<<endl;
	long double cos=0;
	for(int i=0;i<value;i++){
			cos = cos + powerNumber(-1,i)*powerNumber(angle,2*i)/factorialNumber(2*i);
	}
	cout<<"Valor coseno = "<<cos<<endl;
	return sen/cos;
}
long double Functions::powerNumber(long double numero, long double potencia){
   long double res = 1;
   for(int i=0;i<potencia;i++){
   	res = res*numero;
   }
   return res;
}
long double Functions::factorialNumber(long double number){
	long double result=1;
	for(int i=number;i>=1;i--){
		result = result*i;
	}
	return result;
}


