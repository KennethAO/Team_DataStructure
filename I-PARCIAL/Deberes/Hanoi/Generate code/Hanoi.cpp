/***********************************************************************
 * Module:  Hanoi.cpp
 * Author:  Rafa
 * Modified: Saturday, June 5, 2021 10:34:00 PM
 * Purpose: Implementation of the class Hanoi
 ***********************************************************************/
#include <stdlib.h>
#include "Hanoi.h"

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


void Hanoi::addTower(Tower tower,int number){
	*(towers+number) = tower;
}

Tower* Hanoi::getTowers(void){
   return towers;
}

void Hanoi::setTowers(Tower* newTowers){
   towers = newTowers;
}



