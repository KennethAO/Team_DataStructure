/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Validacion.h
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Wednesday, June 16, 2021 3:50:04 PM
 * Purpose: Prototype of the class Validacion
 ***********************************************************************/
#include <iostream>

using namespace std; 

#if !defined(__Validacion_Validacion_h)
#define __Validacion_Validacion_h

class Validacion
{
public:
   int validarNum(char *);
   std::string validarLet(std::string);
	std::string borrarFunct(std::string);
protected:
private:

};

#endif
