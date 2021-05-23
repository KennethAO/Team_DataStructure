#include "Operaciones.h"



template <typename T>
T Operaciones<T>::sumar(T valor1, T valor2){
	return valor1+valor2;
}

template <typename T>
T Operaciones<T>::sumar(T valor1, T valor2,T valor3, T valor4){
	return valor1+valor2+valor3+valor4;
}

template <typename T>
T Operaciones<T>::restar(T valor1, T valor2){
	return valor1-valor2;
}

template <typename T>
T Operaciones<T>::restar(T valor1, T valor2,T valor3, T valor4,T valor5, T valor6){
	return valor1-valor2-valor3-valor4-valor5-valor6;
}

template <typename T>
T Operaciones<T>::multiplicar(T valor1){
	return valor1;
}

template <typename T>
T Operaciones<T>::multiplicar(T valor1, T valor2){
	return valor1*valor2;
}

template <typename T>
T Operaciones<T>::calcularMayor(T valor1, T valor2){
	if(valor1>=valor2){
		return valor1;
	}else{
		return valor2;
	}
}



