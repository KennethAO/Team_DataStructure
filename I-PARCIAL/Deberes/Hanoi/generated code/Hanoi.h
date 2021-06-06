/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Hanoi.h
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Saturday, June 5, 2021 12:53:55 AM
 * Purpose: Prototypes of the class Hanoi
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
