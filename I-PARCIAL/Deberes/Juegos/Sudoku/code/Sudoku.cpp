/***********************************************************************
 * Module:  Sudoku.cpp
 * Author:  Rafa
 * Modified: Monday, June 7, 2021 11:59:37 AM
 * Purpose: Implementation of the class Sudoku
 ***********************************************************************/
#include <stdlib.h>
#include <iostream>
#include "Sudoku.h"

using namespace std;


Sudoku::Sudoku(){
	matrix = (int**)calloc(9,sizeof(int*));
	for(int i = 0;i < 9;i++){
		*(matrix+i) = (int*)calloc(9,sizeof(int));
	}
	
	remaining = 9*9;
}

Sudoku::~Sudoku()
{
   for(int i = 0;i < 9;i++){
   		free(*(matrix+i));
   }
   free(matrix);
}

int Sudoku::getRemaining(void)
{
   return remaining;
}

void Sudoku::setRemaining(int newRemaining)
{
   remaining = newRemaining;
}

int** Sudoku::getMatrix(){
	return matrix;
}

void Sudoku::setMatrix(int **newMatrix){
	matrix = newMatrix;
}

bool Sudoku::play(int row, int column, int number){
	if(number == 0){
		if( *(*(matrix+row)+column) != 0 ){
			remaining++;
		}
		*(*(matrix+row)+column) = 0;
		return true;	
	}
	
	if(*(*(matrix+row)+column) != 0){
		return false;
	}
	
	for(int i = 0;i < 9;i++){
		if(number == *(*(matrix+row)+i) ){
			return false;
		}if(number == *(*(matrix+i)+column)){
			return false;
		}
	}
	
	int quadrantRow = row/3;
	int quadrantColumn = column/3;
	
	for(int i = quadrantRow;i < quadrantRow;i++){
		for(int j = quadrantColumn;j < quadrantColumn;j++){
			if(number == *(*(matrix+i)+j)){
				return false;
			}
		}
	}
	*(*(matrix+row)+column) = number;
	remaining--;
	return true;
	
	
}

void Sudoku::print(void){
	
	for(int i = 0;i < 9;i++){
		if((i % 3) == 0){
			for(int j = 0;j < 9;j++){
				if((j % 3) == 0){
					cout<<"--";
				}
				cout<<"--";
			}
			cout<<"-\n";
		} 
		for(int j = 0;j < 9;j++){
			if((j % 3) == 0){
				cout<<"| ";
			}
			if(*(*(matrix+i)+j) == 0){
				cout<<".";
			}else{
				cout<<*(*(matrix+i)+j);
			}
			cout<<" ";
		}
		cout<<"|\n";
	}
	
	for(int j = 0;j < 9;j++){
		if((j % 3) == 0){
			cout<<"--";
		}
		cout<<"--";
	}
	cout<<"+\n";
}

bool Sudoku::validateNumber(int number){
	if(number >= 0 && number <=9){
		return true;
	}else{
		return false;
	}
}
