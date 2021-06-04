/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Aplicative.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Tuesday, June 1, 2021 12:53:55 PM
 * Purpose: Declaration of the class Date
 ***********************************************************************/

#include <iostream>
#include "DateOperations.h"

using namespace std;


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
	cout<<endl<<endl;
	cout<<ope.generateInformatdate();
	ope.generateDate(ope.enterPaymentLimit());


	
	return 0;
}
