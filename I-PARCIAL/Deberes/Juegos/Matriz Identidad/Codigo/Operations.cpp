/***********************************************************************
 * Module:  Operations.cpp
 * Author:  Kenneth
 * Modified: martes, 8 de junio de 2021 13:37:23
 * Purpose: Implementation of the class Operations
 ***********************************************************************/
#include <iostream>
#include <time.h>
#include "Operations.h"


using namespace std; 

////////////////////////////////////////////////////////////////////////
// Name:       Operations::Operations(Matrix matrix)
// Purpose:    Implementation of Operations::Operations()
// Parameters:
// - matrix
// Return:     
////////////////////////////////////////////////////////////////////////

Operations::Operations(Matrix matrix)
{
   this->matrix = matrix;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operations::~Operations()
// Purpose:    Implementation of Operations::~Operations()
// Return:     
////////////////////////////////////////////////////////////////////////

Operations::~Operations()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Operations::getMatrix()
// Purpose:    Implementation of Operations::getMatrix()
// Return:     Matrix
////////////////////////////////////////////////////////////////////////

Matrix Operations::getMatrix(void)
{
   return matrix;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operations::setMatrix(Matrix newMatrix)
// Purpose:    Implementation of Operations::setMatrix()
// Parameters:
// - newMatrix
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operations::setMatrix(Matrix newMatrix)
{
   matrix = newMatrix;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operations::segment()
// Purpose:    Implementation of Operations::segment()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operations::segment(void)
{
   int **matrix1;
	matrix1=(int **)malloc(matrix.getDim()*sizeof(int *));
	for(int j=0;j<matrix.getDim();j++)
		*(matrix1+j)=(int *)malloc(matrix.getDim()*sizeof(int));
	matrix.setMatrix(matrix1);
}

////////////////////////////////////////////////////////////////////////
// Name:       Operations::wax()
// Purpose:    Implementation of Operations::wax()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operations::wax(void)
{
	for(int i =0;i<matrix.getDim();i++)
		for(int j=0;j<matrix.getDim();j++)
			*(*(matrix.getMatrix()+i)+j)=0;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operations::generate()
// Purpose:    Implementation of Operations::generate()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operations::generate(void)
{
	srand(time(NULL));
	for (int i = 0; i < matrix.getDim(); i++)
		for (int j = 0; j < matrix.getDim(); j++)
			*(*(matrix.getMatrix()+i)+j)=rand()%(10-0);
}

////////////////////////////////////////////////////////////////////////
// Name:       Operations::process()
// Purpose:    Implementation of Operations::process()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operations::process(void)
{
   	for (int i = 0; i < matrix.getDim(); i++)
		for (int j = 0; j < matrix.getDim(); j++)
			if(i==j){
				*(*(matrix.getMatrix()+i)+j)=1;
			}
			else{
				*(*(matrix.getMatrix()+i)+j)=0;
			}
}

////////////////////////////////////////////////////////////////////////
// Name:       Operations::print()
// Purpose:    Implementation of Operations::print()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operations::print(void)
{
	for(int i =0;i<matrix.getDim();i++){
		for(int j=0;j<matrix.getDim();j++){
			printf("%d",(*(*(matrix.getMatrix()+i)+j)));
			printf("%*s",j+5,"");
			}
		printf("\n");
	}
}
