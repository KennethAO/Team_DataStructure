#include "Operaciones.h"


// suma
template <typename T>
T Operaciones <T> :: sumar (T valor1) {
	return valor1;
}

template <typename T>
T Operaciones <T> :: sumar (T valor1, T valor2) {
	return valor1 + valor2;
}

template<typename T>
T Operaciones <T> :: sumar (T valor1, T valor2, T valor3) {
	return valor1 + valor2 + valor3;
}

template <typename T>
T Operaciones <T> :: sumar (T valor1, T valor2, T valor3, T valor4) {
	return valor1 + valor2 + valor3 + valor4;
}

template <typename T>
T Operaciones <T> :: sumar (T valor1, T valor2, T valor3, T valor4, T valor5) {
	return valor1 + valor2 + valor3 + valor4 + valor5;
}

template <typename T>
T Operaciones <T> :: sumar (T valor1, T valor2, T valor3, T valor4, T valor5, T valor6) {
	return valor1 + valor2 + valor3 + valor4 + valor5 + valor6;
}



// restar
template <typename T>
T Operaciones <T> :: restar (T valor1) {
	return valor1;
}

template <typename T>
T Operaciones <T> :: restar (T valor1, T valor2) {
	return valor1-valor2;
}

template <typename T>
T Operaciones <T> :: restar (T valor1, T valor2, T valor3) {
	return valor1-valor2-valor3;
}

template <typename T>
T Operaciones <T> :: restar (T valor1, T valor2, T valor3, T valor4) {
	return valor1-valor2-valor3-valor4;
}

template <typename T>
T Operaciones <T> :: restar (T valor1, T valor2, T valor3, T valor4, T valor5) {
	return valor1-valor2-valor3-valor4-valor5;
}

template <typename T>
T Operaciones <T> :: restar (T valor1, T valor2, T valor3, T valor4, T valor5,T valor6) {
	return valor1-valor2-valor3-valor4-valor5-valor6;
}


// multiplicador
template <typename T>
T Operaciones <T>::multiplicar (T valor1) {
	return valor1;
}

template <typename T>
T Operaciones <T>::multiplicar (T valor1, T valor2) {
	return valor1 * valor2;
}

template <typename T>
T Operaciones <T>::multiplicar (T valor1, T valor2, T valor3) {
	return valor1 * valor2 * valor3;
}

template <typename T>
T Operaciones <T>::multiplicar (T valor1, T valor2, T valor3, T valor4) {
	return valor1 * valor2 * valor3* valor4;
}

template <typename T>
T Operaciones <T>::multiplicar (T valor1, T valor2, T valor3, T valor4 , T valor5 ) {
	return valor1 * valor2 * valor3 * valor4 * valor5;
}

template <typename T>
T Operaciones <T> :: multiplicar (T valor1, T valor2, T valor3, T valor4, T valor5, T valor6) {
	return valor1 * valor2 * valor3 * valor4 * valor5 * valor6;
}




// calcular mayor
template <typename T>
T Operaciones <T> :: calcularMayor (T valor1) {
	return valor1;
}

template <typename T>
T Operaciones <T> :: calcularMayor (T valor1, T valor2) {
	if (valor1>=valor2) {
		return valor1;
	} else {
		return valor2;
	}
}

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




	
