/***********************************************************************
 * Module:  Person.h
 * Author:  Rafa
 * Modified: Tuesday, June 1, 2021 12:53:41 PM
 * Purpose: Declaration of the class Person
 ***********************************************************************/
#pragma once
#if !defined(__Class_Diagram_1_Person_h)
#define __Class_Diagram_1_Person_h
#include <iostream>
#include <string>
#include <Date.h>

using namespace std;



class Person{
   protected:
      private:
         string name;
         string surname;
         string id;
         Date birthDate;

   public:
      Person(string _name, string _surname, string _id, Date _birthDate);
      Person() = default;
      // ~Person();
      string getName(void);
      void setName(string newName);
      std::string getSurname(void);
      void setSurname(string newSurname);
      string getId(void);
      void setId(string newId);
      Date getBirthDate(void);
      void setBirthDate(Date newBirthDate);
};

#endif