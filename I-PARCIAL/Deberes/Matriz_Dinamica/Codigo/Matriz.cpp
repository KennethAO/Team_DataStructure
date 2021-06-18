
#include "Matriz.h"


int Matriz::getFila_(void)
{
   return fila_;
}


void Matriz::setFila_(int newFila_)
{
   fila_ = newFila_;
}

int Matriz::getColumna_(void)
{
   return columna_;
}

void Matriz::setColumna_(int newColumna_)
{
   columna_ = newColumna_;
}


int **Matriz::getMatriz_(void){
	return matriz;
}



void Matriz::setMatriz_(int **newMatriz_){
	matriz = newMatriz_;
}



Matriz::Matriz(int _fila, int _columna)
{
   fila_ = _fila;
   columna_ = _columna; 
}



