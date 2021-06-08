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

Matriz Operacion::getMatriz(void)
{
   return matriz;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::setMatriz1(Matriz newMatriz1)
// Purpose:    Implementation of Operacion::setMatriz1()
// Parameters:
// - newMatriz1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::setMatriz(Matriz newMatriz)
{
	matriz1 = newMatriz; 
}



Operacion::Operacion(Matriz matriz)
{
   this->matriz1=matriz;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::generar()
// Purpose:    Implementation of Operacion::generar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::generar()
{
	srand(time(NULL));
	int i, j;
	for (i = 0; i < matriz.getFila_(); i++)
		for (j = 0; j < matriz.getColumna_(); j++)
			*(*(matriz.getMatriz_() + i) + j) = rand() % (10-0);
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
	
	
}
////////////////////////////////////////////////////////////////////////
// Name:       Operacion::imprimir_()
// Purpose:    Implementation of Operacion::imprimir_()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::imprimir_(void)
{
	cout<<endl<<endl;
	cout<<"Matriz generada: "<<endl;
   for(int i =0;i<matriz.getFila_();i++){
			for(int j=0;j<matriz.getColumna_();j++){
				cout<<"  "<<*(*(matriz.getMatriz_()+i)+j);
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
	
	matriz=(int **)malloc(matriz.getFila_()*sizeof(int *));
	for(j=0;j<matriz.getFila_();j++)
		*(matriz+j)=(int *)malloc(matriz1.getColumna_()*sizeof(int));
	matriz1.setMatriz_(matriz);
	encerar(matriz);	
}
