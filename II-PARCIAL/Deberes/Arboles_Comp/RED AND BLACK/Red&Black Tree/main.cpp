// Implementing Red-Black Tree in C++

#include <iostream>
#include "ArbolRojoNegro.h"

using namespace std;


int main() {
  ArbolRojoNegro arb; 
  bool val =true;
  int dat; 
  int valor; 
  
  do
  {
    system("cls");
    cout<<"1. Ingresar dato"<<endl;
    cout<<"2. Buscar dato"<<endl;
    cout<<"3. Eliminar dato"<<endl; 
    cout<<"4. Imprimir dato"<<endl; 
    cout<<"5. Salir"<<endl; 
    cout<<"Seleccione una opcion: ";
    cin>>dat; 
    switch(dat){
      case 1: 
            cout<<"Dato a ingresar: ";
            cin>>valor; 
            arb.insert(valor);
            break;
      case 2:
           cout<<"Dato a buscar: ";
           cin>>valor;
           arb.encontrarValor(valor);
           cout<<endl; 
           system("pause");
           cout<<endl; 
           break;
      case 3:
            cout<<"Dato a eliminar: ";
            cin>>valor;
           arb.deleteNode(valor);
           cout<<endl; 
           system("pause");
           cout<<endl; 
           break;
      case 4: 
           arb.generarGrafico();
           cout<<endl; 
           system("pause");
           cout<<endl; 
           break;
      case 5:
          val = false; 
    }
  } while (val==true);
}
