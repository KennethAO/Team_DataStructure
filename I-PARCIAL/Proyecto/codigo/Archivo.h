#include <fstream>
#include <iostream>
#include "Libreria\ListaDoble.h"
#include <stdlib.h>
#include <stdio.h>
#include "Persona.h"
#include <cstdlib>
#include <string>
#include <sstream>
#include "Date.h"

template <typename T>
class Archivo{
    private:
            ListaDoble<T> lista; 
    public: 
            Archivo(ListaDoble<T>);
            Archivo()=default;
            ListaDoble<T> getListaDoble();
            void setListaDoble(ListaDoble<T>);
            void guardarTxt(string);
            void guardarTabla(string,string);
            ListaDoble<Persona> recorrerTxt(string);
            void imprimirTxt(string);
};

template <typename T>
Archivo<T>::Archivo(ListaDoble<T> _lista){
    this->lista=_lista;
}

template<typename T>
ListaDoble<T> Archivo<T>::getListaDoble(){
    return lista;
}

template<typename T>
void Archivo<T>::setListaDoble(ListaDoble<T> _lista){
    this->lista=_lista;
}

template <typename T>
void Archivo<T>::guardarTxt(string nombreArchivo){
    ifstream archivo;
    ofstream archivo1;
    archivo.open(nombreArchivo+".txt",ios::in);
        int falla = archivo.fail();
        //if(nombreArchivo=="Persona"){
        try
        {
            if(falla==1){
                archivo.close();
                archivo1.open(nombreArchivo+".txt",ios::out);
                archivo1<<lista.datosLista("Persona");
                archivo1.close();
            } 
            throw falla;
        }catch(int falla){
            if(falla==0){
                archivo.close();
                archivo1.open(nombreArchivo+".txt",ios::app);
                archivo1<<lista.datosLista("Persona");
                archivo1.close();
            }
        }
}

template <typename T>
void Archivo<T>::guardarTabla(string nombreArchivo, string texto){
    ifstream archivo;
    ofstream archivo1;
    archivo.open(nombreArchivo+".txt",ios::in);
        int falla = archivo.fail();
        //if(nombreArchivo=="Persona"){
        try
        {
            if(falla==1){
                archivo.close();
                archivo1.open(nombreArchivo+".txt",ios::out);
                archivo1<<texto;
                archivo1.close();
            } 
            throw falla;
        }catch(int falla){
            if(falla==0){
                archivo.close();
                archivo1.open(nombreArchivo+".txt",ios::app);
                archivo1<<texto;
                archivo1.close();
            }
    }
}


template<typename T>
ListaDoble<Persona> Archivo<T>::recorrerTxt(string nombreArchivo){
    ifstream archivo; 
    string texto; 
    ListaDoble<Persona> list;
    archivo.open(nombreArchivo+".txt",ios::in);
    Persona persona; 
    if(archivo.fail()){
        return list;
    }
    int i=0;
    while(!archivo.eof()){
        i++;
        getline(archivo,texto);
        switch(i){
            case 1:
                    persona.setNombre(texto);
                    break;
            case 2:
                    persona.setApellido(texto);
                    break;
            case 3:  
                    if(i==3){
                        string fecha2 = texto;
	                string fecha3 = texto;
	                string fecha4 = texto;
 	                string fecha5 = texto;
	                int dia,mes,anio;
	                //DIA
	                istringstream(fecha3)>>dia; 
	                //MES
		            for(int j=0;j<fecha2.size();j++){
			            fecha4[j]='0';
				            if(fecha2[j]=='/'){
					            fecha4[j+1] = fecha2[j+1];
					            break; 
				            }
			        }
	                istringstream(fecha4)>>mes;
	                //ANIO
                    for(int j=0;j<fecha2.size();j++){
                    fecha5[j]='0';
                        if(fecha2[j]=='/'){
                            fecha5[j]='0';
                            fecha5[j+1] = '0';
                            if(fecha2[j+2]=='/'){
                                fecha5[j+2]='0';
                                break;
                            }else{
                                fecha5[j+2]='0';
                                fecha5[j+3]='0';
                                break; 
                            }
                        }
                    }
                    istringstream(fecha5)>>anio;
                    Date fechaNac(dia,mes,anio);
                    persona.setNacimiento(fechaNac);
                    }
                    break;
            case 4:
                    int edad; 
                    istringstream(texto)>>edad;
                    persona.setEdad(edad);
                    break;
            case 5:
                    persona.setCedula(texto);
                    break;
            case 6:
                    persona.setDireccion(texto);
                    break;
            case 7:
                    persona.setTelefono(texto);
                    break;
            case 8:
                    persona.setCorreo(texto);
                    break;
        }
        if(i==9){
        list.insertar(persona);
        i=0;
        }
    }
    archivo.close();
    return list; 
}


template<typename T>
void Archivo<T>::imprimirTxt(string nombreArchivo){
    ifstream archivo; 
    string texto; 
    archivo.open(nombreArchivo+".txt",ios::in);
    if(archivo.fail()){
        cout<<"No se pudo abrir";
        exit(1);
    }
    while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl; 
    }
    archivo.close();
}










