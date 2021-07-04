#define TAM 255
#define VACIA -1
#include <iostream>
#include <cstring>

#include "convierte_expresion.h"

using namespace std;
// La clase pila ya tiene su funcionalidad completa



int main () {

    char expresion_infix[TAM];
    char expresion_postfix[TAM];
    convierte_expresion ce;
    cout << "La expresion en infix solo debe contener:" << endl;
    cout << "1) Caracteres alfabeticos individuales entre los operadores" << endl;
    cout << "2) Operadores aritmeticos basicos: + - * /" << endl;
    cout << "3) Parentesis, pueden ser con anidamientos" << endl;
    cout << "4) Longitud maxima de la expresion: "<< TAM -1 << "\n" << endl;
    cout << "\nEscribe tu expresion en infix:" << endl;
    cin.getline (expresion_infix, TAM-1); // al leer la cadena getline() pone como ultimo caracter '\0'
    ce.postfix(expresion_infix, expresion_postfix);
    cout << "\n**************************************************************" << endl;
    cout << "\nLa cadena infija \n"  << expresion_infix << endl;
    cout << "\nConvertida en postfix es: \n"  << expresion_postfix << endl;
    cout << "\n**************************************************************" << endl;

    return 0;
}
