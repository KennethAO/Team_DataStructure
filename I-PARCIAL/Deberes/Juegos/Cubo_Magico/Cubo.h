

class Cubo{


	private:
	   int** matrix;
	   int remaining;

	public:
	   Cubo();
	   ~Cubo();
	   int getRemaining(void);
	   void setRemaining(int newRemaining);
	   int ** getMatrix();
	   void setMatrix(int **newMatrix);
	   bool play(void);
	   void imprimir(void);
};
