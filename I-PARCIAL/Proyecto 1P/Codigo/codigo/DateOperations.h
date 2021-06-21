/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  DateOperations.h
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopi�a David
 * Author:  Hidrobo Nicolas
 * Autor:   Pati�o Bryan
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
        DateOperations() = default;
        int enterPaymentLimit();
        int ingresar(int);
        Date enterDate();
        bool checkDate(Date);
        string generateInformatdate(Date);
        void generateDate(int,Date);
        Date validarDiaLaboral(int,int,int);
        Date validarFeriado(int,int,int);
        
};
