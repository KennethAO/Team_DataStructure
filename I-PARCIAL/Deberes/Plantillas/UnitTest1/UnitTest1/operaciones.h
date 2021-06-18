#pragma once
template <typename tipoDato>
class Operaciones {

private:
	tipoDato valor1;
	tipoDato valor2;

public:
	Operaciones(tipoDato _valor1, tipoDato _valor2) {
		valor1 = _valor1;
		valor2 = _valor2;
	}
	tipoDato sumar();
	tipoDato restar();
	tipoDato dividir();
	tipoDato multiplicar();
};
