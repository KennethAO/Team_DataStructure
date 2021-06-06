/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Operation.h
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Saturday, June 5, 2021 12:53:55 AM
 * Purpose: Prototypes of the class Operation
 ***********************************************************************/

#include "Hanoi.h"

class Operation{
	private:
		Hanoi hanoi;
	
	public:
		Operation();
		Operation(int);
		void graphDisk(Disk);
		void graphBoard(int);
		void playHatoi(int,int,int,int);
		void moveDisk(int,int);
};
