
#include <iostream>
#include "DateOperations.cpp"
#include "Date.cpp"
using namespace std;

int main(int argc, char** argv) {
	
	bool flag;
	do{
		fflush(stdout);
		Date date;
		DateOperations ope(date);
		ope.enterDate();
		flag = ope.validateDate();
		if(!flag){
			cout<<"Fecha incorrecta vuelva a ingresar"<<endl;
		}
	}while(!flag);
	cout<<"Fecha correcta";
	
	
	
	


	return 0;
}
