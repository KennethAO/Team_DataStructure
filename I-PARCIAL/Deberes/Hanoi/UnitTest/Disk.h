#pragma once

#include "Position.h"

#include <sstream>

using namespace std;
class Disk {

protected:
private:
	int color;
	Position position;
	int number;
	int size;
public:
	Disk(int _color, Position _position, int _number, int _size);
	Disk();
	~Disk();
	int getColor();
	void setColor(int);
	Position getPosition();
	void setPosition(Position);
	int getNumber(void);
	void setNumber(int);
	int getSize();
	void setSize(int);
	string toString();
};
Disk::Disk(int _color, Position _position, int _number, int _size)
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


int Disk::getColor() {
	return color;
}

////////////////////////////////////////////////////////////////////////
// Name:       Disk:setColor()
// Purpose:    Implementation of int Disk::setColor()
// Parameters: 
// Return:     void
////////////////////////////////////////////////////////////////////////

void Disk::setColor(int newColor) {
	color = newColor;
}

////////////////////////////////////////////////////////////////////////
// Name:       Disk:getPosition()
// Purpose:    Implementation of Position Disk::getPosition()
// Parameters: 
// Return:     Position
////////////////////////////////////////////////////////////////////////

Position Disk::getPosition() {
	return position;
}

////////////////////////////////////////////////////////////////////////
// Name:       Disk:setPosition()
// Purpose:    Implementation of Position Disk::setPosition()
// Parameters: 
// Return:     void
////////////////////////////////////////////////////////////////////////

void Disk::setPosition(Position newPosition) {
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

string Disk::toString() {
	stringstream s;
	s << "color: " << color << endl;
	s << "Posicion: " << position.toString() << endl;
	s << "numero de torre: " << number << endl;

	return s.str();
}


