/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Tower.cpp
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
#include <stdlib.h>
#include "Tower.h"

////////////////////////////////////////////////////////////////////////
// Name:       Tower::Tower()
// Purpose:    Implementation of Tower::Tower()
// Parameters: 
// _position
// _number
// Return:     
////////////////////////////////////////////////////////////////////////

Tower::Tower(Position _position, int _number)
{
   	this->position = _position;
   	this->diskNumber = _number;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tower::Tower()
// Purpose:    Implementation of Tower::Tower()
// Parameters: 
// Return:     
////////////////////////////////////////////////////////////////////////

Tower::Tower()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Tower::-Tpwer()
// Purpose:    Implementation of Tower::-Tower()
// Parameters: 
// Return:     
////////////////////////////////////////////////////////////////////////

Tower::~Tower()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Tower::segment()
// Purpose:    Implementation of Tower::segment()
// Parameters: 
// _nDisk
// Return:     
////////////////////////////////////////////////////////////////////////

void Tower::segment(int nDisk){
	disks = (Disk*)malloc(nDisk*sizeof(Disk));
}

////////////////////////////////////////////////////////////////////////
// Name:       Tower::addDisk()
// Purpose:    Implementation of Tower::segment()
// Parameters: 
// _nDisk
// Return:     
////////////////////////////////////////////////////////////////////////

void Tower::addDisk(Disk disk,int number){
	*(disks+number) = disk;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tower::getDiskNumber()
// Purpose:    Implementation of Tower::getDiskNumber()
// Parameters: 
// Return:     int
////////////////////////////////////////////////////////////////////////

int Tower::getDiskNumber()
{
   return diskNumber;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tower::setDiskNumber()
// Purpose:    Implementation of Tower::setDiskNumber()
// Parameters: 
// newNumber
// Return:     void
////////////////////////////////////////////////////////////////////////

void Tower::setDiskNumber(int newNumber)
{
   diskNumber = newNumber;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tower::getDisk()
// Purpose:    Implementation of Tower::getDiskN()
// Parameters: 
// newNumber
// Return:     Disk*
////////////////////////////////////////////////////////////////////////

Disk* Tower::getDisk(void){
   return disks;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tower::setDisk()
// Purpose:    Implementation of Tower::setDisk()
// Parameters: 
// newDisk
// Return:     void
////////////////////////////////////////////////////////////////////////

void Tower::setDisk(Disk *newDisk){
   disks = newDisk;
}
