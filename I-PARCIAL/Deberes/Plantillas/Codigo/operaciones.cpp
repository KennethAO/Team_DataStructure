#include "operaciones.h"
#include<iostream>
using namespace std;

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
 * @date 2021-06-17
 * @copyright Copyright (c) 2021
 */
 
/**
 * @brief Operacion de Suma de datos.
 * 
 * @tparam tipoDato 
 * @return tipoDato 
 */
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::sumar(){
	return valor1+valor2;
}

/**
 * @brief Operacion de resta de datos.
 * 
 * @tparam tipoDato 
 * @return tipoDato 
 */
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::restar(){
	return valor1-valor2;
}

/**
 * @brief Operacion de multiplicar datos.
 * 
 * @tparam tipoDato 
 * @return tipoDato 
 */
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::multiplicar(){
	return valor1*valor2;
}

/**
 * @brief Operacion de dividir datos.
 * 
 * @tparam tipoDato 
 * @return tipoDato 
 */
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::dividir(){
	if(valor2 == 0){
		cout<<"No se puede dividir para 0, se pondra el valor 0"<<endl; 
	}else{
		return valor1 / valor2;
	}
}
