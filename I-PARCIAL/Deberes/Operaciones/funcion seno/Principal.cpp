#include <iostream>
using namespace std;

long double seno(double);
double factorial(double number);
long double power(double, long double);

int main(int argc, char** argv) {
	
	return 0;
}



long double seno(double angle){
	
	long double result = 0;
	for(int i = 0;i<200;i++){
		result = result + (power(-1,i)/factorial(2*i+1))*power(angle,2*i+1);
	}

	return result;
}



long double power(double base, long double exponent){
	long double result;
	
	if(exponent==0){
		result = 1;
	}else{
		result = base;
	
		for(int i = 0;i<(exponent-1);i++){
			result = result*base;				
		}
	}
	return result;

}

double factorial(double number){
	if(number == 0){
		number = 1;
	}else{
		number = number * factorial(number-1);
	}
	
	return number;
}


