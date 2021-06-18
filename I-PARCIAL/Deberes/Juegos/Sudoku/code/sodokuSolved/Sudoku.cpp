#include <time.h>
#include "Sudoku.h"

int** Sudoku::segment(int size) {
    matriz = (int**) malloc(sizeof (int *)*size);
    for (int i = 0; i < size; i++) {
        *(matriz + i) = (int*) malloc(sizeof (int*)*size);
    }
    return matriz;
}

void Sudoku::print(int **matriz) {
    cout << "\t\t\t\tsudoku solucionado\n\n";
    for (int i = 0; i < 9; i++) {
        
        for (int j = 0; j < 9; j++) {
            cout << "\t"<< *(*(matriz + i) + j);
        }
        printf("\n\n");
    }
}

int** Sudoku::solve(int **matriz) {
    srand(time(NULL));
    do {
        cont2 = 0;
        matriz = segment(10);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                *(*(matriz + i) + j) = 0;
                cont = 0;
                do {
                    number = rand() % 9 + 1;
                    signal = control(number, i, j, matriz);
                    cont++;
                    if (cont > 15) {
                        i = 9;
                        j = 9;
                    }
                } while (signal == 1);
                *(*(matriz + i) + j) = number;
                cont2++;
            }
        }
    } while (cont2 != 81);
    return matriz;
}

int Sudoku::control(int number, int cont, int cont2, int **matriz) {
    signal = 0;
    for (int i = 0; (i < 9 && signal == 0); i++) {             
        if (*(*(matriz + cont) + i) == number || *(*(matriz + i) + cont2) == number) {
            signal = 1;
        }
    }
    return signal;
}
