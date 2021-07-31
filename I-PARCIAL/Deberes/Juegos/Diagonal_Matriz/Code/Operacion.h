
#if !defined(__Matriz_Operacion_h)
#define __Matriz_Operacion_h
#include "Matriz.h"

class Operacion
{
public:
   Matriz getMatriz1(void);
   void setMatriz1(Matriz newMatriz);
   Operacion(Matriz matriz1);
   void segmentar(void);
   Operacion()=default;
   void generar(void);
   void encerar(Matriz _matriz);
   void procesar(Matriz _matriz);
   void imprimir(void);
protected:
	
private:
   Matriz matriz1;

};
#endif
