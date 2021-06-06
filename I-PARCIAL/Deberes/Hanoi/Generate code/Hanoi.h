/***********************************************************************
 * Module:  Hanoi.h
 * Author:  Rafa
 * Modified: Saturday, June 5, 2021 10:34:00 PM
 * Purpose: Declaration of the class Hanoi
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Hanoi_h)
#define __Class_Diagram_1_Hanoi_h

#include "Disk.h"
#include "Tower.h"

class Hanoi{
	protected:
	private:
	   Disk *disks;
	   Tower *towers;  
	public:
		Hanoi();
		Hanoi(int numberDisk);
		void addTower(Tower,int);
		Disk* getDisk(void);
		void setDisk(Disk *newDisk);
		Tower* getTowers(void);
		void setTowers(Tower *newTowers);
};

#endif
