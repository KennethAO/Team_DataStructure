#pragma once
#include <iostream>
#include "Pila.h"
#include <string.h>
using namespace std;


class Notaciones {
private:
    string expresion;
    Pila<char> operadores;
    Pila<char> salida;
    Pila<char> entrada;
public:
    Notaciones() = default;
    void ingresarExpresion();
    void convertirPostfija();
    string convertirPrefija();
    void convertirFuncional();
    int verificarJerarquia(char operador);
    bool comprobarSigno(char temporal);
    bool compararFunciones(int j);
    bool compararFun(int i);

    string compararSigno(char temporal);

};
void Notaciones::ingresarExpresion() {

    string _expresion;
    cout << "Ingrese la expresion infija: ";
    cin >> _expresion;
    this->expresion = _expresion;
}

void Notaciones::convertirPostfija() {
    string salida1 = "";
    string funcion = "";
    int k = 0, cont = 0;

    //FUNCION = Sen

    for (int i = 0; i < expresion.length(); i++) {
        if ((expresion[i] >= 65 && expresion[i] <= 90) || (expresion[i] >= 97 && expresion[i] <= 122)) {
            // salida.insertar(expresion[i]);
            if (compararFunciones(i) == true) {
                funcion += expresion[i];
                funcion += +expresion[i + 1];
                funcion += expresion[i + 2];
            }
            else if (compararFun(i) == false) {
                salida1 += expresion[i];
            }
        }
        else if (expresion[i] >= 48 && expresion[i] <= 57) {
            while (i <= expresion.length() && expresion[i] >= 48 && expresion[i] <= 57) {
                salida1 += expresion[i];
                i++;
            }
            i--;
        }
        else if (expresion[i] == 40) {
            operadores.insertar(expresion[i]);
            /*int l;
            bool bandera=false;
            l = i;
            do{
                if(expresion[l]==110 || expresion[l]==115){
                    k++;
                    bandera=true;
                }
                else{
                    l--;
                }
            }while(!bandera);*/
            k++;
        }
        else if (expresion[i] == 41) {
            while (operadores.obtenerTope() != 40) {
                salida1 += operadores.obtenerTope();
                operadores.eliminar();
            }
            cont++;
            if (funcion != "" && cont == k) {
                salida1 += funcion;
                funcion = "";
            }
            operadores.eliminar();
        }
        else {
            if (operadores.estaVacia()) {
                operadores.insertar(expresion[i]);
            }
            else if (verificarJerarquia(expresion[i]) <= verificarJerarquia(operadores.obtenerTope())) {
                salida1 += operadores.obtenerTope();
                operadores.eliminar();

                while (verificarJerarquia(expresion[i]) == verificarJerarquia(operadores.obtenerTope())) {
                    salida1 += operadores.obtenerTope();
                    operadores.eliminar();

                    if (operadores.estaVacia()) {
                        break;
                    }
                }

                operadores.insertar(expresion[i]);
            }
            else if (verificarJerarquia(expresion[i]) > verificarJerarquia(operadores.obtenerTope())) {
                operadores.insertar(expresion[i]);
            }
        }
    }
    while (!operadores.estaVacia()) {
        salida1 += operadores.obtenerTope();
        operadores.eliminar();
    }
    cout << "\n Expresion postfija: " << salida1;
}


int Notaciones::verificarJerarquia(char operador) {
    if (operador == '+' || operador == '-') {
        return 1;
    }
    else if (operador == '*' || operador == '/') {
        return 2;
    }
    else if (operador == '^' || operador == '%' || operador == '=') {
        return 3;
    }

    return 0;
}

