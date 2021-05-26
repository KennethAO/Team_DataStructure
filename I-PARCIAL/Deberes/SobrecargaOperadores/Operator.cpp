#include "Operator.h"
#include <string>
#include <math.h>

MarketOperation::MarketOperation(Supermarket _market){
	market = _market; 
}

//Suma las ganancias diarias de los dos supermercados
float MarketOperation::operator +(MarketOperation _marketOp){
	return this->market.getDailyEarnings()+_marketOp.market.getDailyEarnings();
}
//Calcula el margen de ganancias diarias entre los dos supermercados
float MarketOperation::operator -(MarketOperation _marketOp){
	float resp=this->market.getDailyEarnings()-_marketOp.market.getDailyEarnings();
	if(resp>=0){
		return resp;
	}else{
		return -resp;
	}
}

//Calcular la ganancia semanal de los dos locales
float MarketOperation::operator *(MarketOperation _marketOp){
	return this->market.getDailyEarnings()*7+_marketOp.market.getDailyEarnings()*7;
}

//Agregar un empleado al supermercado
void MarketOperation::operator ++ (int){
	 int employee = this->market.getEmployee();
	 employee++;
	 this->market.setEmployee(employee);
}

//Eliminar un empleado del supermercado
void MarketOperation::operator -- (int){
	 int employee = this->market.getEmployee();
	 employee--;
	 this->market.setEmployee(employee);
}
//Calcula el mayor que ha tenido ganancias
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
string MarketOperation::operator < (MarketOperation _marketOp){
	if(this->market.getDailyEarnings()<(_marketOp.market.getDailyEarnings())){
		return this->market.getName();
	}else if(this->market.getDailyEarnings()==(_marketOp.market.getDailyEarnings())){
		return "Ambas ganancias son equitativas";
	}else{
		return _marketOp.market.getName();
	}
}

//Calcula los dias y los multiplica por las ganancias diarias 

float MarketOperation::operator *= (float year){
	float daily= this->market.getDailyEarnings();
    return daily*=year;
}

//Calcula el porcentaje de ganancias en un supermarket

float MarketOperation::operator % (int porcent){
	float porcentage = this->market.getDailyEarnings();
	return (porcentage*100)/(500);
}

//Calcula si el numero de empleados es igual entre los supermercados 
string MarketOperation::operator == (MarketOperation _marketOp){
	if(this->market.getEmployee()==_marketOp.market.getEmployee()){
		return "Mismo numero de empleados";
	}else{
		return "No tienen mismo numero de empleados";
	}
}

//Coje un nuevo nombre del usuario y lo cambia por el supermercado

void MarketOperation::operator != (string _name){
	string nameMarket = this->market.getName();
	string name = _name;
	int compare = _name.compare(nameMarket);
	if(compare!=0){
		cout<<_name.compare(nameMarket)<<endl;
		this->market.setName(name);
	}
}
//Calcula si el market tiene muchos o pocos empleados

string MarketOperation::operator || (float _number){
		if(this->market.getEmployee()>_number || this->market.getEmployee()<_number){
			return "Supermercado con demasiados empleados o con falta de los mismos";
		}else{
			return "Supermercado con empleados al dia";
		}
}

//Calcula si la empresa ha tenido un buen desempeño con un salario puesto de base

string MarketOperation::operator && (float _number){
	if(_number>this->market.getDailyEarnings()&&this->market.getDailyEarnings()>200){
		return "Supermercado cumpliendo con sus tareas";
	}else{
		return "Supermercado no cumple con sus tareas";
	}
}

//Calcula la ganancia mensual segun el numero de dias del mes 

float MarketOperation::operator | (int numberDay){
	return this->market.getDailyEarnings()*numberDay;
}
//Calcula el dinero equitativo que hiso cada empleado segun las ganancias de la empresa.
//Se pondra solo empleados publicos q sean seleccionados
float MarketOperation::operator / (int employee){
	return this->market.getDailyEarnings()/employee;
}

//Eleva al cuadrado las ganancias de la empresa. 
float MarketOperation::operator ^ (float numberToElevate){
	return pow(this->market.getDailyEarnings(),numberToElevate);
}

//Suma ambo numero de empleados y consigue un total.
int MarketOperation::operator [] (MarketOperation market){
	return this->market.getEmployee()+market.market.getEmployee();
}

//Elimina a todos los empleados de ambos supermercados
string MarketOperation::operator %= (MarketOperation market){
	this->market.setEmployee(0);
	market.market.setEmployee(0);
	return "Empleados eliminados de ambas empresas";
}

