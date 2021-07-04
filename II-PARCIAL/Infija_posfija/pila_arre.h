
#define TAM 255
#define VACIA -1
#include <iostream>
#include <cstring>

using namespace std;


class pila_arre
{
   private:
      int tam;
      int tos;
      char datos[TAM];

   public:
      pila_arre()
      {
          tam =TAM;
          tos = VACIA;
      }

      bool vacia()
      {
          return tos == VACIA;
      }
      bool llena()
      {
          return tos == tam-1;
      }
      // El siguiente metodo lee el caracter que se encuentra
      // en la cima de la pila
      // Regresa '\0' si esta vacia
      // No modifica tos, solo lee
      char top()
      {
        char val = '\0'; // caracter de fin de cadena o caracter nulo
        if(!vacia())
           val = datos[tos];
        return val;

      }
      void push(char val)
      {
          if(!llena())
             datos[++tos]= val;
          else
             cout << "\nPila llena el dato " << val << " no se puede agregar" << endl;
      }
      char pop()
      {   
          char val='\0'; // caracter de fin de cadena o caracter nulo
          if(!vacia())
             val = datos[tos--];
          else
             cout << "\nPila vacia, no se puede eliminar" << endl;
          return val;
      }

};
