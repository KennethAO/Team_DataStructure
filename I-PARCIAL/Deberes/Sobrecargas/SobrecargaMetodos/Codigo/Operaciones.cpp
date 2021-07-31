/**
 * "Universidad de las Fuerzas Armadas ESPE"
 * @file Principal.cpp
 * @author Kenneth Andrade (koandrade@espe.edu.ec.)
 * @author Rafael Buse (rebuse@espe.edu.ec)
 * @author David Calvopiña (ldvalvopina@espe.edu.ec)
 * @author Nicolas Hidrobo (anhidrobo@espe.edu.ec)
 * @author Henry Tiamba (hatiamba@espe.edu.ec)
 * @author Bryan Pariño (baclavon@espe.edu.ec)
 * @brief Sobrecarga de Métodos en Operaciones Matemáticas C++
 * @version 0.2
 * @date 2021-05-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Operaciones.h"


/**
 * @brief esta funcion retorna el valor sumado 0
 * 
 * @tparam T 
 * @param valor1 
 * @return T 
 */
template <typename T>
T Operaciones <T> :: sumar (T valor1) {
	return valor1;
}

/**
 * @brief Esta funcion retorna la suma de dos valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @return T 
 */
template <typename T>
T Operaciones <T> :: sumar (T valor1, T valor2) {
	return valor1 + valor2;
}

/**
 * @brief Esta funcion retorna la suma de tres valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @return T 
 */
template<typename T>
T Operaciones <T> :: sumar (T valor1, T valor2, T valor3) {
	return valor1 + valor2 + valor3;
}

/**
 * @brief Esta funcion retorna la suma de cuatro valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @param valor4 
 * @return T 
 */
template <typename T>
T Operaciones <T> :: sumar (T valor1, T valor2, T valor3, T valor4) {
	return valor1 + valor2 + valor3 + valor4;
}

/**
 * @brief Esta funcion retorna la suma de cinco valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @param valor4 
 * @param valor5 
 * @return T 
 */
template <typename T>
T Operaciones <T> :: sumar (T valor1, T valor2, T valor3, T valor4, T valor5) {
	return valor1 + valor2 + valor3 + valor4 + valor5;
}


/**
 * @brief Esta funcion retorna la suma de seis valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @param valor4 
 * @param valor5 
 * @param valor6 
 * @return T 
 */
template <typename T>
T Operaciones <T> :: sumar (T valor1, T valor2, T valor3, T valor4, T valor5, T valor6) {
	return valor1 + valor2 + valor3 + valor4 + valor5 + valor6;
}

/**
 * @brief Esta funcion retorna la resta de un valor + 0
 * 
 * @tparam T 
 * @param valor1 
 * @return T 
 */
template <typename T>
T Operaciones <T> :: restar (T valor1) {
	return valor1;
}

/**
 * @brief Esta funcion retorna la resta de dos valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @return T 
 */
template <typename T>
T Operaciones <T> :: restar (T valor1, T valor2) {
	return valor1-valor2;
}

/**
 * @brief Esta funcion retorna la resta de tres valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @return T 
 */
template <typename T>
T Operaciones <T> :: restar (T valor1, T valor2, T valor3) {
	return valor1-valor2-valor3;
}


/**
 * @brief Esta funcion retorna la resta de cuatro valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @param valor4 
 * @return T 
 */
template <typename T>
T Operaciones <T> :: restar (T valor1, T valor2, T valor3, T valor4) {
	return valor1-valor2-valor3-valor4;
}


/**
 * @brief Esta funcion retorna la resta de cinco valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @param valor4 
 * @param valor5 
 * @return T 
 */
template <typename T>
T Operaciones <T> :: restar (T valor1, T valor2, T valor3, T valor4, T valor5) {
	return valor1-valor2-valor3-valor4-valor5;
}


/**
 * @brief Esta funcion retorna la resta de seis valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @param valor4 
 * @param valor5 
 * @param valor6 
 * @return T 
 */
template <typename T>
T Operaciones <T> :: restar (T valor1, T valor2, T valor3, T valor4, T valor5,T valor6) {
	return valor1-valor2-valor3-valor4-valor5-valor6;
}


/**
 * @brief Esta funcion retorna la multiplicacion de un valor por 1
 * 
 * @tparam T 
 * @param valor1 
 * @return T 
 */
template <typename T>
T Operaciones <T>::multiplicar (T valor1) {
	return valor1;
}


/**
 * @brief Esta funcion retorna la multiplicacion de dos valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @return T 
 */
template <typename T>
T Operaciones <T>::multiplicar (T valor1, T valor2) {
	return valor1 * valor2;
}


