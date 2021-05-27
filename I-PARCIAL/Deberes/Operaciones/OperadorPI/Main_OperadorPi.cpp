#include <iostream>
#include <math.h>
using namespace std;

//int ingresar_polinomio (float poli[], int n){
//
//    int terminos; // numero de coeficientes
//
//	cout << "Ingrese el numero de terminos de la expresion : ";
//	cin >> n;
//
//	float poli[terminos]; //arreglo de coeficientes
//
//	for (int i =0 ; i<n ; i++)
//	{
//		cout<< "Coeficiente ["<<i<<"]=";
//		cin>> poli[i];
//
//	}
//	return poli[];
//
//}



int main()
{
    int x,k,i,x2,op1,product;
    float p1,p2;
    int n ;
    int terminos; // numero de coeficientes

	cout << "Ingrese el numero de terminos de la expresion : ";
	cin >> n;

	float poli[terminos]; //arreglo de coeficientes

	for (int i =0 ; i<n ; i++)
	{
		cout<< "Coeficiente ["<<i+1<<"]=";
		cin>> poli[i];

	}
    //x --> inicio
    //k --> final

    cout << "Ingrese el  valor x =  ";
    cin >> x;

     cout<< "Ingrese el  valor k =  ";
     cin >> k;

    for (int i=0 ; i< n ; i++)
    {
        for ( int j=x ; j<k ; j++){
		p1= p1 + poli[i]* pow(j,i);

		}

	}
     cout<< "\nEl productorio de la expresion es  p("<<x<<")="<<p1<<endl;

    return 0;
}
