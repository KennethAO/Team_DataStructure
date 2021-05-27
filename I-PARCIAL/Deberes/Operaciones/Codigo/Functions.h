#include<iostream>

using namespace std;

class Functions{	
	private: 
			double value;
	public:
			Functions(long double);
			void setValue(long double);
			long double getValue();
			double squareRoot(double);
			long double calculateSin(double);
			double calculatePi (double);
			long double calculateTan(long double);
			long double calculateCos(long double);
			long double calculateCotan(long double);				
			int sign(int);
			long double powerNumber(long double, long double);
			long double factorialNumber(long double);
			
};

