/***********************************************************************
 * Module:  Matrix.h
 * Author:  Kenneth
 * Modified: martes, 8 de junio de 2021 13:37:38
 * Purpose: Declaration of the class Matrix
 ***********************************************************************/

#if !defined(__IdentityMatrix_Matrix_h)
#define __IdentityMatrix_Matrix_h

class Matrix
{
public:
   Matrix(int **_matrix, int _dim);
   Matrix()=default;
   ~Matrix();
   int** getMatrix(void);
   void setMatrix(int **new_matrix);
   int getDim(void);
   void setDim(int newDim);

	
protected:
private:
   int **matrix;
   int dim;

};

#endif
