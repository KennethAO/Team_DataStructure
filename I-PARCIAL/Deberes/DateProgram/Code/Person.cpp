/***********************************************************************
 * Module:  Person.cpp
 * Author:  Rafa
 * Modified: Tuesday, June 1, 2021 12:53:41 PM
 * Purpose: Implementation of the class Person
 ***********************************************************************/
#pragma once
#include <string>
#include "Person.h"
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Person::Person(std::string _name, std::string _surname, std::string _id, Date _birthDate)
// Purpose:    Implementation of Person::Person()
// Parameters:
// - _name
// - _surname
// - _id
// - _birthDate
// Return:     
////////////////////////////////////////////////////////////////////////

Person::Person(string _name, string _surname, string _id, Date _birthDate)
{
   this->name = _name;
   this->surname = _surname;
   this->id = _id;
   this->birthDate = _birthDate;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::~Person()
// Purpose:    Implementation of Person::~Person()
// Return:     
////////////////////////////////////////////////////////////////////////

// Person::~Person()
// {
//    // TODO : implement
// }

////////////////////////////////////////////////////////////////////////
// Name:       Person::getName()
// Purpose:    Implementation of Person::getName()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

string Person::getName(void)
{
   return name;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::setName(std::string newName)
// Purpose:    Implementation of Person::setName()
// Parameters:
// - newName
// Return:     void
////////////////////////////////////////////////////////////////////////

void Person::setName(string newName)
{
   name = newName;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::getSurname()
// Purpose:    Implementation of Person::getSurname()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

string Person::getSurname(void)
{
   return surname;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::setSurname(std::string newSurname)
// Purpose:    Implementation of Person::setSurname()
// Parameters:
// - newSurname
// Return:     void
////////////////////////////////////////////////////////////////////////

void Person::setSurname(string newSurname)
{
   surname = newSurname;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::getId()
// Purpose:    Implementation of Person::getId()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

string Person::getId(void)
{
   return id;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::setId(std::string newId)
// Purpose:    Implementation of Person::setId()
// Parameters:
// - newId
// Return:     void
////////////////////////////////////////////////////////////////////////

void Person::setId(string newId)
{
   id = newId;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::getBirthDate()
// Purpose:    Implementation of Person::getBirthDate()
// Return:     Date
////////////////////////////////////////////////////////////////////////

Date Person::getBirthDate(void)
{
   return birthDate;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::setBirthDate(Date newBirthDate)
// Purpose:    Implementation of Person::setBirthDate()
// Parameters:
// - newBirthDate
// Return:     void
////////////////////////////////////////////////////////////////////////

void Person::setBirthDate(Date newBirthDate)
{
   birthDate = newBirthDate;
}

