/***********************************************************************
 * Module:  Date.h
 * Author:  Rafa
 * Modified: Tuesday, June 1, 2021 12:53:55 PM
 * Purpose: Declaration of the class Date
 ***********************************************************************/
#pragma once
#if !defined(__Class_Diagram_1_Date_h)
#define __Class_Diagram_1_Date_h


class Date{
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
};

#endif