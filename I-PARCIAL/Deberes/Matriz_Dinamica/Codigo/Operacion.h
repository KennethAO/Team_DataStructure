
#include "Matriz.h"

class Operacion
{
public:
   Matriz getMatriz1(void);
   void setMatriz1(Matriz newMatriz1);
   Matriz getMatrizR(void);
   void setMatrizR(Matriz newMatrizR);
   Matriz getMatrizAux(void);
   void setMatrizAux(Matriz newMatrizAux);
   Operacion(Matriz matriz1);
   Operacion()=default;
   void generar(void);   
   void imprimir_(void);
   void guardar();
   void ocurencias();
   void imprimirocurrencia();
protected:
	
private:
   Matriz matriz1;
   Matriz matrizR;
   Matriz matrizAux;

};
 
 

