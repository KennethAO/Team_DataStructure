#pragma once
#include "Disk.h"
#include "Tower.h"

class Hanoi {
protected:
private:
	Disk* disks;
	Tower* towers;
public:
	Hanoi();
	Hanoi(int numberDisk);
	void addTower(Tower, int);
	Disk* getDisk(void);
	void setDisk(Disk* newDisk);
	Tower* getTowers(void);
	void setTowers(Tower* newTowers);
};

#include <stdlib.h>

Hanoi::Hanoi(int numberDisk) {
	towers = (Tower*)malloc(3 * sizeof(Tower));
}

Hanoi::Hanoi() {
}

void Hanoi::addTower(Tower tower, int number) {
	*(towers + number) = tower;
}


Tower* Hanoi::getTowers(void) {
	return towers;
}

void Hanoi::setTowers(Tower* newTowers) {
	towers = newTowers;
}