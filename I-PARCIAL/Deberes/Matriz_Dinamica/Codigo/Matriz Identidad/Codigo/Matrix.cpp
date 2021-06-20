/***********************************************************************
 * Module:  Matrix.cpp
 * Author:  Kenneth
 * Modified: martes, 8 de junio de 2021 13:37:38
 * Purpose: Implementation of the class Matrix
 ***********************************************************************/

#include "Matrix.h"

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::Matrix(int _matrix, int _rows, int _columns)
// Purpose:    Implementation of Matrix::Matrix()
// Parameters:
// - _matrix
// - _rows
// - _columns
// Return:     
////////////////////////////////////////////////////////////////////////

Matrix::Matrix(int **_matrix, int _dim)
{
   matrix = _matrix;
   dim = _dim;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::~Matrix()
// Purpose:    Implementation of Matrix::~Matrix()
// Return:     
////////////////////////////////////////////////////////////////////////

Matrix::~Matrix()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::get__matrix()
// Purpose:    Implementation of Matrix::get__matrix()
// Return:     int
////////////////////////////////////////////////////////////////////////

int** Matrix::getMatrix(void)
{
   return matrix;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::set__matrix(int new__matrix)
// Purpose:    Implementation of Matrix::set__matrix()
// Parameters:
// - new__matrix
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matrix::setMatrix(int **new_matrix)
{
   matrix = new_matrix;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::getRows()
// Purpose:    Implementation of Matrix::getRows()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Matrix::getDim(void)
{
   return dim;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::setRows(int newRows)
// Purpose:    Implementation of Matrix::setRows()
// Parameters:
// - newRows
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matrix::setDim(int newDim)
{
   dim = newDim;
}

