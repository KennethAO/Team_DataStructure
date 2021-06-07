/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Position.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Saturday, June 5, 2021 12:53:55 AM
 * Purpose: Prototypes of the class Position
 ***********************************************************************/

#include "Position.h"
#include <sstream>

using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Position::Position(int _x1, int _y1, int _x2, int _y2)
// Purpose:    Implementation of Position::Position()
// Parameters:
// - _x1
// - _y1
// - _x2
// - _y2
// Return:     
////////////////////////////////////////////////////////////////////////

Position::Position(int _x1, int _y1, int _x2, int _y2)
{
   this->x1 = _x1;
   this->y1 = _y1;
   this->x2 = _x2;
   this->y2 = _y2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Position::Position()
// Purpose:    Implementation of Position::Position()
// Return:     
////////////////////////////////////////////////////////////////////////

Position::Position()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Position::~Position()
// Purpose:    Implementation of Position::~Position()
// Return:     
////////////////////////////////////////////////////////////////////////

Position::~Position()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Position::getY2()
// Purpose:    Implementation of Position::getY2()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Position::getY2()
{
   return y2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Position::setY2(int newY2)
// Purpose:    Implementation of Position::setY2()
// Parameters:
// - newY2
// Return:     void
////////////////////////////////////////////////////////////////////////

void Position::setY2(int newY2)
{
   y2 = newY2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Position::getX1()
// Purpose:    Implementation of Position::getX1()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Position::getX1()
{
   return x1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Position::setX1(int newX1)
// Purpose:    Implementation of Position::setX1()
// Parameters:
// - newX1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Position::setX1(int newX1)
{
   x1 = newX1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Position::getY1()
// Purpose:    Implementation of Position::getY1()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Position::getY1()
{
   return y1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Position::setY1(int newY1)
// Purpose:    Implementation of Position::setY1()
// Parameters:
// - newY1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Position::setY1(int newY1)
{
   y1 = newY1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Position::getX2()
// Purpose:    Implementation of Position::getX2()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Position::getX2()
{
   return x2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Position::setX2(int newX2)
// Purpose:    Implementation of Position::setX2()
// Parameters:
// - newX2
// Return:     void
////////////////////////////////////////////////////////////////////////

void Position::setX2(int newX2)
{
   x2 = newX2;
}

string Position::toString(){
	stringstream s;
	s<<"x1: "<<x1<<endl;
	s<<"y1: "<<y1<<endl;
	s<<"x2: "<<x2<<endl;
	s<<"y2: "<<y2<<endl;
	
	return s.str();
}
