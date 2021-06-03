/***********************************************************************
 * Module:  Operacion.h
 * Author:  Equipo
 * Modified: miércoles, 2 de junio de 2021 15:46:42
 * Purpose: Declaration of the class Operacion
 ***********************************************************************/

#if !defined(__Matriz_Operacion_h)
#define __Matriz_Operacion_h

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
   void segmentar(void);
   //~Operacion();
   Operacion()=default;
   void generar(void);
   void encerar(Matriz _matriz);
   void procesar(int exponente);
   void imprimir_(void);
   //void segmentar(void);

protected:
	
private:
   Matriz matriz1;
   Matriz matrizR;
   Matriz matrizAux;

};

#endif
