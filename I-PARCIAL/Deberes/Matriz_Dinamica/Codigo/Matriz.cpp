/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  main.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: miércoles, 2 de junio de 2021 15:46:42
 * Purpose: Declaration of the prototypes of the fuction Matriz
 ***********************************************************************/

#include "Matriz.h"

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::getFila_()
// Purpose:    Implementation of Matriz::getFila_()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Matriz::getFila_(void)
{
   return fila_;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::setFila_(int newFila_)
// Purpose:    Implementation of Matriz::setFila_()
// Parameters:
// - newFila_
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::setFila_(int newFila_)
{
   fila_ = newFila_;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::getColumna_()
// Purpose:    Implementation of Matriz::getColumna_()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Matriz::getColumna_(void)
{
   return columna_;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::setColumna_(int newColumna_)
// Purpose:    Implementation of Matriz::setColumna_()
// Parameters:
// - newColumna_
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::setColumna_(int newColumna_)
{
   columna_ = newColumna_;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::getMatriz_(int newColumna_)
// Purpose:    Implementation of Matriz::getMatriz()
// Parameters:
// -
// Return:     int
////////////////////////////////////////////////////////////////////////

int **Matriz::getMatriz_(void){
	return matriz;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::setMatriz_(int newColumna_)
// Purpose:    Implementation of Matriz::setMatriz()
// Parameters:
// - 
// Return:     int
////////////////////////////////////////////////////////////////////////

void Matriz::setMatriz_(int **newMatriz_){
	matriz = newMatriz_;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::Matriz(int _fila, int _columna)
// Purpose:    Implementation of Matriz::Matriz()
// Parameters:
// - _fila
// - _columna
// Return:     
////////////////////////////////////////////////////////////////////////

Matriz::Matriz(int _fila, int _columna)
{
   fila_ = _fila;
   columna_ = _columna; 
}



