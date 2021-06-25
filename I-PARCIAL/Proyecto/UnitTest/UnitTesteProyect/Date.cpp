/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Date.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael
 * Author:  Calvopi�a David
 * Author:  Hidrobo Nicolas
 * Autor:   Pati�o Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Tuesday, June 1, 2021 12:53:55 PM
 * Purpose: Prototyps of the class Date.cpp
 ***********************************************************************/

#include <iomanip>
#include <sstream>
#include <string>
#include "Date.h"

 ////////////////////////////////////////////////////////////////////////
 // Name:       Date::Date()
 // Purpose:    Implementation of constructor Date::Date()
 // Parameters:
 // - day, _month, _year
 // Return:     
 ////////////////////////////////////////////////////////////////////////

Date::Date(int _day, int _month, int _year) {
	this->day = _day;
	this->month = _month;
	this->year = _year;
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::Date()
// Purpose:    Implementation of getter Date::getDate()
// Parameters:
// - 
// Return:  int   
////////////////////////////////////////////////////////////////////////

int Date::getDay() {
	return day;
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::setDay()
// Purpose:    Implementation of setter Date::setDate(int newDay)
// Parameters:
// - newDay
// Return:  void
////////////////////////////////////////////////////////////////////////

void Date::setDay(int newDay) {
	day = newDay;
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::getMonth()
// Purpose:    Implementation of getter Date::getMonth()
// Parameters:
// - 
// Return:  int
////////////////////////////////////////////////////////////////////////

int Date::getMonth() {
	return month;
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::setMonth()
// Purpose:    Implementation of setter Date::setMonth(int newMonth)
// Parameters:
// - newMonth
// Return:  void
////////////////////////////////////////////////////////////////////////

void Date::setMonth(int newMonth) {
	month = newMonth;
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::getYear()
// Purpose:    Implementation of getter Date::getYear()
// Parameters:
// - 
// Return:  int
////////////////////////////////////////////////////////////////////////

int Date::getYear() {
	return year;
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::setYear()
// Purpose:    Implementation of setter Date::setYear()
// Parameters:
// - newYear
// Return:  void
////////////////////////////////////////////////////////////////////////

void Date::setYear(int newYear) {
	year = newYear;
}

string Date::datosFecha() {
	stringstream s;
	s << day << "/" << month << "/" << year;
	return s.str();
}
Date Date::validarFeriado(int day, int month, int year) {
    Date* feriados = new Date[12];
    Date date2(day, month, year);

    *(feriados + 0) = Date(1, 1, 1);
    *(feriados + 1) = Date(15, 2, 1);
    *(feriados + 2) = Date(16, 2, 1);
    *(feriados + 3) = Date(2, 4, 1);
    *(feriados + 4) = Date(1, 5, 1);
    *(feriados + 5) = Date(24, 5, 1);
    *(feriados + 6) = Date(9, 8, 1);
    *(feriados + 7) = Date(9, 9, 1);
    *(feriados + 8) = Date(2, 11, 1);
    *(feriados + 9) = Date(3, 11, 1);
    *(feriados + 10) = Date(25, 12, 1);
    *(feriados + 11) = Date(31, 12, 1);

    for (int i = 0; i < 11; i++) {
        if ((feriados + i)->getDay() == day && (feriados + i)->getMonth() == month) {
            if (day + 1 > (month, year)) {
                if (month + 1 > 12) {
                    year++;
                    month = 1;
                    day = 1;
                }
                else {
                    month++;
                    day = 1;
                }
            }
            else {
                day++;
            }
            date2.setDay(day);
            date2.setMonth(month);
            date2.setYear(year);
        }
    }
    return date2;