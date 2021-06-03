#include<iostream>

using namespace std; 

int main(){
	
	int index = 4;
	int m1[3][3];
	int auxiliar[3][3];
	int resultado[3][3];
	
	//Llenar la matriz de 1
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			m1[i][j]=1;
		}
	}
	//Pasarle al auxiliar la matriz
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			auxiliar[i][j]=m1[i][j];
		}
	}
	
	//si filas son iguales que las columnas
	for (int z = 0; z < index - 1; z++) {
                for (int i = 0; i < 3; i++) {

                    for (int j = 0; j < 3; j++) {
                        resultado[i][j] = 0;
                        for (int k = 0; k < 3; k++) {
                            resultado[i][j] += (m1[i][k] * auxiliar[k][j]);
                        }
                    }
                }
                for (int a = 0; a < 3; a++) {
                    for (int b = 0; b < 3; b++) {
                        auxiliar[a][b] = resultado[a][b];
                    }
                }

            }
            
    //Imprimir la matriz
    
    for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<resultado[i][j];
		}
		cout<<endl; 
	}
	return 0;
}
