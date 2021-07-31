#pragma once

#include "Matriz.h"
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<iostream>

using namespace std;

class Operacion
{
public:
	Matriz getMatriz1(void);
	void setMatriz1(Matriz newMatriz1);
	Matriz getMatrizR(void);
	void setMatrizR(Matriz newMatrizR);
	Matriz getMatrizAux(void);
	void setMatrizAux(Matriz newMatrizAux);
	Operacion(Matriz matriz1);
	void segmentar(void);
	Operacion() = default;
	void generar(void);
	void encerar(Matriz _matriz);
	void procesar(int exponente);
	void imprimir_(void);
protected:

private:
	Matriz matriz1;
	Matriz matrizR;
	Matriz matrizAux;

};



Matriz Operacion::getMatriz1(void)
{
	return matriz1;
}



void Operacion::setMatriz1(Matriz newMatriz1)
{
	matriz1 = newMatriz1;
}


Matriz Operacion::getMatrizR(void)
{
	return matrizR;
}


void Operacion::setMatrizR(Matriz newMatrizR)
{
	matrizR = newMatrizR;
}



void Operacion::setMatrizAux(Matriz newMatrizAux) {
	matrizAux = newMatrizAux;
}



Matriz Operacion::getMatrizAux(void) {
	return matrizAux;
}



Operacion::Operacion(Matriz matriz1)
{
	this->matriz1 = matriz1;
}


void Operacion::generar()
{
	srand(time(NULL));
	//Rand para matriz 1
	int i, j;
	for (i = 0; i < matriz1.getFila_(); i++)
		for (j = 0; j < matriz1.getColumna_(); j++)
			*(*(matriz1.getMatriz_() + i) + j) = rand() % (10 - 0);
}



void Operacion::encerar(Matriz _matriz)
{
	for (int i = 0; i < _matriz.getFila_(); i++) {
		for (int j = 0; j < _matriz.getColumna_(); j++) {
			*(*(_matriz.getMatriz_() + i) + j) = 0;
		}
	}
}



void Operacion::procesar(int exponente)
{
	if (matriz1.getFila_() == matriz1.getColumna_()) {
		for (int i = 0; i < matriz1.getFila_(); i++) {
			for (int j = 0; j < matriz1.getColumna_(); j++) {
				*(*(matrizAux.getMatriz_() + i) + j) = *(*(matriz1.getMatriz_() + i) + j);
			}
		}

		for (int z = 0; z < exponente - 1; z++) {
			for (int i = 0; i < matriz1.getFila_(); i++) {
				for (int j = 0; j < matriz1.getColumna_(); j++) {
					*(*(matrizR.getMatriz_() + i) + j) = 0;
					for (int k = 0; k < matriz1.getFila_(); k++) {
						*(*(matrizR.getMatriz_() + i) + j) += ((*(*(matriz1.getMatriz_() + i) + k)) * (*(*(matrizAux.getMatriz_() + k) + j)));
					}
				}
			}
			for (int a = 0; a < matriz1.getFila_(); a++) {
				for (int b = 0; b < matriz1.getFila_(); b++) {
					*(*(matrizAux.getMatriz_() + a) + b) = *(*(matrizR.getMatriz_() + a) + b);
				}
			}

		}
	}
	else {
		cout << "No se puede elevar la matriz porque su numero de filas y columnas no es el mismo" << endl;
	}
}


void Operacion::imprimir_(void)
{
	cout << endl << endl;
	cout << "Matriz " << endl << endl;
	for (int i = 0; i < matriz1.getFila_(); i++) {
		for (int j = 0; j < matriz1.getColumna_(); j++) {
			cout << "  " << *(*(matriz1.getMatriz_() + i) + j);
		}
		cout << endl;
	}
	cout << endl << endl;
	cout << "Matriz elevada" << endl << endl;
	for (int i = 0; i < matrizR.getFila_(); i++) {
		for (int j = 0; j < matrizR.getColumna_(); j++) {
			cout << "  " << *(*(matrizR.getMatriz_() + i) + j);
		}
		cout << endl;
	}
}



void Operacion::segmentar()
{
	int** matriz, j;

	matriz = (int**)malloc(matriz1.getFila_() * sizeof(int*));
	for (j = 0; j < matriz1.getFila_(); j++)
		*(matriz + j) = (int*)malloc(matriz1.getColumna_() * sizeof(int));
	matriz1.setMatriz_(matriz);
	encerar(matriz1);

	if (matriz1.getFila_() == matriz1.getColumna_()) {
		int** matrizRes;
		matrizR.setFila_(matriz1.getFila_());
		matrizR.setColumna_(matriz1.getColumna_());
		matrizRes = (int**)malloc(matrizR.getFila_() * sizeof(int*));
		for (j = 0; j < matrizR.getFila_(); j++)
			*(matrizRes + j) = (int*)malloc(matrizR.getColumna_() * sizeof(int));
		matrizR.setMatriz_(matrizRes);
		encerar(matrizR);

		int** matAux;
		matrizAux.setFila_(matriz1.getFila_());
		matrizAux.setColumna_(matriz1.getColumna_());
		matAux = (int**)malloc(matrizAux.getFila_() * sizeof(int*));
		for (j = 0; j < matrizAux.getFila_(); j++)
			*(matAux + j) = (int*)malloc(matrizAux.getColumna_() * sizeof(int));
		matrizAux.setMatriz_(matAux);
		encerar(matrizAux);
	}
}
