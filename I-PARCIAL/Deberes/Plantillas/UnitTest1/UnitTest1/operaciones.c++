#pragma once
#include "operaciones.h"
#include<iostream>
using namespace std;


template <typename tipoDato>
tipoDato Operaciones<tipoDato>::sumar() {
	return valor1 + valor2;
}

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::restar() {
	return valor1 - valor2;
}

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::multiplicar() {
	return valor1 * valor2;
}

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::dividir() {
	if (valor2 == 0) {
		cout << "No se puede dividir para 0, se pondra el valor 0" << endl;
	}
	else {
		return valor1 / valor2;
	}
}
