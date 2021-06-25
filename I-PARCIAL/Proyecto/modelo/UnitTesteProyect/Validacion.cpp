/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  validation.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael
 * Author:  Calvopi�a David
 * Author:  Hidrobo Nicolas
 * Autor:   Pati�o Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Tuesday, June 1, 2021 12:53:55 PM
 * Purpose: Prototyps of the class Validation.cpp
 ***********************************************************************/

#include "Date.h"

static bool verifyLeapYear(int year) {

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return true;
    }
    else {
        return false;
    }

}

static int verifyDayInMonth(int month, int year) {
    int day = 31;
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        day = 30;
    }
    else if (month == 2) {
        if (verifyLeapYear(year)) {
            day = 29;
        }
        else {
            day = 28;
        }
    }

    return day;
}

static bool validateDate(int day, int month, int year) {

    bool flag;
    if (year >= 1900 && year <= 2100) {
        if (verifyLeapYear(year)) {
            if (month >= 1 && month <= 12) {
                if (month == 4 || month == 6 || month == 9 || month == 11) {
                    if (day >= 1 && day <= 30) {
                        flag = true;
                    }
                    else {
                        flag = false;
                    }
                }
                else if (month == 2) {
                    if (day >= 1 && day <= 29) {
                        flag = true;
                    }
                    else {
                        flag = false;
                    }
                }
                else {
                    if (day >= 1 && day <= 31) {
                        flag = true;
                    }
                    else {
                        flag = false;
                    }
                }
            }
            else {
                flag = false;
            }
        }
        else {
            if (month >= 1 && month <= 12) {
                if (month == 4 || month == 6 || month == 9 || month == 11) {
                    if (day >= 1 && day <= 30) {
                        flag = true;
                    }
                    else {
                        flag = false;
                    }

                }
                else if (month == 2) {
                    if (day >= 1 && day <= 28) {
                        flag = true;
                    }
                    else {
                        flag = false;
                    }
                }
                else {
                    if (day >= 1 && day <= 31) {
                        flag = true;
                    }
                    else {
                        flag = false;
                    }
                }
            }
            else {
                flag = false;
            }
        }
    }
    else {
        flag = false;
    }

    return flag;
}

//static int zeller(int day, int month, int year) {
//    int a = (14 - month) / 12;
//    int y = year - a;
//    int m = month + 12 * a - 2;
//    int d = (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
//    return d;
//}
//
//static bool validateNumber(int number) {
//    if (number > 0) {
//        return true;
//    }
//    else {
//        return false;
//    }
//
//}
//
//static Date checkWorkDate(Date date) {
//    int day = zeller(date.getDay(), date.getMonth(), date.getDay());
//
//    if (day == 0) {
//        date.setDay(date.getDay() + 1);
//    }
//    else if (day == 6) {
//
//        date.setDay(date.getDay() + 2);
//    }
//
//    return date;
//}