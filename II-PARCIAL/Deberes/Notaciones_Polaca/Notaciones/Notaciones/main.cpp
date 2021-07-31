#include <iostream>
#include "Menu.h"
#include "Notaciones.h"

using namespace std;
int main(int, char**) {
    	Menu menu;
    int opc;
    Notaciones nt;
    string expresion;
    do
    {
         opc = menu.menuPrincipal();
         switch (opc){
	        case 1:
                  cout<<endl;
                  cout<<"Ingrese la expresion: ";
                  cin>>expresion;
                  nt.ingresarExpresion(expresion);
                // nt.ingresarExpresion(menu.menuCalculadora());
                 expresion = nt.convertirPostfija();
                 cout<<"\n Expresion postfija: "<<expresion<<endl;
                 system("pause");
                 break;

             case 2:
                  cout<<endl;
                  cout<<"Ingrese la expresion: ";
                  cin>>expresion;
                  nt.ingresarExpresion(expresion);
                //nt.ingresarExpresion(menu.menuCalculadora());
                 expresion = nt.convertirPrefija();
                 cout<<"\n Expresion prefija: "<<expresion<<endl;
                 system("pause");
                 break;

            case 3:
                  cout<<endl;
                  cout<<"Ingrese la expresion: ";
                  cin>>expresion;
                  nt.ingresarExpresion(expresion);
                //nt.ingresarExpresion(menu.menuCalculadora());
                expresion = nt.convertirFuncional();
                cout<<"\n Expresion funcional: "<<expresion<<endl;
                system("pause");
                break;
         }
     } while (opc != 4);
}
