/***********************************************************************
 * Module:  Tower.cpp
 * Author:  Rafa
 * Modified: Saturday, June 5, 2021 10:34:00 PM
 * Purpose: Implementation of the class Tower
 ***********************************************************************/
#include <stdlib.h>
#include "Tower.h"


Tower::Tower(Position _position, int _number)
{
   	this->position = _position;
   	this->diskNumber = _number;
}


Tower::Tower()
{
}


Tower::~Tower()
{
   // TODO : implement
}

void Tower::segment(int nDisk){
	disks = (Disk*)malloc(nDisk*sizeof(Disk));
}
void Tower::addDisk(Disk disk,int number){
	*(disks+number) = disk;
}


int Tower::getDiskNumber()
{
   return diskNumber;
}


void Tower::setDiskNumber(int newNumber)
{
   diskNumber = newNumber;
}

Disk* Tower::getDisk(void){
   return disks;
}

void Tower::setDisk(Disk *newDisk){
   disks = newDisk;
}
