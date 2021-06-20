/***********************************************************************
 * Module:  Menu.cpp
 * Author:  Kenneth Andrade
 * Modified: jueves, 10 de junio de 2021 16:10:51
 * Purpose: Implementation of the class Menu
 ***********************************************************************/
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include "Menu.h"


#define ARRIBA 72
#define ABAJO 80
#define ENTER 13


////////////////////////////////////////////////////////////////////////
// Name:       Menu::gotoxy(int x, int y)
// Purpose:    Implementation of Menu::gotoxy()
// Parameters:
// - x
// - y
// Return:     void
////////////////////////////////////////////////////////////////////////

void Menu::gotoxy(int x, int y)
{
   HANDLE hcon;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}

////////////////////////////////////////////////////////////////////////
// Name:       Menu::crearMenu(std::string titulo, string * opciones, int nOpciones)
// Purpose:    Implementation of Menu::crearMenu()
// Parameters:
// - titulo
// - opciones
// - nOpciones
// Return:     int
////////////////////////////////////////////////////////////////////////

int Menu::crearMenu(string titulo, string *opciones, int nOpciones)
{  	
	int seleccion = 1,tecla;
	bool repite = true;
	
	do{
		system("cls");
		gotoxy(15,2); cout<<titulo;
		gotoxy(5,3 + seleccion); cout<<">>";
		
		for(int i = 0;i < nOpciones;i++){
			gotoxy(10,4 + i); cout<< (i+1) << "." <<*(opciones+i);
		}
		
		do{
			tecla = getch();
		}while(tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);
		
		switch(tecla){
			case ARRIBA:
				seleccion--;
				if(seleccion < 1){
					seleccion = nOpciones;
				}
				break;
			case ABAJO:
				seleccion++;
				if(seleccion > nOpciones){
					seleccion = 1;
				}
				break;
			case ENTER:
				repite = false;
				break;
		}
	
	}while(repite);
	return seleccion;
}
