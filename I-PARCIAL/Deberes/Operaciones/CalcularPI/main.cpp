#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double pi,x;

    printf("Ingrese el valor de presicion: ");
    scanf("%lf",&x);
    pi = calculate_pi(x);
    printf("El valor de pi es :%f \n ", pi);
    return 0;
	
}
