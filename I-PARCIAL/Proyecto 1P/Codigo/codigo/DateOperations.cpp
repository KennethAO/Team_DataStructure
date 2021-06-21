/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  DateOperations.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopi�a David
 * Author:  Hidrobo Nicolas
 * Autor:   Pati�o Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Tuesday, June 1, 2021 12:53:55 PM
 * Purpose: Details of prototyps of the functions of DateOperations
 ***********************************************************************/
#include <iostream>
#include <ctime>
#include <string>
#include <string.h>
#include <conio.h>

#include "DateOperations.h"
#include "Validation.cpp"


using namespace std;

DateOperations::DateOperations(Date _date){
    this->date = _date;
    days[0]="Domingo";days[1]="Lunes";days[2]="Martes";days[3]="Miercoles";days[4]="Jueves";days[5]="Viernes";days[6]="Sabado";
    months[0]="Enero";months[1]="Febrero";months[2]="Marzo";months[3]="Abril";months[4]="Mayo";months[5]="Junio";
    months[6]="Julio";months[7]="Agosto";months[8]="Septiembre";months[9]="Octubre";months[10]="Noviembre";months[11]="Diciembre";
}

int DateOperations::ingresar(int dim){

    char dato[dim];
	int i,valor;
    char tecla;
    i = 0;
    dato[0] = '\0';
    do
    {

        tecla = getch ();
        if ( i > 0 && tecla == 8 ){
            cout<<"\b \b";
            dato[--i] = '\0';
        }else{
	        if(i<dim){
				if ( (tecla >= 48 && tecla <= 57)){
	                cout<<tecla;
	                dato[i++] = tecla;
	            }
	        }
		}
        
		
    } while ((tecla != 13 || dato[0] == '\0'));
    dato[i] = '\0';

    valor=atoi(dato);
    return valor;
}

Date DateOperations::enterDate(){
    bool verificador;
    Date fecha;
    int day,month,year;
    do
    {

        day=0;month=0;year=0;
        cout<<"Ingrese la fecha en formato dd/mm/aa: ";
        day = ingresar(2);
        cout<<"/";
        month = ingresar(2);
        cout<<"/";
        year = ingresar(4);
        verificador = validateDate(day,month,year);
        if(verificador == false){
            cout<<endl;
            cout << "\e[A\r\e[0K";
        }
    } while (verificador == false);

    fecha.setDay(day);fecha.setMonth(month);fecha.setYear(year);

    return fecha;
}

bool DateOperations::checkDate(Date date){
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

string DateOperations::generateInformatdate(Date date){
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

void DateOperations::generateDate(int numbermonth,Date date){
    int day,month,year,dayAux;
    day = date.getDay();
    dayAux = day;
    month = date.getMonth();
    year = date.getYear();
    
    for(int i =0;i<numbermonth;i++){
    	if(month+1 >12){
	    	month = 1;
	    	year++;
		}else{
			month++;
		}
	    if(day > verifyDayInMonth(month,year)){
            dayAux = verifyDayInMonth(month,year);
        }
		else{
			dayAux = day;
		}
        date = validarFeriado(dayAux,month,year);
        date = validarDiaLaboral(date.getDay(),date.getMonth(),date.getYear());
        //24 05 2021 
        date = validarFeriado(date.getDay(),date.getMonth(),date.getYear());
        //siempre va a caer lunes algunos feriados 

		//date.setDay(dayAux);date.setMonth(month);date.setYear(year);
		//cout<<generateInformatdate(date)<<endl;
        cout<<endl;
        cout<<date.getDay()<<"/";
        cout<<date.getMonth()<<"/";
        cout<<date.getYear();
        cout<<endl;
	}
}

int DateOperations::enterPaymentLimit(){
    
    int numberMonth;
    do{
        cout<<"\nIngrese el numero de meses: ";
        cin>>numberMonth;
        if(validateNumber(numberMonth)==false){
            cout<<"Dato ingresado no valido";
        }
    }while(validateNumber(numberMonth)==false);

    return numberMonth;
}

Date DateOperations::validarDiaLaboral(int day,int month, int year){
    if(zeller(day,month,year)==0){
        if(day+1>verifyDayInMonth(month,year)){
            if(month+1>12){
                year++;
                month=1;
                day=1;
            }else{
                month++;
                day = 1;
            }
        }
        else{
            day++;
        }
    }
    else if(zeller(day,month,year)==6){
        if(day+2>verifyDayInMonth(month,year)){
            if(month+1>12){
                year++;
                month=1;
                day=1;
            }else{
                month++;
                day = 1;
            }
        }
        else{
            day=day+2;
        }
    }
    Date date1(day,month,year);
    return date1;
}



Date DateOperations::validarFeriado(int day,int month,int year){
    Date *feriados=new Date[12];
    Date date2(day,month,year);

    *(feriados+0) = Date(1,1,1);
    *(feriados+1) = Date(15,2,1);
    *(feriados+2) = Date(16,2,1);
    *(feriados+3) = Date(2,4,1);
    *(feriados+4) = Date(1,5,1);
    *(feriados+5) = Date(24,5,1);
    *(feriados+6) = Date(9,8,1);
    *(feriados+7) = Date(9,9,1);
    *(feriados+8) = Date(2,11,1);
    *(feriados+9) = Date(3,11,1);
    *(feriados+10) = Date(25,12,1);
    *(feriados+11) = Date(31,12,1);

    for(int i=0;i<11;i++){
        if((feriados+i)->getDay()==day && (feriados+i)->getMonth()==month){
            if(day+1>verifyDayInMonth(month,year)){
                if(month+1>12){
                    year++;
                    month=1;
                    day=1;
                }else{
                    month++;
                    day = 1;
                }
            }
            else{
                day++;
            } 
        date2.setDay(day);
        date2.setMonth(month);
        date2.setYear(year);
        }
    }
    return date2; 
}   

