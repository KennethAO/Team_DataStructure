/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  DateOperations.h
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Tuesday, June 1, 2021 12:53:55 PM
 * Purpose: Prototyps of the class DataOperations.h
 ***********************************************************************/
 
#pragma once
#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

class DateOperations{
    protected:
        private:
            Date date;
            string days[7];
            string months[12];
    public:
        DateOperations(Date);
        int enterPaymentLimit();
        int ingresar(char *);
        void enterDate();
        bool checkDate();
        string generateInformatdate();
        void generateDate(int);
};
