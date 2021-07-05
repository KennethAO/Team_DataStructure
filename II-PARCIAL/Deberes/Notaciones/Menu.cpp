#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include "Menu.h"


#define ARRIBA 72
#define ABAJO 80
#define DERECHA 75
#define IZQUIERDA 77
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
		CONSOLE_SCREEN_BUFFER_INFO csbi;
    	WORD csbi_defaults;
		HANDLE console;
    	GetConsoleScreenBufferInfo(console, &csbi);
    	csbi_defaults = csbi.wAttributes;
		system("cls");
		gotoxy(15,2); cout<<titulo;
		gotoxy(5,3 + seleccion); cout<<">>";
		
		for(int i = 0;i < nOpciones;i++){
			
			gotoxy(10,4 + i);
			SetConsoleTextAttribute (console, BACKGROUND_BLUE);
			cout<< (i+1) << "." <<*(opciones+i);
			SetConsoleTextAttribute (console, csbi_defaults);
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

void Menu::menuCalculadora(){
	string **opciones;
	opciones = new string*[5];

	for (int i = 0; i < 5; i++){
		*(opciones+i) = new string[6];
	}

	*(*(opciones+0)+0) = "A";
	*(*(opciones+0)+1) = "B";
	*(*(opciones+0)+2) = "C";
	*(*(opciones+0)+3) = "D";
	*(*(opciones+0)+4) = "(";
	*(*(opciones+0)+5) = ")";
	*(*(opciones+1)+0) = "X";
	*(*(opciones+1)+1) = "Y";
	*(*(opciones+1)+2) = "Z";
	*(*(opciones+1)+3) = "W";
	*(*(opciones+1)+4) = "+";
	*(*(opciones+1)+5) = "-";
	*(*(opciones+2)+0) = "1";
	*(*(opciones+2)+1) = "2";
	*(*(opciones+2)+2) = "3";
	*(*(opciones+2)+3) = "4";
	*(*(opciones+2)+4) = "*";
	*(*(opciones+2)+5) = "/";
	*(*(opciones+3)+0) = "5";
	*(*(opciones+3)+1) = "6";
	*(*(opciones+3)+2) = "7";
	*(*(opciones+3)+3) = "8";
	*(*(opciones+3)+4) = "^";
	*(*(opciones+3)+5) = "%";
	*(*(opciones+4)+0) = "9";
	*(*(opciones+4)+1) = "Sen";
	*(*(opciones+4)+2) = "Cos";
	*(*(opciones+4)+3) = "Tan";
	*(*(opciones+4)+4) = "=";
	*(*(opciones+4)+5) = "ok";

	int fila = 1 , columna = 1,tecla;
	bool repite = true;

	do{
		system("cls");
		gotoxy(columna,fila); cout<<">>";
		
		for (int i = 0; i < 5; i++){
			for (int j = 0; j < 6; j++){
				cout<<"\t"<<*(*(opciones+i)+j);
			}
			cout<<"\n";
		
		}
		
		do{
			tecla = getch();
		}while(tecla != ARRIBA && tecla != ABAJO && tecla != DERECHA && tecla != IZQUIERDA && tecla != ENTER);
		
		switch(tecla){
			case ARRIBA:
				if(fila > -1 && fila < 5){
					fila--;
				}
				break;
			case ABAJO:
				if(fila > -1 && fila < 5){
					fila++;
				}
				break;
			case ENTER:
				repite = false;
				break;
		}
	
	}while(repite);
	

	

}

int Menu::menuPrincipal(){
	string *opciones = new string[4];

	*(opciones+0) = "Transformar expresion infija a postfija";
	*(opciones+1) = "Transformar expresion infija a prefija";
	*(opciones+2) = "Transformar expresion infija a funcional";
	*(opciones+3) = "Salir";

	return crearMenu("Menu principal", opciones,4);
}
