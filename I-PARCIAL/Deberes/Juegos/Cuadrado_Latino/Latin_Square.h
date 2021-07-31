/***********************************************************************
 * Module:  Latin_Square.h
 * Author:  ariel
 * Modified: martes, 8 de junio de 2021 19:46:58
 * Purpose: Declaration of the class Latin_Square
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Latin_Square_h)
#define __Class_Diagram_1_Latin_Square_h


class Latin_Square
{
public:
   int getDim(void);
   void setDim(int newDim);
   int** getMatrix(void);
   void setMatrix(int** newMatrix);
   Latin_Square();
   ~Latin_Square();
   int validate(int dim);
   void generate_square(int dim);

protected:
private:
   int dim;
   int** matrix;


};

#endif

