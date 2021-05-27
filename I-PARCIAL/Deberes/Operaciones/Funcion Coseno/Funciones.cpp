#include "Funciones.h"
#include <math.h>

Funciones::Funciones(double _value){
	value=_value;
}

double Funciones::setValue(double _value){
	value=_value;
}
double Funciones::getValue(){
	return value;
}

//Funcion Factorial
double Funciones::Fact(double number){
	double result=1; 
	for(int i=number;i>=1;i--){
		result=result*i;
	}
	return result;
	
}
//Funcion Calcular coseno
double Funciones::CalculateCos(double angle){
	return potenciaNumero(-1,value)*potenciaNumero(angle,2*value)/Fact(2*value);
}
//Funcion potencia de un numero
double Funciones::potenciaNumero(double numero, double potencia){
	double res=1;
    for(int i=0;i<potencia;i++){
    	res=res*numero;
	}
    return res;
   
}

