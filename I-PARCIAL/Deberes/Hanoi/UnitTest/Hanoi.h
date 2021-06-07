#pragma
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

////////////////////////////////////////////////////////////////////////
// Name:       Hanoi::Hanoi()
// Purpose:    Implementation of Hanoi::Hanoi()
// Return:     
////////////////////////////////////////////////////////////////////////

Hanoi::Hanoi() {
}

////////////////////////////////////////////////////////////////////////
// Name:       Hanoi::addTower()
// Purpose:    Implementation of Hanoi::addTower()
// Parameters:
// _tower
// _number
// Return:     void
////////////////////////////////////////////////////////////////////////

void Hanoi::addTower(Tower tower, int number) {
	*(towers + number) = tower;
}

////////////////////////////////////////////////////////////////////////
// Name:       Hanoi::getTowers()
// Purpose:    Implementation of Hanoi::Hanoi()
// Parameters:
// Return:     Tower*
////////////////////////////////////////////////////////////////////////

Tower* Hanoi::getTowers(void) {
	return towers;
}

////////////////////////////////////////////////////////////////////////
// Name:       Hanoi::setTowers()
// Purpose:    Implementation of Hanoi::setTowers()
// Parameters:
// *_newTowers
// Return:     void
////////////////////////////////////////////////////////////////////////

void Hanoi::setTowers(Tower* newTowers) {
	towers = newTowers;
}