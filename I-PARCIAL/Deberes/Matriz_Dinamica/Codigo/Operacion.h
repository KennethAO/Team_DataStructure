/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Operacion.h
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: miércoles, 2 de junio de 2021 15:46:42
 * Purpose: Declaration of the class Operacion.h
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
   Operacion()=default;
   void generar(void);
   void encerar(Matriz _matriz);
   void procesar(int exponente);
   void imprimir_(void);
protected:
	
private:
   Matriz matriz1;
   Matriz matrizR;
   Matriz matrizAux;

};

#endif
