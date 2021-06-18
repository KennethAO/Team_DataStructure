/**
 * "Universidad de las Fuerzas Armadas ESPE"
 * @file main.cpp
 * @author Kenneth Andrade (koandrade@espe.edu.ec.)
 * @author Rafael Buse (rebuse@espe.edu.ec)
 * @author David CalvopiÃ±a (ldvalvopina@espe.edu.ec)
 * @author Nicolas Hidrobo (anhidrobo@espe.edu.ec)
 * @author Henry Tiamba (hatiamba@espe.edu.ec)
 * @author Bryan PariÃ±o (baclavon@espe.edu.ec)
 * @brief Funciones con operaciones matematicas
 * @version 0.1
 * @date 2021-05-27
 * @copyright Copyright (c) 2021
 * 
 */
#include "Functions.h"
/**
 * @brief Constructor de la clase Functions
 * 
 * @param _value 
 */
Functions::Functions(long double _value){
	value = _value; 
}
/**
 * @brief Setter de value
 * 
 * @param _value 
 */
void Functions::setValue(long double _value){
	value = _value;
}
/**
 * @brief Getter de value
 * 
 * @return long double 
 */
long double Functions::getValue() {
	return value;
}
/**
 * @brief Esta función retorna la raiz cuadrada de un numero
 * 
 * @param val 
 * @return double 
 */
double Functions::squareRoot(double val){
	double remainder;
	double i=0;
	do{
		i+=0.000001;
		remainder=i*i;		
	}while(val>=remainder);
	return i;
}
/**
 * @brief Esta función retorna el seno de un angulo
 * 
 * @param angle 
 * @return long double 
 */
long double Functions::calculateSin(double angle){
	long double result = 0;
	for(int i = 0;i<200;i++){
		result = result + (powerNumber(-1,i)/factorialNumber(2*i+1))*powerNumber(angle,2*i+1);
	}
	return result;
}
/**
 * @brief Esta función retorna el valor de PI
 * 
 * @param epsilon 
 * @return double 
 */

double Functions::calculatePi(double epsilon){
    double pi=0;
    int i=0;
    int limit=100000;
    double num,den , term, fault=1.0;

    while (fault > epsilon && i<limit){
        num = sign (i)*4.0;
        den = 2*i+1;
        term = num/den;
        pi= pi + term;
        if(term<0){
        	term = -term;
		}
        fault = term;
        i++;
    }
    return pi;
}
/**
 * @brief Esta función retorna un valor positivo o negativo del modulo
 * 
 * @param i 
 * @return int 
 */
int Functions::sign(int i){
    if (i%2)
        return -1;
    else{
        return 1;
    }
}
/**
 * @brief Esta funcion calcula el coseno de un angulo
 * 
 * @param angle 
 * @return long double 
 */
long double Functions::calculateCos(long double angle){
	long double cos=0;
	for(int m=0;m<value;m++){
		cos=cos+(powerNumber(-1,m)*(powerNumber(angle,2*m)/factorialNumber(2*m)));
	}
	return cos;
}
/**
 * @brief Esta funcion retorna la tangente de un angulo
 * 
 * @param angle 
 * @return long double 
 */
long double Functions::calculateTan(long double angle){
	long double sen=0;
	for(int i=0;i<value;i++){
			sen = sen + powerNumber(-1,i)*powerNumber(angle,2*i+1)/factorialNumber(2*i+1);
	}
	long double cos=0;
	for(int i=0;i<value;i++){
			cos = cos + powerNumber(-1,i)*powerNumber(angle,2*i)/factorialNumber(2*i);
	}
	return sen/cos;
}
/**
 * @brief Esta funcion retorna la cotangente de un angulo
 * 
 * @param angle 
 * @return long double 
 */

long double Functions::calculateCotan(long double angle){
	long double sen=0;
	for(int i=0;i<value;i++){
			sen = sen + powerNumber(-1,i)*powerNumber(angle,2*i+1)/factorialNumber(2*i+1);
	}
	long double cos=0;
	for(int i=0;i<value;i++){
			cos = cos + powerNumber(-1,i)*powerNumber(angle,2*i)/factorialNumber(2*i);
	}
	return cos/sen;
}
/**
 * @brief Esta funcion retorna un numero elevado a una potencia
 * 
 * @param numero 
 * @param potencia 
 * @return long double 
 */
long double Functions::powerNumber(long double num, long double power){
   long double res = 1;
   if(power==0){
   	return res;
   }
   for(int i=0;i<power;i++){
   	res = res*num;
   }
   return res;
}
/**
 * @brief Esta funcion retorna el factorial de un numero
 * 
 * @param number 
 * @return long double 
 */
long double Functions::factorialNumber(long double number){
	long double result=1;
	for(int i=number;i>=1;i--){
		result = result*i;
	}
	return result;
}


