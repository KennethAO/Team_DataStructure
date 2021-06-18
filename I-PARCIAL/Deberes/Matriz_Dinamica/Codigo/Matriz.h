

class Matriz
{
	protected:
private:
	
   int fila_;
   int columna_;
   int **matriz;
   
public:
	
   int getFila_(void);
   void setFila_(int newFila_);
   int getColumna_(void);
   void setColumna_(int newColumna_);   
   int **getMatriz_(void);
   void setMatriz_(int **newMatriz_);   
   Matriz(int _fila, int _columna);
   Matriz()=default;




};


