/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Disk.h
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
