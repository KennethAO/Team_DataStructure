/*
Universidad de las Fuerzas Armadas ESPE
Integrantes:
Materia: Estructura de Datos 
Nrc: 3685
Fecha de entrega: 26/07/2021
*/

#include<iostream>
#include "Menu.h"
#include "AVL.h"

using namespace std;


int main(int, char**) {
    AVL arbol;
    int opc, valor;
    Menu menu;


    do{
        opc = menu.menuPrincipal();
        Nodo *nuevo = new Nodo();
        switch (opc){
        case 1:
            cout<<"\n\nIngre el valor del nodo: ";
            cin>>valor;
            nuevo->setDato(valor);
            arbol.raiz = arbol.insertar(arbol.raiz,nuevo);
            cout<<endl;
            break;

        case 2:
            cout<<"\n\nIngre el valor del nodo a buscar: ";
            cin>>valor;
            nuevo = arbol.BusquedaRecursiva(arbol.raiz, valor);
            if(nuevo != nullptr){
                cout<<"\n\nValor encontrado: "<<valor<<endl;
            }else{
                cout<<"\n\nValor no encontrado"<<endl;
            }
            system("pause");
            break;

        case 3:
            cout<<"\n\nIngre el valor del nodo a Eliminar: ";
            cin>>valor;
            nuevo = arbol.BusquedaRecursiva(arbol.raiz, valor);
            if(nuevo != nullptr){
                cout<<"\n\nValor encontrado y eliminado: "<<valor<<endl;
                arbol.raiz = arbol.eliminarNodo(arbol.raiz, valor);
            }else{
                cout<<"\n\nValor no encontrado"<<endl;
            }
            system("pause");
            break;

        case 4:

            cout<<"\n \t\tARBOL AVL \n";
            arbol.mostrarArbol(arbol.raiz, 5);
            arbol.generarGrafico();
            cout<<endl;
            system("pause");
            break;

        case 5:
            exit(0);
            break;
        
        default:

            break;
        }
    } while (opc != 5);
    return 0;
}
