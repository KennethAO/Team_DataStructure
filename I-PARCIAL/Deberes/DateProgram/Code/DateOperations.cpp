//#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include "DateOperations.h"
#include "Validation.cpp"


using namespace std;



DateOperations::DateOperations(Date _date){
    this->date = _date;
    days[0]="Domingo";days[1]="Lunes";days[2]="Martes";days[3]="Miercoles";days[4]="Jueves";days[5]="Viernes";days[6]="Sabado";
    months[0]="Enero";months[1]="Febrero";months[2]="Marzo";months[3]="Abril";months[4]="Mayo";months[5]="Junio";
    months[6]="Julio";months[7]="Agosto";months[8]="Septiembre";months[9]="Octubre";months[10]="Noviembre";months[11]="Diciembre";
}

void DateOperations::enterDate(){
    int day,month,year;
    
    cout<<"\nIngrese dia: ";
    cin>>day;
    cout<<"Ingrese mes: ";
    cin>>month;
    cout<<"Ingrese anio: ";
    cin>>year;
    date.setDay(day);
    date.setMonth(month);
    date.setYear(year);
}

bool DateOperations::checkDate(){
    bool flag;
    if(validateDate(date.getDay(),date.getMonth(),date.getYear())){
        int day = zeller(date.getDay(),date.getMonth(),date.getYear());
        if(day == 0 || day == 6){
            flag = false;
        }
        else{
            flag = true;
        }
    }else{
        flag = false;
    }
    return flag;
}


string DateOperations::generateInformatdate(){
    int numberDay;
    string day,month,year,d = "";
    numberDay = zeller(date.getDay(),date.getMonth(),date.getYear());
    for(int i=0;i<7;i++){
        if(i == numberDay ){
            d += days[i];
            d += " ";
            d += to_string(date.getDay());
        }
    }
    for(int i=0;i<12;i++){
        if(i == (date.getMonth()-1) ){
            d += " de ";
            d += months[i];
        }
    }
    d += " de ";
    d += to_string(date.getYear());
    return d;
  
}

/* void DataOperations::printDates(Date dates[], int dim){
	for (int i = 0; i < dim; i++) {
		cout << "Ustede debe pagar las fechas: \n" <<endl;
		cout << dates[i] << "\n" << endl; 
	}
} */



