#include <iostream>
#include <conio.h>
#include "ArbolB.h"

using namespace std; 
 
int main() {
    int val, opt;
    ArbolB arb;
    while (true) {
        system("cls");
        cout<<"1. Insertar"<<endl;
        cout<<"2. Eliminar"<<endl;
        cout<<"3. Buscar"<<endl;
        cout<<"4. Imprimir"<<endl; 
        cout<<"5. Salir"<<endl; 
        cout<<"Escoja una opcion: ";
        cin >> opt;
        cout << endl;
        switch (opt) {
        case 1:
            cout<<"Dato a ingresar: ";
            cin >> val;
            arb.insertion(val);
            break;
        case 2:
            cout<<"Dato a eliminar:";
            cin >> val;
           arb.deletion1(val);
            break;
        case 3:
            cout<<"Dato a buscar:";
            cin >> val;
            arb.searching1(val, &opt);
            system("pause");
            break;
        case 4:
            arb.transversal1();
            cout<<endl; 
            system("pause");
            break;
        case 5:
            exit(0);
        }
        cout << endl;
    }
 
    system("pause");
}