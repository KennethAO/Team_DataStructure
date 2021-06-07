#pragma once
#include "Position.h"

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

#include <sstream>

using namespace std;

Disk::Disk(int _color, Position _position, int _number, int _size)
{
	this->color = _color;
	this->position = _position;
	this->number = _number;
	this->size = _size;

}

Disk::Disk()
{

}

Disk::~Disk()
{
	// TODO : implement
}

int Disk::getColor() {
	return color;
}

void Disk::setColor(int newColor) {
	color = newColor;
}

Position Disk::getPosition() {
	return position;
}

void Disk::setPosition(Position newPosition) {
	position = newPosition;
}

int Disk::getNumber(void)
{
	return number;
}

void Disk::setNumber(int newNumber)
{
	number = newNumber;
}


string Disk::toString() {
	stringstream s;
	s << "color: " << color << endl;
	s << "Posicion: " << position.toString() << endl;
	s << "numero de torre: " << number << endl;

	return s.str();
}
