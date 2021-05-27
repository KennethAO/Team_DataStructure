#include<iostream>

using namespace std;

class Functions{	
	private: 
			double value;
	public:
			Functions(long double);
			void setValue(long double);
			long double getValue();
			long double calculateTan(long double);
			long double powerNumber(long double, long double);
			long double factorialNumber(long double);
};

