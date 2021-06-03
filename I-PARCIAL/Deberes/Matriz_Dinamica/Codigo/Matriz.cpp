/***********************************************************************
 * Module:  Matriz.cpp
 * Author:  Equipo
 * Modified: miércoles, 2 de junio de 2021 15:46:42
 * Purpose: Implementation of the class Matriz
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
// Name:       Matriz::Matriz(int _fila, int _columna)
// Purpose:    Implementation of Matriz::Matriz()
// Parameters:
// - _fila
// - _columna
// Return:     
////////////////////////////////////////////////////////////////////////

int **Matriz::getMatriz_(void){
	return matriz;
}
void Matriz::setMatriz_(int **newMatriz_){
	matriz=newMatriz_;
}




Matriz::Matriz(int _fila, int _columna)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::~Matriz()
// Purpose:    Implementation of Matriz::~Matriz()
// Return:     
////////////////////////////////////////////////////////////////////////

/*Matriz::~Matriz()
{
   // TODO : implement
}*/
