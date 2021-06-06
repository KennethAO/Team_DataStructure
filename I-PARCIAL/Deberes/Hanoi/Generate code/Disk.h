/***********************************************************************
 * Module:  Disk.h
 * Author:  Rafa
 * Modified: Saturday, June 5, 2021 10:32:09 PM
 * Purpose: Declaration of the class Disk
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Disk_h)
#define __Class_Diagram_1_Disk_h

#include "Position.h"

class Disk{
	
	protected:
	private:
	   int color;
	   Position position;
	   int number;
	   int size;
	public:
	   Disk(int _color, Position _position, int _number,int _size);
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

#endif
