/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Operation.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: Saturday, June 5, 2021 12:53:55 AM
 * Purpose: Prototypes of the class Operation
 ***********************************************************************/

#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include <graphics.h>
#include "Operation.h"
#include "Hanoi.h"

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Operation::Operation()
// Purpose:    Implementation of Operation::Operation()
// Parameters:
// Return:     
////////////////////////////////////////////////////////////////////////

Operation::Operation(){
	
}

////////////////////////////////////////////////////////////////////////
// Name:       Operation::Operation()
// Purpose:    Implementation of Operation::Operation()
// Parameters:
// numerDisk
// Return:     
////////////////////////////////////////////////////////////////////////

Operation::Operation(int numerDisk){
	hanoi = Hanoi(numerDisk);
}

////////////////////////////////////////////////////////////////////////
// Name:       Operation::graphBoard()
// Purpose:    Implementation of Operation::graphBoard()
// Parameters:
// numerDisk
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operation::graphBoard(int numberDisk){

	initwindow(1600,900,"Torres de Hanoi",100,100);

	setcolor(12);
	settextstyle(4,0,2);
	outtextxy(700,100, "Torres de Hanoi");
	
	for(int i = 0;i < 3;i++){
		int tx1,ty1,tx2,ty2;
		tx1 = 300+(500*i);ty1 = 700;tx2 = 325+(500*i);ty2 = 200;
		Position posT(tx1,ty1,tx2,ty2);
		Tower tower(posT,i);
		hanoi.addTower(tower,0);
		setcolor(3);
		rectangle(tx1,ty1,tx2,ty2);
		setcolor(2);
		settextstyle(4,0,2);
		outtextxy(280+(500*i),710,"Torre");
	}
	setcolor(4);
	rectangle(100,700,1500,750);
	int color=1;
	(hanoi.getTowers()+0)->segment(numberDisk);
	for(int i=0;i<numberDisk;i++){
		int x1,y1,x2,y2,size;
		x1 = 150+(12*i);y1 = 680-(20*i);x2 = 475-(12*i);y2 = 700-(20*i);
		Position position(x1,y1,x2,y2);
		size = x2-x1;
		Disk disk(color,position,i,size);
		delay(300);
		graphDisk(disk);
		color++;
		(hanoi.getTowers()+0)->addDisk(disk,i);

	}
	(hanoi.getTowers()+0)->setDiskNumber(numberDisk);

	getch();

}

////////////////////////////////////////////////////////////////////////
// Name:       Operation::graphDisk()
// Purpose:    Implementation of Operation::graphDisk()
// Parameters:
// numerDisk
// Return:     void
////////////////////////////////////////////////////////////////////////


void Operation::graphDisk(Disk disk){
	
	setcolor(disk.getColor());
	rectangle(disk.getPosition().getX1(),disk.getPosition().getY1(),disk.getPosition().getX2(),disk.getPosition().getY2());
}

////////////////////////////////////////////////////////////////////////
// Name:       Operation::playHatoi()
// Purpose:    Implementation of Operation::playHatoi()
// Parameters:
// disk
// t1
// t2
// t3
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operation::playHatoi(int disk,int t1,int t2,int t3){
	if(disk == 1){
		cout<<"Mover disco de la torre "<<t1<<" hacia la torre "<<t3<<endl;
	}else{
		
		playHatoi(disk-1,t1,t3,t2);
		cout<<"Mover disco de la torre "<<t1<<" hacia la torre "<<t3<<endl;
		playHatoi(disk-1,t2,t1,t3);
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Operation::moveDisk()
// Purpose:    Implementation of Operation::moveDisk()
// Parameters:
// ti
// tf
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operation::moveDisk(int ti,int tf){
		int n = (hanoi.getTowers()+0)->getDiskNumber();
	int color = 1;
	for(int i=0;i<n;i++){
		int x1,y1,x2,y2,size;
		x1 = 150+(12*i);y1 = 680-(20*i);x2 = 475-(12*i);y2 = 700-(20*i);
		Position position(x1,y1,x2,y2);
		size = x2-x1;
		Disk disk(0,position,i,size);
		delay(300);
		graphDisk(disk);
		(hanoi.getTowers()+0)->addDisk(disk,i);

	}
	for(int i=0;i<n;i++){
		int x1,y1,x2,y2,size;
		x1 = 1150+(12*i);y1 = 680-(20*i);x2 = 1475-(12*i);y2 = 700-(20*i);
		Position position(x1,y1,x2,y2);
		size = x2-x1;
		Disk disk(color,position,i,size);
		delay(300);
		graphDisk(disk);
		color++;
		(hanoi.getTowers()+0)->addDisk(disk,i);

	}
	
} 
