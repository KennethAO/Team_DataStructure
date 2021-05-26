#include "Supermarket.h"


Supermarket::Supermarket(string _name, float _dailyEarnings){
	name = _name;
	dailyEarnings = _dailyEarnings;
}

string Supermarket::getName(){
	return name;
}

float Supermarket::getDailyEarnings(){
	return dailyEarnings;
}

int Supermarket::getEmployee(){
	return employee;
}

void Supermarket::setName(string _name){
	name = _name;
}

void Supermarket::setDailyEarnings(float _dailyEarnings){
	dailyEarnings = _dailyEarnings;
}

void Supermarket::setEmployee(int _employee){
	employee = _employee;
}





