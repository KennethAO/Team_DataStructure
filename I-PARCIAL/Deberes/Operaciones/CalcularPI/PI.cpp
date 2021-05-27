#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "PI.cpp"

double calculate_pi (double epsilon){

    double pi=0;
    int i=0;
    int limit=100000;
    double num,den , term, fault=1.0;

    while (fault > epsilon && i<limit){
        num = sign (i)*4.0;
        den = 2*i+1;
        term = num/den;
        pi= pi + term;
        fault = fabs(term);
        i++;
    }

    return pi;

}


int sign (int i) {

    if (i%2)
        return -1;
    else{
        return 1;
    }
}

