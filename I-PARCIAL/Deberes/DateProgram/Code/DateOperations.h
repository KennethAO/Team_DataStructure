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
        DateOperations(Date _date);
        void enterDate();
        bool checkDate();
        string generateInformatdate();
        //void printDates(Date,int );
};
