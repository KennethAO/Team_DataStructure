/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Tower.h
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Saturday, June 5, 2021 12:53:55 AM
 * Purpose: Prototypes of the class Tower
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Tower_h)
#define __Class_Diagram_1_Tower_h

#include "Position.h"
#include "Disk.h"
class Tower{
	protected:
	private:
	   Position position;
	   int diskNumber;
	   Disk *disks;
	public:
	   	Tower(Position _position, int _number);
	   	Tower();
	   	~Tower();
	   	void segment(int);
	   	void addDisk(Disk,int);
	   	int getDiskNumber(void);
	   	void setDiskNumber(int newNumber);
		Disk* getDisk(void);
		void setDisk(Disk *newDisk);
};

#endif
