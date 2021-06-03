
/***********************************************************************
 * Module:  Date.cpp
 * Author:  Rafa
 * Modified: Tuesday, June 1, 2021 12:53:55 PM
 * Purpose: Implementation of the class Date
 ***********************************************************************/

#include <iomanip>
#include <sstream>
#include <string>
#include "Date.h"


Date::Date(int _day, int _month, int _year){
   this->day = _day;
   this->month = _month;
   this->year = _year;
}

int Date::getDay(){
   return day;
}

void Date::setDay(int newDay){
   day = newDay;
}

int Date::getMonth(){
   return month;
}

void Date::setMonth(int newMonth){
   month = newMonth;
}

int Date::getYear(){
   return year;
}

void Date::setYear(int newYear){
   year = newYear;
}



