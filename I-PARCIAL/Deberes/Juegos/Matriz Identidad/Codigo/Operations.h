/***********************************************************************
 * Module:  Operations.h
 * Author:  Kenneth
 * Modified: martes, 8 de junio de 2021 13:37:23
 * Purpose: Declaration of the class Operations
 ***********************************************************************/
#include "Matrix.h"

#if !defined(__IdentityMatrix_Operations_h)
#define __IdentityMatrix_Operations_h


class Operations
{
public:
   Operations(Matrix matrix);
   ~Operations();
   Matrix getMatrix(void);
   void setMatrix(Matrix newMatrix);
   void segment(void);
   void wax(void);
   void generate(void);
   void process(void);
   void print(void);

protected:
private:
   Matrix matrix;
};

#endif
