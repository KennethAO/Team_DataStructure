

#include <iostream>
//#include "DateOperations.cpp"
#include "DateOperations.h"

using namespace std;

// int zeller(int day,int month,int year){

// 	int a = (14-month)/12;
// 	int y = year - a;
// 	int m = month +12 * a-2;
// 	int d = (day + y + y/4 - y/100 + y/400 + (31*m)/12)%7;

// }
int main(int argc, char** argv) {
	
	Date date;
	DateOperations ope(date);
	bool flag;
	do{
		ope.enterDate();
		flag = ope.checkDate();
		if(flag == false){
			cout<<"Fecha incorrecta vuelva a ingresar"<<endl;
		}else{
			cout<<"Fecha correcta"<<endl;
		}

	}while(flag == false);
<<<<<<< HEAD:I-PARCIAL/Deberes/DateProgram/Code/Aplicative.cpp
	cout<<"Fecha: "<<ope.generateInformatdate();
	
	
	
	
=======
	ope.generateDate(ope.enterPaymentLimit());
>>>>>>> 9685debd477272ab9441a46d991ed8e23ffbbb45:I-PARCIAL/Deberes/DateProgram/Proyecto/Aplicative.cpp

	
	return 0;
}
