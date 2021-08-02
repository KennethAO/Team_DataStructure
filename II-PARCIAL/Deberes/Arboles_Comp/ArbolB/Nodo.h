#include <iostream>
#include <conio.h>
 
using namespace std;
 
#define MAX 4
#define MIN 2
 
class Nodo {
    public: 
        int val[MAX + 1], count;
        Nodo *link[MAX + 1];
        Nodo()=default;
};
 