string Notaciones::convertirPrefija() {
    string salida1 = "";
    string funcion = "";
    char temporal;

    for (int i = 0; i < expresion.length(); i++) {
        entrada.insertar(expresion[i]);
    }
    while (!entrada.estaVacia()) {
        temporal = entrada.obtenerTope();
        entrada.eliminar();
        funcion = "";
        if (temporal >= 48 && temporal <= 57) {
            salida.insertar(temporal);
        }
        else if (temporal == 41) {
            operadores.insertar(temporal);
        }
        else if ((temporal >= 65 && temporal <= 90) || (temporal >= 97 && temporal <= 122)) {
            int j;
            for (int i = 0; i < expresion.length(); i++) {
                if (expresion[i] == temporal) {
                    j = i;
                }
            }
            if (compararFunciones(j) == true) {
                funcion += expresion[j];
                funcion += expresion[j + 1];
                funcion += expresion[j + 2];
                salida.insertar(funcion[2]);
                salida.insertar(funcion[1]);
                salida.insertar(funcion[0]);
            }
            else if (compararFun(j) == false) {
                salida.insertar(temporal);
            }
        }
        else if (comprobarSigno(temporal) == true) {
            bool colo = false;
            while (!colo) {
                if (operadores.estaVacia()) {
                    operadores.insertar(temporal);
                    colo = true;
                }
                else if (operadores.obtenerTope() == 41) {
                    operadores.insertar(temporal);
                    colo = true;
                }
                else if (verificarJerarquia(temporal) >= verificarJerarquia(operadores.obtenerTope()))
                {
                    operadores.insertar(temporal);
                    colo = true;
                }
                else {
                    salida.insertar(operadores.obtenerTope());
                    operadores.eliminar();
                }
            }
        }
        else if (temporal == 40) {
            while (operadores.obtenerTope() != 41) {
                salida.insertar(operadores.obtenerTope());
                operadores.eliminar();
            }
            operadores.eliminar();
        }
    }
    while (!operadores.estaVacia()) {
        salida.insertar(operadores.obtenerTope());
        operadores.eliminar();
    }
    while (!salida.estaVacia()) {
        salida1 += salida.obtenerTope();
        salida.eliminar();
    }
    //cout<<" Expresion Prefija: "<<salida1;
    return salida1;
}

bool Notaciones::comprobarSigno(char temporal) {
    if (temporal == '+' || temporal == '-' || temporal == '*' || temporal == '/' ||
        temporal == '^' || temporal == '%' || temporal == '=') {
        return true;
    }
    return false;
}

bool Notaciones::compararFunciones(int j) {
    char funcion;
    bool compare = false;
    if (expresion[j] == 83 || expresion[j] == 67 || expresion[j] == 84) {
        funcion = expresion[j];
        switch (funcion) {
        case 'S':
            if (expresion[j + 1] == 101 && expresion[j + 2] == 110) {
                compare = true;
            }
            break;
        case 'C':
            if (expresion[j + 1] == 111 && expresion[j + 2] == 115) {
                compare = true;
            }
            break;
        case 'T':
            if (expresion[j + 1] == 97 && expresion[j + 2] == 110) {
                compare = true;
            }
        }
    }
    return compare;
}

bool Notaciones::compararFun(int i) {
    if (expresion[i] == 101 || expresion[i] == 111 ||
        expresion[i] == 115 || expresion[i] == 97 || expresion[i] == 110) {
        return true;
    }
    return false;
}

void Notaciones::convertirFuncional() {

    string salida1 = convertirPrefija();
    string signo = "";
    string salidaFuncional = "";
    int operador = 0;
    int aux = 0;

    int cont = 0;
    for (int i = 0; i < salida1.length(); i++) {
        signo = compararSigno(salida1[i]);
        if (signo != "") {
            operador++;
            salidaFuncional += signo;
            salidaFuncional += '(';
            signo = "";
        }
        else {
            cont++;
            aux++;
            salidaFuncional += salida1[i];
            //if(aux%2==0){
              //  salidaFuncional+=')';
                //operador--;
                //if(operador>1){
                  //  salidaFuncional+=',';
                //}
            //}else{
            if (i < salida1.length() - 1) {
                if (cont % 2 == 0) {
                    salidaFuncional += ',';
                }
                else if (cont != 1 && cont % 2 != 0 && i < salida1.length() - 1) {
                    salidaFuncional += ',';
                }
                else if (cont == 1) {
                    salidaFuncional += ',';
                }
            }
            else {
                if (operador > 1) {
                    salidaFuncional += ')';
                    salidaFuncional += ')';
                }
                else {
                    salidaFuncional += ')';
                }
            }
            //}
        }
    }
    cout << "Exp prefija: " << salida1 << endl;
    cout << "Exp funcional: " << salidaFuncional << endl;

}


string Notaciones::compararSigno(char temporal) {
    switch (temporal) {
    case '+': return "Suma";
        break;
    case '-': return "Resta";
        break;
    case '*': return "Producto";
        break;
    case '/': return "Division";
        break;
    case '=': return "Igual";
        break;
    case '%': return "Modulo";
        break;
    case '^': return "Potencia";
        break;
    }
    return "";
}