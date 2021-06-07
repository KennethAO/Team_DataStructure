/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  main.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Saturday, June 5, 2021 12:53:55 AM
 * Purpose: main
 ***********************************************************************/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "Operation.h"

using namespace std;

int main(int argc, char** argv) {
	int numberDisk;
	cout<<"Ingrese el numero de discos: ";
	cin>>numberDisk;
	Operation op(numberDisk);
	op.playHatoi(numberDisk,1,2,3);
	op.graphBoard(numberDisk);
	op.moveDisk(1,3);
	
	system("pause");
	return 0;
}
