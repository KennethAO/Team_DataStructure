#include <iostream>
#include "Menu.h"
#include "Notaciones.h"

using namespace std;

int main(int, char**) {
    int o=1;
do{
     Menu menu;
    menu.menuPrincipal();
    
     Notaciones nt;

    nt.ingresarExpresion();
    //nt.convertirPostfija();
    cout<<endl;
    //nt.convertirPrefija();


    nt.convertirFuncional();

    
     //int opc;
//
    // opc = menu.menuPrincipal();

    // Pila<char> pl;
    // pl.insertar('1');
    // pl.insertar('2');
    // pl.insertar('3');
    // pl.insertar('4');
    // pl.insertar('5');
    // pl.imprimir();
    // cout<<"\nultimo elemento de la pila: "<<pl.obtenerTope();
    cout<<endl; 
    system("pause");
}while(o==1);
}