/**
 * @brief Esta funcion retorna la multiplicacion de tres valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @return T 
 */
template <typename T>
T Operaciones <T>::multiplicar (T valor1, T valor2, T valor3) {
	return valor1 * valor2 * valor3;
}


/**
 * @brief Esta funcion retorna la multiplicacion de cuatro valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @param valor4 
 * @return T 
 */
template <typename T>
T Operaciones <T>::multiplicar (T valor1, T valor2, T valor3, T valor4) {
	return valor1 * valor2 * valor3* valor4;
}


/**
 * @brief Esta funcion retorna la multiplicacion de cinco valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @param valor4 
 * @param valor5 
 * @return T 
 */
template <typename T>
T Operaciones <T>::multiplicar (T valor1, T valor2, T valor3, T valor4 , T valor5 ) {
	return valor1 * valor2 * valor3 * valor4 * valor5;
}


/**
 * @brief Esta funcion retorna la multiplicacion de seis valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @param valor4 
 * @param valor5 
 * @param valor6 
 * @return T 
 */
template <typename T>
T Operaciones <T> :: multiplicar (T valor1, T valor2, T valor3, T valor4, T valor5, T valor6) {
	return valor1 * valor2 * valor3 * valor4 * valor5 * valor6;
}

/**
 * @brief Esta funncion retorna un numero mayor
 * 
 * @tparam T 
 * @param valor1 
 * @return T 
 */
template <typename T>
T Operaciones <T> :: calcularMayor (T valor1) {
	return valor1;
}

/**
 * @brief Esta funncion retorna el numero mayo entre dos valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @return T 
 */
template <typename T>
T Operaciones <T> :: calcularMayor (T valor1, T valor2) {
	if (valor1>=valor2) {
		return valor1;
	} else {
		return valor2;
	}
}


/**
 * @brief Esta funncion retorna el numero mayo entre tres valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @return T 
 */
template <typename T>
T Operaciones <T> :: calcularMayor (T valor1, T valor2, T valor3) {
	int mayor; 
	T numeros[3];
	numeros[0]=valor1;
	numeros[1]=valor2;
	numeros[2]=valor3;
	for(int i=0;i<3;i++){
		if(i==0){
			mayor = numeros[i];
		}
		else{
			if(numeros[i]>mayor){
				mayor = numeros[i];
			}
		}
	}
	return mayor; 	
}


/**
 * @brief Esta funncion retorna el numero mayo entre cuatro valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @param valor4 
 * @return T 
 */
template <typename T>
T Operaciones<T>::calcularMayor(T valor1, T valor2, T valor3, T valor4) {
	int mayor; 
	T numeros[4];
	numeros[0]=valor1;
	numeros[1]=valor2;
	numeros[2]=valor3;
	numeros[3]=valor4;
	for(int i=0;i<4;i++){
		if(i==0){
			mayor = numeros[i];
		}
		else{
			if(numeros[i]>mayor){
				mayor = numeros[i];
			}
		}
	}
	return mayor; 
}

/**
 * @brief Esta funncion retorna el numero mayo entre cinco valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @param valor4 
 * @param valor5 
 * @return T 
 */
template <typename T>
T Operaciones<T>::calcularMayor (T valor1, T valor2, T valor3, T valor4, T valor5) {
	int mayor; 
	T numeros[5];
	numeros[0]=valor1;
	numeros[1]=valor2;
	numeros[2]=valor3;
	numeros[3]=valor4;
	numeros[4]=valor5;
	for(int i=0;i<5;i++){
		if(i==0){
			mayor = numeros[i];
		}
		else{
			if(numeros[i]>mayor){
				mayor = numeros[i];
			}
		}
	}
	return mayor; 
}


/**
 * @brief Esta funncion retorna el numero mayo entre seis valores
 * 
 * @tparam T 
 * @param valor1 
 * @param valor2 
 * @param valor3 
 * @param valor4 
 * @param valor5 
 * @param valor6 
 * @return T 
 */
template <typename T>
T Operaciones<T>::calcularMayor(T valor1,T valor2,T valor3,T valor4,T valor5,T valor6){
	int mayor; 
	T numeros[6];
	numeros[0]=valor1;
	numeros[1]=valor2;
	numeros[2]=valor3;
	numeros[3]=valor4;
	numeros[4]=valor5;
	numeros[5]=valor6;
	for(int i=0;i<6;i++){
		if(i==0){
			mayor = numeros[i];
		}
		else{
			if(numeros[i]>mayor){
				mayor = numeros[i];
			}
		}
	}
	return mayor; 
}




	
