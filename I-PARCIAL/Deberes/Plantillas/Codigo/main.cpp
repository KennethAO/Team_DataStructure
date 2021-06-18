#include <iostream>
#include "operaciones.cpp"

/**
 * "Universidad de las Fuerzas Armadas ESPE"
 * @file main.cpp
 * @author Kenneth Andrade (koandrade@espe.edu.ec.)
 * @author Rafael Buse (rebuse@espe.edu.ec)
 * @author David CalvopiÃ±a (ldvalvopina@espe.edu.ec)
 * @author Nicolas Hidrobo (anhidrobo@espe.edu.ec)
 * @author Henry Tiamba (hatiamba@espe.edu.ec)
 * @author Bryan PariÃ±o (baclavon@espe.edu.ec)
 * @brief Funciones con operaciones matematicas
 * @version 0.1
 * @date 2021-06-17
 * @copyright Copyright (c) 2021
 */
int main(int argc, char** argv) {
	
	
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
		

	return 0;
}
