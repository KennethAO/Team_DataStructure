#if !defined(__Matriz_Operacion_h)
#define __Matriz_Operacion_h

#include "Matriz.h"

class Operacion
{
public:
   Matriz getMatriz(void);
   void setMatriz(Matriz newMatriz);
   Operacion(Matriz matriz);
   void segmentar(void);
   Operacion()=default;
   void generar(void);
   void encerar(Matriz _matriz);
   void procesar(Matriz _matriz);
   void imprimir_(void);
protected:
	
private:
   Matriz matriz;

};
