#include <iostream>

#include "Operator.cpp"

using namespace std; 

int main() {
	string super1,super2;
	float profit1,profit2;
	fflush(stdin);
	cout<<"Ingrese el nombre de el 1er supermercado: ";
	cin>>super1;
	fflush(stdin);
	cout<<"ingrese el valor en ganancias en dolares del 1er supermercado: ";
	cin>>profit1;
	cout<<"Ingrese el nombre de el 2do supermercado: ";
	cin>>super2;
	fflush(stdin);
	cout<<"ingrese el valor en ganancias en dolares del 2do supermercado: ";
	cin>>profit2;
	cout<<endl<<endl;
	Supermarket supermarket1(super1,profit1);
	Supermarket supermarket2(super2,profit2);
	MarketOperation marketOp(supermarket1);
    MarketOperation marketOp2(supermarket2);
	
	cout<<"La suma de las ganancias diarias de ambos supermercados es de: "<<marketOp+marketOp2<<" dolares"<<endl;
	cout<<"El margen de diferencia en ganancia entre ambos supermercados es de: "<<marketOp-marketOp2<<" dolares"<<endl;
	
	/*
	
	//Año
	float year = 360;
	//Espera de ganancia = 500$
	float expectedProfit = 500;
    
	float dailyProfit = marketOp+marketOp2;
	
	
	
	
	
	
	float margin = marketOp-marketOp2;
	
	float weekProfit = marketOp*marketOp2;

	marketOp++;
	
	marketOp--;
	
	string nameHighter= marketOp>marketOp2;
	
	string nameLess= marketOp<marketOp2;
	

	marketOp*=year;
	

	marketOp%expectedProfit;
	
	marketOp==marketOp2;
	
	marketOp!=("Supermaxi");
	
	marketOp||(15);
	
	marketOp&&(300);
	
	
	marketOp|25;
	
	marketOp/10;
	
	marketOp^2;
	
	marketOp[marketOp2];
	
	marketOp%=marketOp2;
	*/
	return 0;
}
