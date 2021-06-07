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