#include "Operacion.h"
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<iostream>

using namespace std; 

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::getMatriz()
// Purpose:    Implementation of Operacion::getMatriz()
// Return:     Matriz
////////////////////////////////////////////////////////////////////////

Matriz Operacion::getMatriz1(void)
{
   return matriz1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::setMatriz(Matriz newMatriz)
// Purpose:    Implementation of Operacion::setMatriz()
// Parameters:
// - newMatriz
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::setMatriz1(Matriz newMatriz1)
{
	matriz1 = newMatriz1; 
}



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

void Operacion::procesar(Matriz _matriz)
{	
	if (matriz1.getFila_()==matriz1.getColumna_()){
		cout<< "Los elmentos de la diagonal principal son: "<< "\n" <<endl; 
		for(int i=0; i<matriz1.getFila_(); i++){	
				cout<< *(*(matriz1.getMatriz_()+i)+i) <<"\n"<<endl;	
		}
	}	
	else{
		cout<<"No se puede elevar la matriz porque no es cuadrada"<<endl;
	}
}
////////////////////////////////////////////////////////////////////////
// Name:       Operacion::imprimir_()
// Purpose:    Implementation of Operacion::imprimir_()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::imprimir(void)
{
	cout<<endl<<endl;
	cout<<"Matriz generada: "<<endl;
   for(int i =0;i<matriz1.getFila_();i++){
			for(int j=0;j<matriz1.getColumna_();j++){
				cout<<"  "<<*(*(matriz1.getMatriz_()+i)+j);
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
}
