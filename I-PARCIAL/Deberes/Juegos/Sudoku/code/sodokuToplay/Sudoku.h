/***********************************************************************
 * Module:  Sudoku.h
 * Author:  Rafa
 * Modified: Monday, June 7, 2021 11:59:37 AM
 * Purpose: Declaration of the class Sudoku
 ***********************************************************************/



class Sudoku{
	
	protected:
	private:
	   int** matrix;
	   int remaining;

	public:
	   Sudoku();
	   ~Sudoku();
	   int getRemaining(void);
	   void setRemaining(int newRemaining);
	   int ** getMatrix();
	   void setMatrix(int **newMatrix);
	   bool play(int row, int column, int number);
	   void print(void);
	   void encerar();
	   bool validateNumber(int number);
};


