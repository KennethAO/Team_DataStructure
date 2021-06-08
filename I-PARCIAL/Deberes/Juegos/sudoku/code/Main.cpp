#include <iostream>
#include "Operation.h"

using namespace std;

int main(int argc, char** argv) {
	
	Sudoku sudoku;
	int row,column,number;
//	Operation op(sudoku);
	
	while(sudoku.getRemaining() > 0){
		sudoku.print();
		cout<<"\nIngrese la fila: ";
		cin>>row;
		cout<<"\nIngrese la columna: ";
		cin>>column;
		cout<<"\nIngrese el n+umero: ";
		cin>>number;
		if(row >= 1 && row <= 9 && column >=1 && column <= 9){
			if(sudoku.play(row-1,column-1,number) == false){
				cout<< "Posicion o numero incorrecto"<<endl;
			}else{
				cout<<"Jugada realizada"<<endl;
			}
		}
		
//		system("cls");
	}
	
	
	
	return 0;
}
