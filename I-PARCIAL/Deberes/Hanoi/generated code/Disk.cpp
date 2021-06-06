/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Disk.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Saturday, June 5, 2021 12:53:55 AM
 * Purpose: Prototypes of the class Disk
 ***********************************************************************/

#include "Disk.h"
#include <sstream>

using namespace std;


////////////////////////////////////////////////////////////////////////
// Name:       Disk::Disk()
// Purpose:    Implementation of Disk::Disk()
// Parameters:
// - _color
//- _position
//- _number
//- _size
// Return:     void
////////////////////////////////////////////////////////////////////////


Disk::Disk(int _color, Position _position, int _number,int _size)
{
   this->color = _color;
   this->position = _position;
   this->number = _number;
   this->size = _size;
   
}

////////////////////////////////////////////////////////////////////////
// Name:       Disk::Disk()
// Purpose:    Implementation of Disk::Disk()
////////////////////////////////////////////////////////////////////////

Disk::Disk()
{
	
}
////////////////////////////////////////////////////////////////////////
// Name:       Disk::-Disk()
// Purpose:    Implementation of Disk::Disk()
// Return:     
////////////////////////////////////////////////////////////////////////


Disk::~Disk()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Disk::getColor()
// Purpose:    Implementation of int Disk::getColor()
// Parameters: 
// Return:     int
////////////////////////////////////////////////////////////////////////


int Disk::getColor(){
	return color;
}

////////////////////////////////////////////////////////////////////////
// Name:       Disk:setColor()
// Purpose:    Implementation of int Disk::setColor()
// Parameters: 
// Return:     void
////////////////////////////////////////////////////////////////////////

void Disk::setColor(int newColor){
	color = newColor;
}

////////////////////////////////////////////////////////////////////////
// Name:       Disk:getPosition()
// Purpose:    Implementation of Position Disk::getPosition()
// Parameters: 
// Return:     Position
////////////////////////////////////////////////////////////////////////

Position Disk::getPosition(){
	return position;
}

////////////////////////////////////////////////////////////////////////
// Name:       Disk:setPosition()
// Purpose:    Implementation of Position Disk::setPosition()
// Parameters: 
// Return:     void
////////////////////////////////////////////////////////////////////////

void Disk::setPosition(Position newPosition){
	position = newPosition;
}

////////////////////////////////////////////////////////////////////////
// Name:       Disk:getNumber()
// Purpose:    Implementation of Position Disk::getNumber()
// Parameters: 
// Return:     int
////////////////////////////////////////////////////////////////////////

int Disk::getNumber(void)
{
   return number;
}

////////////////////////////////////////////////////////////////////////
// Name:       Disk:setNumber()
// Purpose:    Implementation of Position Disk::setNumber()
// Parameters: 
// Return:     void
////////////////////////////////////////////////////////////////////////

void Disk::setNumber(int newNumber)
{
   number = newNumber;
}

////////////////////////////////////////////////////////////////////////
// Name:       Disk:toString()
// Purpose:    Implementation of string Disk::toString()
// Parameters: 
// Return:     string
////////////////////////////////////////////////////////////////////////

string Disk::toString(){
	stringstream s;
	s<<"color: "<<color<<endl;
	s<<"Posicion: "<<position.toString()<<endl;
	s<<"numero de torre: "<<number<<endl;
	
	return s.str();
}
