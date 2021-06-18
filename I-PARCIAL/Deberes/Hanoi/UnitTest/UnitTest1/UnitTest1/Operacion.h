#pragma once
#include "Hanoi.h"

class Operation {
private:
	Hanoi hanoi;

public:
	Operation();
	Operation(int);
	void graphDisk(Disk);
	void graphBoard(int);
	void playHatoi(int, int, int, int);
	void moveDisk(int, int);
};