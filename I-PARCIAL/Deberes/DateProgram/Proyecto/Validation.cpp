/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  validation.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Tuesday, June 1, 2021 12:53:55 PM
 * Purpose: Prototyps of the class Validation.cpp
 ***********************************************************************/
 
 
////////////////////////////////////////////////////////////////////////
// Name:       static::verifyLeapYear()
// Purpose:    Implementation of  string::verifyLeapYear(int year)
// Parameters:
// - _year
// Return:     bool
////////////////////////////////////////////////////////////////////////

static bool verifyLeapYear(int year){

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        return true;
    }else{
        return false;
    }
   
}

////////////////////////////////////////////////////////////////////////
// Name:       static::verifyDayInMonth()
// Purpose:    Implementation of  string::c(int month,int year)
// Parameters:
// - _year,_month
// Return:     int
////////////////////////////////////////////////////////////////////////

static int c(int month,int year){
    int day = 31;
    if(month == 4 ||month == 6 ||month == 9 || month == 11){
        day = 30;
    }else if (month == 2){
        if(verifyLeapYear(year)){
            day = 29;
        }else{
            day = 28;
        }
    }

    return day;
}

////////////////////////////////////////////////////////////////////////
// Name:       static::validateDate()
// Purpose:    Implementation of  string::validateDate(int day,int month,int year)
// Parameters:
// - _day,_year,_month
// Return:     bool
////////////////////////////////////////////////////////////////////////

static bool validateDate(int day, int month, int year){
    bool flag;
    
    if(year>=1900 && year<=2100){
        if(verifyLeapYear(year)){
            if(month>=1 && month<=12){
                if(month==4 || month==6 || month==9 || month==11){
                    if(day>=1 && day<=30){
                        flag = true;
                    }else{
                        flag = false;
                    }
                }else if(month == 2){
                    if(day>=1 && day<=29){
                        flag = true;
                    }else{
                        flag = false;
                    }
                }else{
                    if(day>=1 && day<=31){
                        flag = true;
                    }else{
                        flag = false;
                    }
                }
            }else{
                flag = false;
            }
        }
        else{
            if(month>=1 && month<=12){
                if(month==4 || month==6 || month==9 || month==11){
                    if(day>=1 && day<=30){
                        flag = true;
                    }else{
                        flag = false;
                    }

                }else if(month == 2){
                    if(day>=1 && day<=28){
                        flag = true;
                    }else{
                        flag = false;
                    }
                }else{
                    if(day>=1 && day<=31){
                        flag = true;
                    }else{
                        flag = false;
                    }
                }
            }else{
                flag = false;
            }
        }
    }else{
        flag = false;
    }

    return flag;
}

////////////////////////////////////////////////////////////////////////
// Name:       static::zeller()
// Purpose:    Implementation of  string::zeller(int day,int month,int year)
// Parameters:
// - _day,_year,_month
// Return:     int
////////////////////////////////////////////////////////////////////////

static int zeller(int day,int month,int year){
    int a = (14-month)/12;
	int y = year - a;
	int m = month +12 * a-2;
	int d = (day + y + y/4 - y/100 + y/400 + (31*m)/12)%7;
    return d;
}

////////////////////////////////////////////////////////////////////////
// Name:       static::validateNumber()
// Purpose:    Implementation of  string::validateNumber(int number)
// Parameters:
// - _number
// Return:     bool
////////////////////////////////////////////////////////////////////////

static bool validateNumber(int number){
    if(number > 0){
        return true;
    }
    else{
        return false;
    }

}

////////////////////////////////////////////////////////////////////////
// Name:       static::verifyDayInMonth()
// Purpose:    Implementation of  string::verifyDayInMonth()
// Parameters:
// - month, year
// Return:     int
////////////////////////////////////////////////////////////////////////

static int verifyDayInMonth(int month,int year){
    int day = 31;
    if(month == 4 ||month == 6 ||month == 9 || month == 11){
        day = 30;
    }else if (month == 2){
        if(verifyLeapYear(year)){
            day = 29;
        }else{
            day = 28;
        }
    }

    return day;
}




