/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Menu.h
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Wednesday, June 9, 2021 3:10:25 PM
 * Purpose: Declaration of the class Menu
 ***********************************************************************/
 
#include <iostream>

using namespace std;


class Menu{
	
	public:
		Menu() = default;
		void gotoxy(int,int);
		void seleccionarMenu();
		int crearMenu(string, string *, int);
};
