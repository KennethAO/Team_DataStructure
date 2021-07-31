
#include<iostream>
#include <string>

using namespace std;

class Supermarket {

private:
	string name;
	float dailyEarnings;
	int employee = 20;

public:
	Supermarket(string _name = " ", float _dailyEarnings = 0);
	string getName();
	float getDailyEarnings();
	int getEmployee();
	void setName(string);
	void setDailyEarnings(float);
	void setEmployee(int);

};

/**
 * @brief Constructor de la clase "Supermarket"
 *
 * @param _name
 * @param _dailyEarnings
 */
Supermarket::Supermarket(string _name, float _dailyEarnings) {
	name = _name;
	dailyEarnings = _dailyEarnings;
}

/**
 * @brief getter del atributo name
 *
 * @return string
 */
string Supermarket::getName() {
	return name;
}

/**
 * @brief getter del atributo dailyEarnings
 *
 * @return float
 */
float Supermarket::getDailyEarnings() {
	return dailyEarnings;
}

/**
 * @brief getter del atributo employee
 *
 * @return int
 */
int Supermarket::getEmployee() {
	return employee;
}

/**
 * @brief setter del atributo name
 *
 * @param _name
 */
void Supermarket::setName(string _name) {
	name = _name;
}

/**
 * @brief setter del atributo dailyEarnings
 *
 * @param _dailyEarnings
 */
void Supermarket::setDailyEarnings(float _dailyEarnings) {
	dailyEarnings = _dailyEarnings;
}

/**
 * @brief setter del atributo employee
 *
 * @param _employee
 */
void Supermarket::setEmployee(int _employee) {
	employee = _employee;
}

