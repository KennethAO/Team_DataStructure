/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Menu.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Wednesday, June 9, 2021 3:10:25 PM
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
using namespace std;

void Menu::gotoxy(int x,int y){
		HANDLE hcon;
		hcon=GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X=x;
		dwPos.Y=y;
		SetConsoleCursorPosition(hcon,dwPos);
}


int Menu::crearMenu(string titulo, string *opciones, int nOpciones){
	
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

