#pragma once

#if !defined(__Class_Diagram_1_Position_h)
#define __Class_Diagram_1_Position_h

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


