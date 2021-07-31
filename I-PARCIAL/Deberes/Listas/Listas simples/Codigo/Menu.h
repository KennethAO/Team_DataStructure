#include <iostream>

using namespace std;


class Menu{
	
	public:
		Menu() = default;
		void gotoxy(int,int);
		void seleccionarMenu();
		int crearMenu(string, string *, int);
};
