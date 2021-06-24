#include <iostream>

using namespace std;


int main(){
	
	string valor; 
	system("cls");
	while(true){
		cout<< "\n \n SELECCIONA UNA OPCION  \n \n";
		cout<< "1. ABRIR EXCEL \n ";
		cout<< "2. ABRIR APLICACION  \n ";
		cout<< "3. ABRIR ACCESS \n ";		
		cin >> valor;
		if(valor=="1"){
			system("C:\\Users\\edgar\\Desktop\\BOLETA2712.xlsm");
			
		}
		else if(valor=="2"){
			system("C:\\Users\\edgar\\Desktop\\VISORALEATORIO.exe");
			
		}else if(valor=="3"){
			system("C:\\Users\\edgar\\Desktop\\Database1.mdb");
		
		}
		
	}
	
}
