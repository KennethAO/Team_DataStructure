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
        cout<<"\ndesea ingresar otro dato[si=1][no:0]: ";
        cin>>op;
    } while (op == 1);
	lista = nd.getLista();
    nd.imprimir();
    cout<<"\n\n";
    nd1.imprimir();
	free(lista);
}