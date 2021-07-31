#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "cubo.h"

using namespace std;
Cubo::Cubo(){


}

Cubo::~Cubo(){
}

int** Cubo::getMatrix(){
    return matrix;
}

void Cubo::setMatrix(int **newMatrix){
    matrix = newMatrix;

}

int Cubo::getRemaining(void){
    return remaining;

}
void Cubo::setRemaining(int newRemaining){
    remaining = newRemaining;

}
bool Cubo::play(void){
int grado,i, j, suma,aux;
printf(" \n *************BIENVENIDOS AL JUEGO DEL CUBO MAGICO ************* " );
printf(" \n Ingrese el grado : ");
scanf("%d",&grado);
if(grado<3){
	printf("  \n Error el grado del cubo magico debe ser mayor :");
	return(0);

}
int matrix[grado][grado],comp[grado],compb[grado];
printf(" \n Rellene el cuadrado magico  :");
suma=(grado*(grado*grado+1))/2;
printf(" \n Recuerde que la suma de cada fila y columna es  %d :",suma);
for(i=0;i<grado;i++){
	for(j=0;j<grado;j++){
		matrix[i][j]=0;
	}
}
 for(i=0;i<grado;i++){
 	comp[i]=0;
 }
 for(i=0;i<grado;i++){
 	compb[i]=0;
 }
 for(i=0;i<grado;i++){
	for(j=0;j<grado;j++){
		aux=0;
		printf("\nIngrese el valor [%d][%d]: ",i,j);
		scanf("%d",&aux);
		matrix[i][j]=aux;

	}
  }
  for(i=0;i<grado;i++){
	for(j=0;j<grado;j++){
		comp[i]=comp[i]+matrix[i][j];
     	}

	}
	for(i=0;i<grado;i++){
	for(j=0;j<grado;j++){
		compb[i]=compb[i]+matrix[j][i];
     	}

	}
	for(i=0;i<grado;i++){
		if(comp[i]<suma || comp[i]>suma){
			printf("Error  \n :");
			printf("su cuadrado presenta error  \n :");
			return(0);
		}
	}
	for(i=0;i<grado;i++){
		if(compb[i]<suma || compb[i]>suma){
			printf("Error  \n :");
			printf("Su cuadrado presenta error  \n :");
			return(0);
		}
	}
		printf(" Felicitaciones:");
		printf(" su cuadrado magico es correcto  \n :");
    system("pause");
    for(i=0;i<grado;i++){
	for(j=0;j<grado;j++){
		printf("%d\t",matrix[i][j],"=",suma);
     	}
       printf("\n\n");

	}
	system("pause");




}







