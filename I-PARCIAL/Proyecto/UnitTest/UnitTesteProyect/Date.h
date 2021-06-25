/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Date.h
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael
 * Author:  Calvopi�a David
 * Author:  Hidrobo Nicolas
 * Autor:   Pati�o Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Tuesday, June 1, 2021 12:53:55 PM
 * Purpose: Prototyps of the class Date.h
 ***********************************************************************/
#pragma once
#include <iostream>

using namespace std;

class Date {
protected:
private:
    int day;
    int month;
    int year;
public:
    Date(int _day, int _month, int _year);
    Date() = default;
    // ~Date();
    int getDay(void);
    void setDay(int newDay);
    int getMonth(void);
    void setMonth(int newMonth);
    int getYear(void);
    void setYear(int newYear);
    string datosFecha();
    Date validarFeriado(int day, int month, int year);
};