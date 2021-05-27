#include <iostream>
#include <math.h>
#define N 100
using namespace std;


void create_array( int poli[N]);
void calculate ();

int main()
{
    int x,k,i,n;
    float p;
    int terminos; // numero de coeficientes
    int poli[n];

    //x --> inicio
    //k --> final
    create_array(poli);
    calculate ();

    return 0;
}

void  create_array(int poli[N]){

     int n ;
   // numero de coeficientes

	cout << "Ingrese el numero de terminos de la expresion : ";
	cin >> n;

	 //arreglo de coeficientes

	for (int i =0 ; i<n ; i++)
	{
		cout<< "Coeficiente ["<<i+1<<"]=";
		cin>> poli[i];

	}

	return ;

}
void calculate(){
    int x,k,i,n;
    float p1,p2;
    int poli[n];

cout << "Ingrese el  valor x =  ";
    cin >> x;

     cout<< "Ingrese el  valor k =  ";
     cin >> k;


    for (int j=0 ; j<k ; j++){
        for ( int i=0; i<n ; i++)
        {
            p1 = p1 + ( poli[i]* pow(x ,i));
        }
        p2=p2*p1;
    }

    cout<< "\n El productorio de la expresion es  p("<<x<<")="<<p1<<endl;
}
