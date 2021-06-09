/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Main.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: martes, 8 de junio de 2021 14:50:42
 * Purpose: Declaration of the prototypes of the fuction Main
 ***********************************************************************/
#include <iostream>
#include "Nodo.cpp"
using namespace std;

int main() {
  int op = 0, val = 0;
    Nodo nd;
    Nodo nd1;
    Nodo* lista;
    do {
        cout<<"ingrese un valor: ";
        cin>>val;
        nd.insertarInicio(val);
        nd1.insertarFinal(val);
        cout<<"\ndesea ingresar otro dato (1->Si, 0->No): ";
        cin>>op;
    } while (op == 1);
	lista = nd.getLista();
	cout<<"Valores correspondientes: "<<endl;
    nd.imprimir();
    cout<<"\n\n";
    cout<<"Valores correspondientes: "<<endl;
    nd1.imprimir();
    //Limpia la lista 
    free(lista);
	return 0; 
}
