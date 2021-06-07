#pragma once
#include <iostream>

using namespace std;

class Position {
protected:
private:
	int x1;
	int y1;
	int x2;
	int y2;

public:
	Position(int _x1, int _y1, int _x2, int _y2);
	Position();
	~Position();
	int getY2();
	void setY2(int newY2);
	int getX1();
	void setX1(int newX1);
	int getY1();
	void setY1(int newY1);
	int getX2();
	void setX2(int newX2);
	string toString();

};

#include <sstream>

using namespace std;

Position::Position(int _x1, int _y1, int _x2, int _y2)
{
	this->x1 = _x1;
	this->y1 = _y1;
	this->x2 = _x2;
	this->y2 = _y2;
}

Position::Position()
{
}

Position::~Position()
{
	// TODO : implement
}

int Position::getY2()
{
	return y2;
}

void Position::setY2(int newY2)
{
	y2 = newY2;
}

int Position::getX1()
{
	return x1;
}

void Position::setX1(int newX1)
{
	x1 = newX1;
}

int Position::getY1()
{
	return y1;
}

void Position::setY1(int newY1)
{
	y1 = newY1;
}

int Position::getX2()
{
	return x2;
}

void Position::setX2(int newX2)
{
	x2 = newX2;
}

string Position::toString() {
	stringstream s;
	s << "x1: " << x1 << endl;
	s << "y1: " << y1 << endl;
	s << "x2: " << x2 << endl;
	s << "y2: " << y2 << endl;

	return s.str();
}
