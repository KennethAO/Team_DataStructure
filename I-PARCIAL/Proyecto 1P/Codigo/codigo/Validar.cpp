#include "Validar.h"
//#include <stdlib.h>
#include <conio.h>
//#include <stdio.h>
#include <iostream>

using namespace std;

string Validar::validarLetras(string msj,int dim, bool espacio){
	
    char dato[dim];
	int i;
    char tecla;
    cout<<msj;
    i = 0;
    dato[0] = '\0';
 
    do
    {

        tecla = getch ();
        if(i<dim){
        	if ( i > 0 && tecla == 8 )
        {
            cout<<"\b \b";
            dato[--i] = '\0';
        }
        else{
            if(espacio == false){
                if ( (tecla >= 65 && tecla <= 95)  || 
                 (tecla >= 97 && tecla <= 122) && 
                  tecla != 32 )
                {
                cout<<tecla;
                dato[i++] = tecla;
                }
            }else{
                if ( (tecla >= 65 && tecla <= 95)  || 
                 (tecla >= 97 && tecla <= 122) || 
                  tecla == 32 )
                {
                cout<<tecla;
                dato[i++] = tecla;
                }
                
            }
            
        }
        	
		}
        
		
    } while ((tecla != 13 || dato[0] == '\0'));
    dato[i] = '\0';
	string retorno(dato);
    
    return retorno;
}

string Validar::validarNumeros(string msj,int dim){
	char dato[dim];
	int i;
    char tecla;
    cout<<msj;
    i = 0;
    dato[0] = '\0';
    do
    {

        tecla = getch ();
        if ( i > 0 && tecla == 8 ){
            cout<<"\b \b";
            dato[--i] = '\0';
        }else{
	        if(i<dim){
				if ( (tecla >= 48 && tecla <= 57)){
	                cout<<tecla;
	                dato[i++] = tecla;
	            }
	        }
		}
        
		
    } while ((tecla != 13 || dato[0] == '\0'));
    dato[i] = '\0';
    string retorno(dato);
    
    return retorno;
    
}

string Validar::validarCedula(){
	bool verificador;
	string cedula;
	do{
	cedula = validarNumeros("\ncedula: ",10);
	int numeros[10];
	for(int i=0;i<10;i++){
//		cout<<"\t"<<cedula[i];
        numeros[i]=cedula[i]-48;
    }
    
    int impares=0,pares=0,res;
    int suma=0,resul;
     for(int i=0;i<9;i+=2){
        if((numeros[i]*2)>9){
            numeros[i]*=2;
            do{
                res=numeros[i]/10;
                numeros[i]=numeros[i]%10;
                impares+=numeros[i];
                numeros[i]=res;
            }while(numeros[i]!=0);
        }
        else{
        impares+=(numeros[i]*2);
        }
     }
     for(int i=1;i<9;i+=2){
        pares+=numeros[i];
    }
    suma=impares+pares;
    resul=(suma/10 + 1) * 10;
    resul-=suma;
    if(numeros[9]==0){
        numeros[9]=10;
        if(numeros[9]==resul){
        	verificador = true;
//            cout<<"CEDULA VALIDA";
        }

    }
    else{
        if(resul==numeros[9]){
        	verificador = true;
//            cout<<"CEDULA VALIDA";
        }
        else{
        	verificador = false;
        	cout<<"\b";
        	
        	cout<<"\r";
//            cout<<"CEDULA NO VALIDA";
        }
    }
    
    }while(!verificador);
	
    
    return cedula;
}

