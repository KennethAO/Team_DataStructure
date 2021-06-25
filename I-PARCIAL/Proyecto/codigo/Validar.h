#include <iostream>

using namespace std;

class Validar{
	public:
		Validar() = default;
		string ingreso(const string,int,bool);
		string validarLetras(const string,int,bool);
		string validarNumeros( const string,int);
		double validarNumerosDecimales( const string,int);
		string validarTelfeno();
		string validarCedula();
};
