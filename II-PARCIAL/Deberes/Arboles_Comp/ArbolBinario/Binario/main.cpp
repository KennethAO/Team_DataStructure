#include <iostream>
#include "Arbol.h"

using namespace std; 
int main(int, char**) {
    int valor = 0;
    int dato = 0;
    Arbol<int> arbol1;
    Nodo<int> *nodo1;
    bool compare;

    
    do{
        system("cls");
        cout<<"1. Insertar un valor"<<endl;
        cout<<"2. Eliminar un valor"<<endl;
        cout<<"3. Encontrar un valor"<<endl;
        cout<<"4. Imprimir arbol"<<endl;
        cout<<"5. Salir"<<endl; 
        cout<<"Ingrese una opcion: ";
        cin>>valor;
        cout<<endl;
        switch(valor){
            case 1:
                    cout<<"Ingrese un valor a insertar: ";
                    cin>>dato;
                    arbol1.insertar(dato);
                    break;
            case 2:
                    cout<<"Ingrese un valor a eliminar: ";
                    cin>>dato;
                   //arbol1.setArbol(arbol1.eliminar(dato));
                   arbol1.eliminar(dato);
                    break;
            case 3:
                    cout<<"Ingrese el valor a encontrar: ";
                    cin>>dato;
                    cout<<endl;
                    compare = arbol1.buscar(dato);
                    if(compare==true){
                        cout<<"El valor existe"<<endl;
                    }else{
                        cout<<"El valor no existe"<<endl;
                    }
                    system("pause");
                    break;
            case 4:
                    arbol1.generarGrafico();
                    system("pause");
                    break;
        }
    }while(valor!=5);
}

