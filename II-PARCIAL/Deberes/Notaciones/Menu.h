#include <iostream>
#include <windows.h>
using namespace std;


class Menu{
	
	public:
		Menu() = default;
		void gotoxy(int,int);
		int crearMenu(string, string *, int);
		int menuPrincipal();
		void menuCalculadora();
};
