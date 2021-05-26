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
#include<iostream>

using namespace std; 

/**
 * @brief Clase supermercado
 * 
 */
class Supermarket{
	
	private:
		string name;
		float dailyEarnings;
		int employee=20;
		
	public:
		Supermarket(string _name=" ", float _dailyEarnings=0);
		string getName();
		float getDailyEarnings();
		int getEmployee();
		void setName(string);
		void setDailyEarnings(float);
		void setEmployee(int);		
};
