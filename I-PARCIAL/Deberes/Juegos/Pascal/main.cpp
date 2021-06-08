#include<iostream>
#include "Pascal.h"

using namespace std;

int main(int argc, char** argv) {
	
	float num;
	cout<<"Digite el numero: ";
	cin>>num;
	
	Pascal pascal(num);
	pascal.imprimir();
	
	return 0;
}
