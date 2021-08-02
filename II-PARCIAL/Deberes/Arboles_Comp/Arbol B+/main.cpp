#include "ArbolBMas.h"
using namespace std; 

int main() {
  ArbolBMas arb; 
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
            arb.insertar(valor);
            break;
      case 2:
           cout<<"Dato a buscar: ";
           cin>>valor;
           arb.buscar(valor);
           cout<<endl; 
           system("pause");
           cout<<endl; 
           break;
      case 3:
            cout<<"Dato a eliminar: ";
            cin>>valor;
           arb.eliminar(valor);
           cout<<endl; 
           system("pause");
           cout<<endl; 
           break;
      case 4: 
           arb.imprimir1();
           cout<<endl; 
           system("pause");
           cout<<endl; 
           break; 
      case 5:
          val = false; 
    }
  } while (val==true);
}