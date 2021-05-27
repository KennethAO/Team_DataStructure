#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


float calcularCotangente(){
	
	float sine,cosine,tangent,cotangent,cosecant,secant;
    float rad,degree;
    rad = degree = 0.0;

    cout << "Enter the angle in degrees:";
    cin >> degree;
    rad = (degree/180) * 3.14;
	sine = sin(rad);
	cosine = cos(rad);
	cotangent = cosine/sine;
	if(degree != 0)
	{
	cout << "Cotangent" << " "<< degree << "=" << cotangent << endl;
	}
	else
	{
	cout << "Cotangent" << " " << "=" << "Undefined" << endl;
	}
	
	system("PAUSE");
	
	return EXIT_SUCCESS;
}
