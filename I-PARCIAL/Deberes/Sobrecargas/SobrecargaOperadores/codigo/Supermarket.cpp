/**
 * "Universidad de las Fuerzas Armadas ESPE"
 * @file Principal.cpp
 * @author Kenneth Andrade (koandrade@espe.edu.ec.)
 * @author Rafael Buse (rebuse@espe.edu.ec)
 * @author David Calvopiña (ldvalvopina@espe.edu.ec)
 * @author Nicolas Hidrobo (anhidrobo@espe.edu.ec)
 * @author Henry Tiamba (hatiamba@espe.edu.ec)
 * @author Bryan Pariño (baclavon@espe.edu.ec)
 * @brief Sobrecarga de Métodos en Operaciones Matemáticas C++
 * @version 0.2
 * @date 2021-05-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Supermarket.h"

/**
 * @brief Constructor de la clase "Supermarket"
 * 
 * @param _name 
 * @param _dailyEarnings 
 */
Supermarket::Supermarket(string _name, float _dailyEarnings){
	name = _name;
	dailyEarnings = _dailyEarnings;
}

/**
 * @brief getter del atributo name
 * 
 * @return string 
 */
string Supermarket::getName(){
	return name;
}

/**
 * @brief getter del atributo dailyEarnings
 * 
 * @return float 
 */
float Supermarket::getDailyEarnings(){
	return dailyEarnings;
}

/**
 * @brief getter del atributo employee
 * 
 * @return int 
 */
int Supermarket::getEmployee(){
	return employee;
}

/**
 * @brief setter del atributo name
 * 
 * @param _name 
 */
void Supermarket::setName(string _name){
	name = _name;
}

/**
 * @brief setter del atributo dailyEarnings
 * 
 * @param _dailyEarnings 
 */
void Supermarket::setDailyEarnings(float _dailyEarnings){
	dailyEarnings = _dailyEarnings;
}

/**
 * @brief setter del atributo employee
 * 
 * @param _employee 
 */
void Supermarket::setEmployee(int _employee){
	employee = _employee;
}





