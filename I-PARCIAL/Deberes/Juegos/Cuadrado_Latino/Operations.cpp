/***********************************************************************
 * Module:  Latin_Square.cpp
 * Author:  ariel
 * Modified: martes, 8 de junio de 2021 19:46:58
 * Purpose: Implementation of the class Latin_Square
 ***********************************************************************/
#include <iostream>
#include "Latin_Square.h"

////////////////////////////////////////////////////////////////////////
// Name:       Latin_Square::getDim()
// Purpose:    Implementation of Latin_Square::getDim()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Latin_Square::getDim(void)
{
   return dim;
}

////////////////////////////////////////////////////////////////////////
// Name:       Latin_Square::setDim(int newDim)
// Purpose:    Implementation of Latin_Square::setDim()
// Parameters:
// - newDim
// Return:     void
////////////////////////////////////////////////////////////////////////

void Latin_Square::setDim(int newDim)
{
   dim = newDim;
}

////////////////////////////////////////////////////////////////////////
// Name:       Latin_Square::getMatrix()
// Purpose:    Implementation of Latin_Square::getMatrix()
// Return:     int**
////////////////////////////////////////////////////////////////////////

int** Latin_Square::getMatrix(void)
{
   return matrix;
}

////////////////////////////////////////////////////////////////////////
// Name:       Latin_Square::setMatrix(int** newMatrix)
// Purpose:    Implementation of Latin_Square::setMatrix()
// Parameters:
// - newMatrix
// Return:     void
////////////////////////////////////////////////////////////////////////

void Latin_Square::setMatrix(int** newMatrix)
{
   matrix = newMatrix;
}

////////////////////////////////////////////////////////////////////////
// Name:       Latin_Square::Latin_Square()
// Purpose:    Implementation of Latin_Square::Latin_Square()
// Return:     
////////////////////////////////////////////////////////////////////////

Latin_Square::Latin_Square()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Latin_Square::~Latin_Square()
// Purpose:    Implementation of Latin_Square::~Latin_Square()
// Return:     
////////////////////////////////////////////////////////////////////////

Latin_Square::~Latin_Square()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Latin_Square::validate(int dim)
// Purpose:    Implementation of Latin_Square::validate()
// Parameters:
// - dim
// Return:     int
////////////////////////////////////////////////////////////////////////

int Latin_Square::validate(int dim)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Latin_Square::generate_square(int dim)
// Purpose:    Implementation of Latin_Square::generate_square()
// Parameters:
// - dim
// Return:     void
////////////////////////////////////////////////////////////////////////

void Latin_Square::generate_square(int dim)
{
   // TODO : implement
}

