#pragma once
#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
//			ENCABEZADO
//UNIERSIDAD DE LAS FUERZAS ARMADAS 'ESPE'
//TITULO: 
//		MATRIZ ESTATICA 
//AUTORES:
//		ANDRADE KENNETH
//		BUSE RAFAEL 
//		CALVOPIÑA DAVID
//		NICOLAS HIDROBO
//		TIAMBA HENRY 
//FECHA DE CREACION: 
//		19/05/2021 
//CARRERA: 
//		SOFTWARE
//MATERIA: 
//		ESTRUCTURA DE DATOS
//NRC:
//		3685
class Operation
{
public:
	Operation();
	std::string validarSoloNumeros(std::string);
	void multiplicar(int[10][10], int[10][10], int[10][10]);
	void encerar(int[10][10]);
	void leer(int[10][10],int,int);
	void mostrar(int[10][10],int,int);
};
