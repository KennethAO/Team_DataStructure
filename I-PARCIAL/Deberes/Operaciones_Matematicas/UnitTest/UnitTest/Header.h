#include<iostream>

using namespace std;

class Functions {
private:
	double value;
public:
	Functions(long double);
	void setValue(long double);
	long double getValue();
	double squareRoot(double);
	long double calculateSin(double);
	double calculatePi(double);
	long double calculateTan(long double);
	long double calculateCos(long double);
	long double calculateCotan(long double);
	int sign(int);
	long double powerNumber(long double, long double);
	long double factorialNumber(long double);

};

Functions::Functions(long double _value) {
	value = _value;
}
void Functions::setValue(long double _value) {
	value = _value;
}
long double Functions::getValue() {
	return value;
}
double Functions::squareRoot(double val) {
	double remainder;
	double i = 0;
	do {
		i += 0.000001;
		remainder = i * i;
	} while (val >= remainder);
	return i;
}
long double Functions::calculateSin(double angle) {
	long double result = 0;
	for (int i = 0; i < 200; i++) {
		result = result + (powerNumber(-1, i) / factorialNumber(2 * i + 1)) * powerNumber(angle, 2 * i + 1);
	}
	return result;
}

double Functions::calculatePi(double epsilon) {
	double pi = 0;
	int i = 0;
	int limit = 100000;
	double num, den, term, fault = 1.0;

	while (fault > epsilon && i < limit) {
		num = sign(i) * 4.0;
		den = 2 * i + 1;
		term = num / den;
		pi = pi + term;
		if (term < 0) {
			term = -term;
		}
		fault = term;
		i++;
	}
	return pi;
}

int Functions::sign(int i) {
	if (i % 2)
		return -1;
	else {
		return 1;
	}
}

long double Functions::calculateCos(long double angle) {
	long double cos = 0;
	for (int m = 0; m < value; m++) {
		cos = cos + (powerNumber(-1, m) * (powerNumber(angle, 2 * m) / factorialNumber(2 * m)));
	}
	return cos;
}

long double Functions::calculateTan(long double angle) {
	long double sen = 0;
	for (int i = 0; i < value; i++) {
		sen = sen + powerNumber(-1, i) * powerNumber(angle, 2 * i + 1) / factorialNumber(2 * i + 1);
	}
	long double cos = 0;
	for (int i = 0; i < value; i++) {
		cos = cos + powerNumber(-1, i) * powerNumber(angle, 2 * i) / factorialNumber(2 * i);
	}
	return sen / cos;
}


long double Functions::calculateCotan(long double angle) {
	long double sen = 0;
	for (int i = 0; i < value; i++) {
		sen = sen + powerNumber(-1, i) * powerNumber(angle, 2 * i + 1) / factorialNumber(2 * i + 1);
	}
	long double cos = 0;
	for (int i = 0; i < value; i++) {
		cos = cos + powerNumber(-1, i) * powerNumber(angle, 2 * i) / factorialNumber(2 * i);
	}
	return cos / sen;
}

long double Functions::powerNumber(long double numero, long double potencia) {
	long double res = 1;
	if (potencia == 0) {
		return res;
	}
	for (int i = 0; i < potencia; i++) {
		res = res * numero;
	}
	return res;
}
long double Functions::factorialNumber(long double number) {
	long double result = 1;
	for (int i = number; i >= 1; i--) {
		result = result * i;
	}
	return result;
}


