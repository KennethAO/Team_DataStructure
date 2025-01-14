/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Operacion.cpp
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopi�a David
 * Author:  Hidrobo Nicolas
 * Autor:   Pati�o Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: mi�rcoles, 2 de junio de 2021 15:46:42
 * Purpose: Declaration of prototypes of the class Operacion.cpp
 ***********************************************************************/

#include "Operacion.h"
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<iostream>

using namespace std; 

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::getMatriz1()
// Purpose:    Implementation of Operacion::getMatriz1()
// Return:     Matriz
////////////////////////////////////////////////////////////////////////

Matriz Operacion::getMatriz1(void)
{
   return matriz1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::setMatriz1(Matriz newMatriz1)
// Purpose:    Implementation of Operacion::setMatriz1()
// Parameters:
// - newMatriz1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::setMatriz1(Matriz newMatriz1)
{
	matriz1 = newMatriz1; 
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::getMatriz2()
// Purpose:    Implementation of Operacion::getMatriz2()
// Return:     Matriz
////////////////////////////////////////////////////////////////////////

Matriz Operacion::getMatrizR(void)
{
   return matrizR;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::setMatrizR(Matriz newMatrizR)
// Purpose:    Implementation of Operacion::setMatrizR()
// Parameters:
// - newMatrizR
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::setMatrizR(Matriz newMatrizR)
{
   matrizR = newMatrizR;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::~Operacion()
// Purpose:    Implementation of Operacion::setMatrizAux()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::setMatrizAux(Matriz newMatrizAux){
	matrizAux=newMatrizAux;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::getMatrizAux()
// Purpose:    Implementation of Operacion::getMatrizAux()
// Return:     Matriz
////////////////////////////////////////////////////////////////////////

Matriz Operacion::getMatrizAux(void){
	return matrizAux; 
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::Operacion(Matriz matriz1, Matriz matriz2, Matriz matriz3)
// Purpose:    Implementation of Operacion::Operacion()
// Parameters:
// - matriz1
// - matriz2
// - matriz3
// Return:     
////////////////////////////////////////////////////////////////////////

Operacion::Operacion(Matriz matriz1)
{
   this->matriz1=matriz1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::generar()
// Purpose:    Implementation of Operacion::generar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::generar()
{
	srand(time(NULL));
	//Rand para matriz 1
	int i, j;
	for (i = 0; i < matriz1.getFila_(); i++)
		for (j = 0; j < matriz1.getColumna_(); j++)
			*(*(matriz1.getMatriz_() + i) + j) = rand() % (10-0);
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::encerar()
// Purpose:    Implementation of Operacion::encerar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::encerar(Matriz _matriz)
{ 
    for(int i=0;i<_matriz.getFila_();i++){
    	for(int j=0;j<_matriz.getColumna_();j++){
    		*(*(_matriz.getMatriz_() + i) + j) = 0;
		}
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::procesar(int exponente)
// Purpose:    Implementation of Operacion::procesar()
// Parameters:
// - exponente
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::procesar(int exponente)
{	
	if(matriz1.getFila_()==matriz1.getColumna_()){
		for(int i=0;i<matriz1.getFila_();i++){
			for(int j=0;j<matriz1.getColumna_();j++){
				*(*(matrizAux.getMatriz_()+i)+j)=*(*(matriz1.getMatriz_()+i)+j);
			}
		}
		
		for (int z = 0; z < exponente - 1; z++) {
            for (int i = 0; i < matriz1.getFila_(); i++) {
					for (int j = 0; j < matriz1.getColumna_(); j++) {
                        *(*(matrizR.getMatriz_()+i)+j)=0;
                        for (int k = 0; k < matriz1.getFila_(); k++) {
                            *(*(matrizR.getMatriz_()+i)+j) += ((*(*(matriz1.getMatriz_()+i)+k)) * (*(*(matrizAux.getMatriz_()+k)+j)));
                        }
                    }
                }
                for (int a = 0; a < matriz1.getFila_(); a++) {
                    for (int b = 0; b < matriz1.getFila_(); b++) {
                        *(*(matrizAux.getMatriz_()+a)+b) = *(*(matrizR.getMatriz_()+a)+b);
                    }
                }

            }
}
else{
	cout<<"No se puede elevar la matriz porque su numero de filas y columnas no es el mismo"<<endl; 
}
}
////////////////////////////////////////////////////////////////////////
// Name:       Operacion::imprimir_()
// Purpose:    Implementation of Operacion::imprimir_()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::imprimir_(void)
{
	cout<<endl<<endl;
	cout<<"Matriz "<<endl<<endl;
   for(int i =0;i<matriz1.getFila_();i++){
			for(int j=0;j<matriz1.getColumna_();j++){
				cout<<"  "<<*(*(matriz1.getMatriz_()+i)+j);
			}
			cout<<endl; 
		}	
	cout<<endl<<endl;
	cout<<"Matriz elevada"<<endl<<endl;
   for(int i =0;i<matrizR.getFila_();i++){
			for(int j=0;j<matrizR.getColumna_();j++){
				cout<<"  "<<*(*(matrizR.getMatriz_()+i)+j);
			}
			cout<<endl; 
		}
}


////////////////////////////////////////////////////////////////////////
// Name:       Operacion::segmentar()
// Purpose:    Implementation of Operacion::segmentar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::segmentar()
{
	int **matriz,j;
	
	matriz=(int **)malloc(matriz1.getFila_()*sizeof(int *));
	for(j=0;j<matriz1.getFila_();j++)
		*(matriz+j)=(int *)malloc(matriz1.getColumna_()*sizeof(int));
	matriz1.setMatriz_(matriz);
	encerar(matriz1);
	
	if(matriz1.getFila_()==matriz1.getColumna_()){
		int **matrizRes;
		matrizR.setFila_(matriz1.getFila_());
		matrizR.setColumna_(matriz1.getColumna_());	
		matrizRes=(int **)malloc(matrizR.getFila_()*sizeof(int *));
		for(j=0;j<matrizR.getFila_();j++)
			*(matrizRes+j)=(int *)malloc(matrizR.getColumna_()*sizeof(int));
		matrizR.setMatriz_(matrizRes);
		encerar(matrizR);
		
		int **matAux;
		matrizAux.setFila_(matriz1.getFila_());
		matrizAux.setColumna_(matriz1.getColumna_());	
		matAux=(int **)malloc(matrizAux.getFila_()*sizeof(int *));
		for(j=0;j<matrizAux.getFila_();j++)
			*(matAux+j)=(int *)malloc(matrizAux.getColumna_()*sizeof(int));
		matrizAux.setMatriz_(matAux);
		encerar(matrizAux);
	}
}
