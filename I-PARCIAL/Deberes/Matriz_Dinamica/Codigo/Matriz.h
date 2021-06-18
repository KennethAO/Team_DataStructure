/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Matriz.h
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: miércoles, 2 de junio de 2021 15:46:42
 * Purpose: Declaration of the class Matriz.h
 ***********************************************************************/

#if !defined(__Matriz_Matriz_h)
#define __Matriz_Matriz_h

class Matriz
{
public:
   int getFila_(void);
   void setFila_(int newFila_);
   int getColumna_(void);
   void setColumna_(int newColumna_);   
   int **getMatriz_(void);
   void setMatriz_(int **newMatriz_);   
   Matriz(int _fila, int _columna);
   Matriz()=default;

protected:
private:
   int fila_;
   int columna_;
   int **matriz;


};

#endif
