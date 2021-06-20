/***********************************************************************
 * Module:  Menu.h
 * Author:  Kenneth Andrade
 * Modified: jueves, 10 de junio de 2021 16:10:51
 * Purpose: Declaration of the class Menu
 ***********************************************************************/
#include <iostream>

using namespace std;

#if !defined(__Menu_Menu_h)
#define __Menu_Menu_h

class Menu
{
public:
   void gotoxy(int , int );
   int crearMenu(string, string *, int);
   
protected:
private:

};

#endif
