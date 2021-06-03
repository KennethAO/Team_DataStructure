
#pragma once
#include <iostream>
#include <string>
//#include "Date.cpp"
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
        void enterDate();
        bool checkDate();
        string generateInformatdate();
<<<<<<< HEAD:I-PARCIAL/Deberes/DateProgram/Code/DateOperations.h
        //void printDates(Date,int );
=======
        void generateDate(int);
>>>>>>> 9685debd477272ab9441a46d991ed8e23ffbbb45:I-PARCIAL/Deberes/DateProgram/Proyecto/DateOperations.h
};
