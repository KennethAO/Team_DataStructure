#pragma once
#include <iostream>
#include <windows.h>
using namespace std;


class Menu {

public:
	Menu() = default;
	void gotoxy(int, int);
	int crearMenu(string, string*, int);
	string crearMenuTipoMatriz(string**);
	int menuPrincipal();
	string menuCalculadora();
};
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>



#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75
#define ENTER 13
using namespace std;

void Menu::gotoxy(int x, int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}


int Menu::crearMenu(string titulo, string* opciones, int nOpciones) {



	int seleccion = 1, tecla;
	bool repite = true;
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	WORD csbi_defaults;

	GetConsoleScreenBufferInfo(H, &csbi);
	csbi_defaults = csbi.wAttributes;
	do {

		system("cls");
		gotoxy(15, 2); cout << titulo;

		gotoxy(5, 3 + seleccion); cout << ">>";


		for (int i = 0; i < nOpciones; i++) {


			if (seleccion == (i + 1)) {

				SetConsoleTextAttribute(H, 1);
			}
			gotoxy(10, 4 + i);
			cout << (i + 1) << "." << *(opciones + i);
			SetConsoleTextAttribute(H, csbi_defaults);


		}

		do {
			tecla = getch();
		} while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);

		switch (tecla) {
		case ARRIBA:
			seleccion--;
			if (seleccion < 1) {
				seleccion = nOpciones;
			}
			break;
		case ABAJO:
			seleccion++;
			if (seleccion > nOpciones) {
				seleccion = 1;
			}
			break;
		case ENTER:
			repite = false;
			break;
		}

	} while (repite);

	return seleccion;
}

string Menu::crearMenuTipoMatriz(string** opciones) {

	string expresion = "";
	string capturado;





	int fila = 1, columna = 1, tecla;
	bool repite = true;
	int espaciadoH = 0, espaciadoV = 0;
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	WORD csbi_defaults;

	GetConsoleScreenBufferInfo(H, &csbi);
	csbi_defaults = csbi.wAttributes;

	do {
		system("cls");
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 6; j++) {

				if (fila == (i + 1) && columna == (j + 1)) {
					SetConsoleTextAttribute(H, 23);
				}
				gotoxy((j + 5) + espaciadoH, (i + 5) + espaciadoV);
				cout << *(*(opciones + i) + j);
				SetConsoleTextAttribute(H, csbi_defaults);
				espaciadoH += 7;
			}
			espaciadoH = 0;
			espaciadoV += 2;

		}
		espaciadoV = 0;
		cout << "\n\n\nExpresion: " << expresion;
		do {
			tecla = getch();
		} while (tecla != ARRIBA && tecla != ABAJO && tecla != DERECHA && tecla != IZQUIERDA && tecla != ENTER);

		switch (tecla) {
		case ARRIBA:
			fila--;
			if (fila < 1) {
				fila = 5;
			}
			break;

		case ABAJO:
			fila++;
			if (fila > 5) {
				fila = 1;
			}
			break;

		case IZQUIERDA:
			columna--;
			if (columna < 1) {
				columna = 6;
			}
			break;

		case DERECHA:
			columna++;
			if (columna > 6) {
				columna = 1;
			}
			break;

		case ENTER:

			if ((fila - 1) == 4 && (columna - 1) == 5) {
				repite = false;
			}
			else if (((fila - 1) == 0 && (columna - 1) == 5)) {

				if (expresion != "") {
					if (capturado == "sen" || capturado == "cos" || capturado == "tan") {
						for (int i = 0; i < 3; i++) {
							expresion.pop_back();
						}
					}
					else {
						expresion.pop_back();
					}
				}

			}
			else {
				capturado = *(*(opciones + (fila - 1)) + (columna - 1));
				expresion += capturado;
			}

			break;
		}

	} while (repite);


	return expresion;
}



string Menu::menuCalculadora() {
	string** opciones;
	opciones = new string * [5];
	for (int i = 0; i < 5; i++) {
		*(opciones + i) = new string[6];
	}

	*(*(opciones + 0) + 0) = "A";
	*(*(opciones + 0) + 1) = "B";
	*(*(opciones + 0) + 2) = "C";
	*(*(opciones + 0) + 3) = "D";
	*(*(opciones + 0) + 4) = "+";
	*(*(opciones + 0) + 5) = "Borrar";
	*(*(opciones + 1) + 0) = "X";
	*(*(opciones + 1) + 1) = "Y";
	*(*(opciones + 1) + 2) = "Z";
	*(*(opciones + 1) + 3) = "-";
	*(*(opciones + 1) + 4) = "(";
	*(*(opciones + 1) + 5) = ")";
	*(*(opciones + 2) + 0) = "1";
	*(*(opciones + 2) + 1) = "2";
	*(*(opciones + 2) + 2) = "3";
	*(*(opciones + 2) + 3) = "4";
	*(*(opciones + 2) + 4) = "*";
	*(*(opciones + 2) + 5) = "/";
	*(*(opciones + 3) + 0) = "5";
	*(*(opciones + 3) + 1) = "6";
	*(*(opciones + 3) + 2) = "7";
	*(*(opciones + 3) + 3) = "8";
	*(*(opciones + 3) + 4) = "^";
	*(*(opciones + 3) + 5) = "%";
	*(*(opciones + 4) + 0) = "9";
	*(*(opciones + 4) + 1) = "Sen";
	*(*(opciones + 4) + 2) = "Cos";
	*(*(opciones + 4) + 3) = "Tan";
	*(*(opciones + 4) + 4) = "=";
	*(*(opciones + 4) + 5) = "ok";

	return crearMenuTipoMatriz(opciones);


}

int Menu::menuPrincipal() {
	string* opciones = new string[4];

	*(opciones + 0) = "Transformar expresion infija a postfija";
	*(opciones + 1) = "Transformar expresion infija a prefija";
	*(opciones + 2) = "Transformar expresion infija a funcional";
	*(opciones + 3) = "Salir";

	return crearMenu("Menu principal", opciones, 4);
}
