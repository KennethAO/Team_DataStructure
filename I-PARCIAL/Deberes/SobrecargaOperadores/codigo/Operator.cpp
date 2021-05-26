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
#include "Operator.h"
#include <string>
#include <math.h>

/**
 * @brief Constructor de la clase MarketOperation
 * 
 * @param _market 
 */
MarketOperation::MarketOperation(Supermarket _market){
	market = _market; 
}

/**
 * @brief sobrecarga del operador "+" suma las ganancias diarias de los dos supermercados
 * 
 * @param _marketOp 
 * @return float 
 */
float MarketOperation::operator +(MarketOperation _marketOp){
	return this->market.getDailyEarnings()+_marketOp.market.getDailyEarnings();
}

/**
 * @brief sobrecarga del operador "-" calcula el margen de ganancias diarias entre los dos supermercados
 * 
 * @param _marketOp 
 * @return float 
 */
float MarketOperation::operator -(MarketOperation _marketOp){
	float resp=this->market.getDailyEarnings()-_marketOp.market.getDailyEarnings();
	if(resp>=0){
		return resp;
	}else{
		return -resp;
	}
}

/**
 * @brief sobrecarga del operador "*" calcula la ganancia semanal de los dos locales
 * 
 * @param _marketOp 
 * @return float 
 */
float MarketOperation::operator *(MarketOperation _marketOp){
	return this->market.getDailyEarnings()*7+_marketOp.market.getDailyEarnings()*7;
}

//Agregar un empleado al supermercado
/**
 * @brief sobrecarga del operador "++" agrega un empleado al supermercado
 * 
 */
void MarketOperation::operator ++ (int){
	 int employee = this->market.getEmployee();
	 employee++;
	 this->market.setEmployee(employee);
}

/**
 * @brief sobrecarga del operador "--" elimina un empleado del supermercado
 * 
 */
void MarketOperation::operator -- (int){
	 int employee = this->market.getEmployee();
	 employee--;
	 this->market.setEmployee(employee);
}

/**
 * @brief sobrecarga del operador ">" calcula el supermercado que ha tenido mayor ganancias
 * 
 * @param _marketOp 
 * @return string 
 */
string MarketOperation::operator > (MarketOperation _marketOp){
	if(this->market.getDailyEarnings()>(_marketOp.market.getDailyEarnings())){
		return this->market.getName();
	}else if(this->market.getDailyEarnings()==(_marketOp.market.getDailyEarnings())){
		return "Ambas ganancias son equitativas";
	}
	else{
		return _marketOp.market.getName();
	}
}

//Calcula el menor que ha tenido ganancias
/**
 * @brief sobrecarga del operador "<" calcula el supermercado que ha tenido menor ganancias
 * 
 * @param _marketOp 
 * @return string 
 */
string MarketOperation::operator < (MarketOperation _marketOp){
	if(this->market.getDailyEarnings()<(_marketOp.market.getDailyEarnings())){
		return this->market.getName();
	}else if(this->market.getDailyEarnings()==(_marketOp.market.getDailyEarnings())){
		return "Ambas ganancias son equitativas";
	}else{
		return _marketOp.market.getName();
	}
}

/**
 * @brief sobrecarga del operador "*=" calcula los dias y los multiplica por las ganancias diarias 
 * 
 * @param year 
 * @return float 
 */
float MarketOperation::operator *= (float year){
	float daily= this->market.getDailyEarnings();
    return daily*=year;
}

/**
 * @brief sobrecarga del operador "%" calcula el porcentaje de ganancias en un supermarket
 * 
 * @param porcent 
 * @return float 
 */
float MarketOperation::operator % (int porcent){
	float porcentage = this->market.getDailyEarnings();
	return (porcentage*100)/(500);
}

/**
 * @brief sobrecarga del operador "==" calcula si el numero de empleados es igual entre los supermercados
 * 
 * @param _marketOp 
 * @return string 
 */
string MarketOperation::operator == (MarketOperation _marketOp){
	if(this->market.getEmployee()==_marketOp.market.getEmployee()){
		return "Mismo numero de empleados";
	}else{
		return "No tienen mismo numero de empleados";
	}
}

/**
 * @brief sobrecarga del operador "!=" cambia el bombre del supermercado
 * 
 * @param _name 
 */
void MarketOperation::operator != (string _name){
	string nameMarket = this->market.getName();
	string name = _name;
	int compare = _name.compare(nameMarket);
	if(compare!=0){
		cout<<_name.compare(nameMarket)<<endl;
		this->market.setName(name);
	}
}

/**
 * @brief sobrecarga del operador "||" calcula si el supermercado tiene muchos o pocos empleados
 * 
 * @param _number 
 * @return string 
 */
string MarketOperation::operator || (float _number){
		if(this->market.getEmployee()>_number || this->market.getEmployee()<_number){
			return "Supermercado con demasiados empleados o con falta de los mismos";
		}else{
			return "Supermercado con empleados al dia";
		}
}

/**
 * @brief sobrecarga del operador "&&" calcula si la empresa ha tenido un buen desempe�o con un salario puesto de base
 * 
 * @param _number 
 * @return string 
 */
string MarketOperation::operator && (float _number){
	if(_number>this->market.getDailyEarnings()&&this->market.getDailyEarnings()>200){
		return "Supermercado cumpliendo con sus tareas";
	}else{
		return "Supermercado no cumple con sus tareas";
	}
}

/**
 * @brief sobrecarga del operador "|" calcula la ganancia mensual segun el numero de dias del mes 
 * 
 * @param numberDay 
 * @return float 
 */
float MarketOperation::operator | (int numberDay){
	return this->market.getDailyEarnings()*numberDay;
}

/**
 * @brief sobrecarga del operador "/" calcula el dinero equitativo que hiso cada empleado segun las ganancias de la empresa.
 * 
 * @param employee 
 * @return float 
 */
float MarketOperation::operator / (int employee){
	return this->market.getDailyEarnings()/employee;
}

/**
 * @brief sobrecarga del operador "^" eleva al cuadrado las ganancias de la empresa.
 * 
 * @param numberToElevate 
 * @return float 
 */
float MarketOperation::operator ^ (float numberToElevate){
	return pow(this->market.getDailyEarnings(),numberToElevate);
}

/**
 * @brief sobrecarga del operador "[]" suma ambos numero de empleados y consigue un total.
 * 
 * @param market 
 * @return int 
 */
int MarketOperation::operator [] (MarketOperation market){
	return this->market.getEmployee()+market.market.getEmployee();
}

//Elimina a todos los empleados de ambos supermercados
/**
 * @brief sobrecarga del operador "%=" elimina a todos los empleados de ambos supermercados
 * 
 * @param market 
 * @return string 
 */
string MarketOperation::operator %= (MarketOperation market){
	this->market.setEmployee(0);
	market.market.setEmployee(0);
	return "Empleados eliminados de ambas empresas";
}

