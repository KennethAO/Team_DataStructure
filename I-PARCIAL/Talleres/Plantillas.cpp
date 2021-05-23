#include <iostream>
#include <stdio.h>
#include <conio.h>

/*			ENCABEZADO

UNIERSIDAD DE LAS FUERZAS ARMADAS 'ESPE'

TITULO: 
		PLANTILLAS EN OPERACIÓNES MATEMÁTICAS (SUMA,RESTA,MULTIPLICACIÓN,DIVISIÓN) C++ 
AUTORES:
		ANDRADE KENNETH
		BUSE RAFAEL 
		CALVOPIÑA DAVID
		HIDROBO NICOLAS
		TIAMBA HENRY 
FECHA DE CREACION: 
		19/05/2021 
CARRERA: 
		SOFTWARE
MATERIA: 
		ESTRUCTURA DE DATOS
NRC:
		3685
*/

using namespace std;

template <typename tipoDato>
class Operaciones {
	
	private:
		tipoDato valor1;
		tipoDato valor2;
		
	public:
		Operaciones(tipoDato _valor1, tipoDato _valor2){
			valor1 = _valor1;
			valor2 = _valor2;
		}
		tipoDato sumar();
		tipoDato restar();
		tipoDato dividir();
		tipoDato multiplicar();	
};



template <typename tipoDato>
tipoDato Operaciones<tipoDato>::sumar(){
	return valor1+valor2;
}

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::restar(){
	return valor1-valor2;
}

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::multiplicar(){
	return valor1*valor2;
}

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::dividir(){
	if(valor2 == 0){
		cout<<"No se puede dividir para 0, se pondra el valor 0"<<endl; 
	}else{
		return valor1 / valor2;
	}
}

int main() {
	
	float valor1, valor2;
	cout<<"Ingrese el valor 1: ";
	cin>>valor1;
	cout<<"Ingrese el valor 2: ";
	cin>>valor2;
	
	Operaciones<float> operacion(valor1,valor2);
	cout<<"Suma = "<<operacion.sumar()<<endl;
	cout<<"Restar = "<<operacion.restar()<<endl;
	cout<<"Multiplicar = "<<operacion.multiplicar()<<endl;
	cout<<"Division = "<<operacion.dividir();


		
}
