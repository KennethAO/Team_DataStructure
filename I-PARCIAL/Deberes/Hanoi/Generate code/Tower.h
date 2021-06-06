/***********************************************************************
 * Module:  Tower.h
 * Author:  Rafa
 * Modified: Saturday, June 5, 2021 10:34:00 PM
 * Purpose: Declaration of the class Tower
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
