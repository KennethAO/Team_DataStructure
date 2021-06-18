
#include <iostream>

#include <stdlib.h>

using namespace std;

class Sudoku {
private:
    int **matriz;
    int signal;
    int number;
    int cont;
    int cont2;
public:
    int** segment(int);
    void print(int**);
    int** solve(int**);
    int control(int, int,int, int**);
};
