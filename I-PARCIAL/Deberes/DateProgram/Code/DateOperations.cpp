#pragma once
#include <iostream>
#include <ctime>
#include "DateOperations.h"


using namespace std;

DateOperations::DateOperations(Date _date){
    this->date = _date;
    days[0]="Lunes";days[1]="Martes";days[2]="Miercoles";days[3]="jueves";days[4]="Viernes";days[5]="Sabado";days[6]="Domingo";
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
    //cout<<"Fecha: "<<date.getDay()<<"/"<<date.getMonth()<<"/"<<date.getYear();
}

bool DateOperations::validateDate(){
    bool flag;
    if(date.getDay() >=1 && date.getDay() <= 31){
        if(date.getMonth() >=1 && date.getMonth() <= 12){
            if(date.getYear() >=1900 && date.getYear() <= 2100){
                if(leapDate()){
                    flag = true;
                }else{
                    flag = false;
                }  
            }else{
                flag = false;
            }
        }else{
            flag = false;
        }
    }else{
        flag = false;
    }

    return flag;

}

bool DateOperations::leapDate(){
    bool flag;
    if(date.getMonth()==4 || date.getMonth()==6 || date.getMonth()==9 || date.getMonth()==11){
        if(date.getDay() >=1 && date.getDay() <=30){
            flag = true;
        }else{
            flag = false;
        }

    }else{
        if(date.getMonth()==2){
            if(date.getYear() % 4 == 0 && date.getYear() % 100 != 0 || date.getYear() % 400 == 0){
                if(date.getDay() >=1 && date.getDay() <=29){
                    flag = true;
                }
            }else{
                if(date.getDay() >=1 && date.getDay() <=28){
                    flag = true;
                }else{
                    flag = false;
                }
            }
        }else{
            flag = true;
        }
    }
    return flag;    
}





