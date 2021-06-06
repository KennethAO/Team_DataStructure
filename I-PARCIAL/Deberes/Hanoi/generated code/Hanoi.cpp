/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Hanoi.cpp
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
#include <stdlib.h>
#include "Hanoi.h"

////////////////////////////////////////////////////////////////////////
// Name:       Hanoi::Hanoi()
// Purpose:    Implementation of Hanoi::Hanoi()
// Parameters:
// _numberDisk
// Return:     
////////////////////////////////////////////////////////////////////////

Hanoi::Hanoi(int numberDisk){
	towers = (Tower*)malloc(3*sizeof(Tower));
}
////////////////////////////////////////////////////////////////////////
// Name:       Hanoi::Hanoi()
// Purpose:    Implementation of Hanoi::Hanoi()
// Return:     
////////////////////////////////////////////////////////////////////////

Hanoi::Hanoi(){
}

////////////////////////////////////////////////////////////////////////
// Name:       Hanoi::addTower()
// Purpose:    Implementation of Hanoi::addTower()
// Parameters:
// _tower
// _number
// Return:     void
////////////////////////////////////////////////////////////////////////

void Hanoi::addTower(Tower tower,int number){
	*(towers+number) = tower;
}

////////////////////////////////////////////////////////////////////////
// Name:       Hanoi::getTowers()
// Purpose:    Implementation of Hanoi::Hanoi()
// Parameters:
// Return:     Tower*
////////////////////////////////////////////////////////////////////////

Tower* Hanoi::getTowers(void){
   return towers;
}

////////////////////////////////////////////////////////////////////////
// Name:       Hanoi::setTowers()
// Purpose:    Implementation of Hanoi::setTowers()
// Parameters:
// *_newTowers
// Return:     void
////////////////////////////////////////////////////////////////////////

void Hanoi::setTowers(Tower* newTowers){
   towers = newTowers;
}



