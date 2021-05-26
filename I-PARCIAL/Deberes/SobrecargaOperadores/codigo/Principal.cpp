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
#include <iostream>
#include "Operator.cpp"

using namespace std; 

int main() {
	string super1,super2;
	float profit1,profit2,year = 360;
	int employee1,employee2,numberE;
	fflush(stdin);
	cout<<"Ingrese el nombre de el 1er supermercado: ";
	cin>>super1;
	fflush(stdin);
	cout<<"ingrese el valor en ganancias en dolares del 1er supermercado: ";
	cin>>profit1;
	cout<<"Ingrese el nombre de el 2do supermercado: ";
	cin>>super2;
	fflush(stdin);
	cout<<"Ingrese el valor en ganancias en dolares del 2do supermercado: ";
	cin>>profit2;
	cout<<"Ingrese el numero de empleados para "<<super1<<" :";
	cin>>employee1;
	cout<<"Ingrese el numero de empleados para "<<super2<<" :";
	cin>>employee2;
	cout<<endl<<endl;
	
	Supermarket supermarket1(super1,profit1);
	Supermarket supermarket2(super2,profit2);
	supermarket1.setEmployee(employee1);
	supermarket2.setEmployee(employee2);
	MarketOperation marketOp(supermarket1);
    MarketOperation marketOp2(supermarket2);
    cout<<"La suma de las ganancias diarias de ambos supermercados es de: "<<marketOp+marketOp2<<" dolares"<<endl;
	cout<<"El margen de diferencia en ganancia entre ambos supermercados es de: "<<marketOp-marketOp2<<" dolares"<<endl;
	cout<<"La suma de las ganancias semanales de ammbos supermercados es de: "<<marketOp*marketOp2<<" dolares"<<endl; 
	cout<<endl;
	do{
		cout<<"Marque (1) si quiere agregar un empleado a ("<<super1<<") o (2) si quiere agregar un empleado a ("<<super2<<"): "; 
		cin>>numberE;
		if(numberE==1){
				marketOp++;
				cout<<"Se ha anadido un empleado a : ("<<super1<<") # de empleados actuales: "<<employee1+1;
				employee1=employee1+1;
			}else if(numberE==2){
				marketOp2++;
			   cout<<"Se ha anadido un empleado a : ("<<super2<<") # de empleados actuales: "<<employee2+1;
			   employee2=employee2+1;
			}
	}while(numberE!=1 && numberE!=2);
	cout<<endl;
	cout<<endl;
	do{
		cout<<"Marque (1) si quiere eliminar un empleado de ("<<super1<<") o (2) si quiere eliminar un empleado de ("<<super2<<") : "; 
		cin>>numberE;
		if(numberE==1){
				marketOp--;
				cout<<"Se ha eliminado un empleado a : ("<<super1<<") # de empleados actuales: "<<employee1-1;
				employee1=employee1-1;
			}else if(numberE==2){
				marketOp2--;
			    cout<<"Se ha eliminado un empleado a : ("<<super2<<") # de empleados actuales: "<<employee2-1;
			   	employee2=employee2-1;
			}
	}while(numberE!=1 && numberE!=2);
	cout<<endl;
	cout<<endl;
	string nameHighter= marketOp>marketOp2;
	string nameLess= marketOp<marketOp2;
	float expectedProfit = 500;
	float prefileMax1 = marketOp*=year;
	float prefileMax2 = marketOp2*=year;
	string employeeEq = marketOp==marketOp2;
	cout<<"El supermercado que ha obtenido mayores ganancias es: "<<nameHighter<<endl;
	cout<<"El supermercado que ha obtenido menores ganancias es: "<<nameLess<<endl;
	cout<<"La ganancia anual de "<<super1<<" es de: "<<prefileMax1<<" dolares"<<endl;
	cout<<"La ganancia anual de "<<super2<<" es de: "<<prefileMax2<<" dolares"<<endl;
	cout<<"Siendo 500$ el valor esperado de ganancia para la empresa..."<<endl;
	cout<<"El porcentaje de ganancias en "<<super1<<" es de: "<<marketOp%expectedProfit<<" %"<<endl;
	cout<<"El porcentaje de ganancias en "<<super2<<" es de: "<<marketOp2%expectedProfit<<" %"<<endl;
	cout<<"En cuanto al numero de empleados: "<<employeeEq<<endl;
	cout<<endl;
	cout<<endl;
	string newSuper;
	string newW;
	cout<<endl;
	do{
		cout<<"Marque (1) si quiere cambiar de nombre a ("<<super1<<") o (2) si quiere cambiar de nombre a ("<<super2<<") : "; 
		cin>>numberE;
		cout<<"Ingrese el nuevo nombre: ";
		cin>>newSuper;
		if(numberE==1){
				marketOp!=(newSuper);
				supermarket1.setName(newSuper);
				cout<<"Se ha cambiado el nombre del supermercado de : ("<<super1<<") a : "<<newSuper<<endl;
			}else if(numberE==2){
				marketOp2!=(newSuper);
				supermarket2.setName(newSuper);
			    cout<<"Se ha cambiado el nombre del supermercado de : ("<<super2<<") a : "<<newSuper<<endl;
			}
	}while(numberE!=1 && numberE!=2);
	cout<<endl;
	cout<<endl;
	cout<<"El numero de empleados base es de : 30"<<endl;
	string value = marketOp||(15);
	string value2 = marketOp||(15);
	cout<<"Para "<<supermarket1.getName()<<" : "<<value<<endl;
	cout<<"Para "<<supermarket2.getName()<<" : "<<value2<<endl;
	cout<<endl;
	cout<<endl;
	float salaryBase=1000;
	string salaryBas,salaryBas2;
	cout<<"La ganancia base para cualquier supermercado es: 1000"<<endl;
	salaryBas= marketOp&&(salaryBase);
	cout<<"Para ("<<supermarket1.getName()<<") "<<salaryBas<<endl; 
	salaryBas2 = marketOp2&&(salaryBase);
	cout<<"Para ("<<supermarket2.getName()<<") "<<salaryBas2<<endl; 
	cout<<endl;
	cout<<endl;
	int marketMonth;
	float marketMon,marketMon2;
	cout<<"Ingrese cantidad de dias de un mes especifico para calcular la ganancia mensual: ";
	cin>>marketMonth;
	marketMon=marketOp|marketMonth;
	marketMon2=marketOp2|marketMonth;
	cout<<"Para ("<<supermarket1.getName()<<") "<<" su ganancia mensual es de: "<<marketMon<<endl; 
	cout<<"Para ("<<supermarket2.getName()<<") "<<" su ganancia mensual es de: "<<marketMon2<<endl; 
	cout<<endl;
	cout<<endl;
	int emp;
	cout<<"Ingrese el numero de empleados destacados ";
	cin>>emp; 
	float employeeP1= marketOp/emp;
	float employeeP2= marketOp2/emp;
	cout<<"La ganancia por empleado seleccionado en "<<supermarket1.getName()<<" es de: "<<employeeP1<<endl;
	cout<<"La ganancia por empleado seleccionado en "<<supermarket2.getName()<<" es de: "<<employeeP2<<endl;
	employeeP1 = marketOp^2;
	cout<<"Las ganancias de la empresa "<<supermarket1.getName()<<" elevada al cuadrado es de: "<<employeeP1<<endl;
	employeeP2 = marketOp2^2;
	cout<<"Las ganancias de la empresa "<<supermarket2.getName()<<" elevada al cuadrado es de: "<<employeeP2<<endl;
	employeeP1 = marketOp[marketOp2];
	cout<<"El numero total de empleados entre las dos empresas es de: "<<employeeP1<<endl;
	string eliminate = marketOp%=marketOp2;
	cout<<eliminate; 

	return 0;
}
