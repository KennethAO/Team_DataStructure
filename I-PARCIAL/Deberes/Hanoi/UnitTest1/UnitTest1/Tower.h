#pragma once
#include "Position.h"
#include "Disk.h"
class Tower {
protected:
private:
	Position position;
	int diskNumber;
	Disk* disks;
public:
	Tower(Position _position, int _number);
	Tower();
	~Tower();
	void segment(int);
	void addDisk(Disk, int);
	int getDiskNumber(void);
	void setDiskNumber(int newNumber);
	Disk* getDisk(void);
	void setDisk(Disk* newDisk);
};

#include <stdlib.h>


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

void Tower::segment(int nDisk) {
	disks = (Disk*)malloc(nDisk * sizeof(Disk));
}

void Tower::addDisk(Disk disk, int number) {
	*(disks + number) = disk;
}

int Tower::getDiskNumber()
{
	return diskNumber;
}

void Tower::setDiskNumber(int newNumber)
{
	diskNumber = newNumber;
}

Disk* Tower::getDisk(void) {
	return disks;
}

void Tower::setDisk(Disk* newDisk) {
	disks = newDisk;
}