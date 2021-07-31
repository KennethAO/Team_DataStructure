#include <iostream>
#include "Sudoku.cpp"

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
		bool validate;
		do{
			cout<<"\nIngrese el n+umero: ";
			cin>>number;
			validate = sudoku.validateNumber(number);
			if(validate == false){
				cout<<"Numero incorrecto";
			}
		}while(validate==false);
		
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
