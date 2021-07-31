#include <stdio.h>
#include <time.h> //Libreria que contiene las funciones de tiempo del sistema.
#include <stdlib.h>

class Calendario{
	private:
		int i,j,k,m,l,cont;				 //variables para correr ciclos
		int dia,mes,anio,semana,moduloMes,febrero,total_mes,diafestivo;//Variables para almacenar el tiempo de la estructura tm.
		int seleccion;	
	public:
	
	Calendario(int,int,int,int,int,int);				//Variable para un ciclo de respuestas.
	void accion(int);
	
};

Calendario::Calendario(int _i,int _j,int _k,int _m,int _l,int _cont){
	i = _i;
	j = _j;
	k = _k;
	m = _m;
	l = _l;
}

void feriados(int diafestivo,int mes){
	switch (mes+1){
			case 1:
				switch (diafestivo){
					case 1: printf("FERIADO\n");break;
					default: printf("NO FERIADO\n");break;
				}
				break;
			case 2:
				switch (diafestivo){
					case 13: printf("FERIADO\n");break;
					case 14: printf("FERIADO\n");break;
					case 15: printf("FERIADO\n");break;
					case 16: printf("FERIADO\n");break;
					default: printf("NO FERIADO\n");break;
				}
				break;
			case 4:
				switch (diafestivo){
					case 2: printf("FERIADO\n");break;
					case 3: printf("FERIADO\n");break;
					case 4: printf("FERIADO\n");break;
					case 30: printf("FERIADO\n");break;
					default: printf("NO FERIADO\n");break;
				}
				break;
			case 5:
				switch (diafestivo){
					case 1: printf("FERIADO\n");break;
					case 2: printf("FERIADO\n");break;
					case 22: printf("FERIADO\n");break;
					case 23: printf("FERIADO\n");break;
					case 24: printf("FERIADO\n");break;
					default: printf("NO FERIADO\n");break;
				}
				break;
			case 8:
				switch (diafestivo){
					case 7: printf("FERIADO\n");break;
					case 8: printf("FERIADO\n");break;
					case 9: printf("FERIADO\n");break;
					default: printf("NO FERIADO\n");break;
				}
				break;
			case 10:
				switch (diafestivo){
					case 30: printf("FERIADO\n");break;
					case 31: printf("FERIADO\n");break;
					default: printf("NO FERIADO\n");break;
				}
				break;
			case 11:
				switch (diafestivo){
					case 1: printf("FERIADO\n");break;
					case 2: printf("FERIADO\n");break;
					default: printf("NO FERIADO\n");break;
				}
				break;
			case 12:
				switch (diafestivo){
					case 24: printf("FERIADO\n");break;
					case 25: printf("FERIADO\n");break;
					case 26: printf("FERIADO\n");break;
					default: printf("NO FERIADO\n");break;
				}
				break;
			default: printf("NO FERIADO\n");break;
		}
}


void Calendario::accion(int selection){
	while(seleccion != 0){
		//Bisiesto.
		//Debemos determinar si el anio es bisiesto para luego realizar las agrupaciones

		if ((anio%4==0) && (anio%100!=0) || anio%400==0)
		febrero=29;
		else
		febrero=28;

		//Agrupacion de mes.
		//Los meses se caracterizan por tener 28,29,30,31 dias...entonces hacemos una agrupacion.

		switch (mes){
			case 3: case 5: case 8: case 10: 
				total_mes=30; 
				break; 
			case 1: 
				total_mes=febrero; 
				break; 
			case 0: case 2: case 4: case 6: case 7: case 9: case 11: 
				total_mes=31; 
			break; 
		}

		//Asignar nombre del mes
		//En esta parte se imprime la cabecera del calendario mes, y anio.

		switch (mes){
			case 0:printf("\t\tENERO\t%d",anio);break;
			case 1:printf("\t\tFEBRERO\t%d",anio);break;
			case 2:printf("\t\tMARZO\t%d",anio);break;
			case 3:printf("\t\tABRIL\t%d",anio);break;
			case 4:printf("\t\tMAYO\t%d",anio);break;
			case 5:printf("\t\tJUNIO\t%d",anio);break;
			case 6:printf("\t\tJULIO\t%d",anio);break;
			case 7:printf("\t\tAGOSTO\t%d",anio);break;
			case 8:printf("\t\tSEPTIEMBRE\t%d",anio);break;
			case 9:printf("\t\tOCTUBRE\t%d",anio);break;
			case 10:printf("\t\tNOVIEMBRE\t%d",anio);break;
			case 11:printf("\t\tDICIEMBRE\t%d",anio);break;
		}

		//Modulo Mes...
		//En wikipedia ya hay una tabla, para evitar mas calculos la voy a usar.
		//Esto trata de sacarle el modulo 7 a los limites de cada mes, hasta llegar al mes que se cuenta.
	
		if (febrero==29){
			switch (mes){
				case 0:moduloMes=0;break;
				case 1:moduloMes=3;break;
				case 2:moduloMes=4;break;
				case 3:moduloMes=0;break;
				case 4:moduloMes=2;break;
				case 5:moduloMes=5;break;
				case 6:moduloMes=0;break;
				case 7:moduloMes=3;break;
				case 8:moduloMes=6;break;
				case 9:moduloMes=1;break;
				case 10:moduloMes=4;break;
				case 11:moduloMes=6;break;
		}

		}else{
			switch (mes){
				case 0:moduloMes=0;break;
				case 1:moduloMes=3;break;
				case 2:moduloMes=3;break;
				case 3:moduloMes=6;break;
				case 4:moduloMes=1;break;
				case 5:moduloMes=4;break;
				case 6:moduloMes=6;break;
				case 7:moduloMes=2;break;
				case 8:moduloMes=5;break;
				case 9:moduloMes=0;break;
				case 10:moduloMes=3;break;
				case 11:moduloMes=5;break;
			}
		}
		//Calculo del primer dia de la semana.
		//Este algoritmo esta en la wikipedia, lo modificamos para que calcule el primer dia del mes
		//En [http://es.wikipedia.org/wiki/Algoritmo_para_calcular_el_dia_de_la_semana este algoritmo]
		//Remplacen dia por 1,(el primer dia del mes).

		semana=((anio-1)%7+ ((anio-1)/4 -(3*((anio-1)/100+1)/4))%7+moduloMes+1%7)%7;

		//Impresion de dias
		printf("\nDo\tLu\tMar\tMier\tJue\tVier\tSab\n");

	
		for(m=0;m<semana;m++)//dar espacios para que el primer dia calce.
		printf("\t");

		for(i=1;i<=total_mes;i++)//imprimir dias correspondientes al mes.
		{
			if(i==8-semana||i==15-semana||i==22-semana||i==29-semana || i== 36-semana)
				printf("\n%d\t",i);
			else	
				printf("%d\t",i);
		}
		// los i==8-semana... y los otros es para que la condicional cada 7 dias imprima un \n es decir
		// baje de linea y prosiga imprimiendo el calendario en un cuadrado...

		printf("\n\nDesea Buscar otra Fecha? \n\t1=SI 0=NO\t>>> ");
		scanf("%d",&seleccion);

		while (seleccion<0 || seleccion>1){
			printf("ERROR, Ingrese 1/0\n");
			printf("Desea Buscar otra Fecha? \n\t1=SI 0=NO\t>>> ");
			scanf("%d",&seleccion);
		}

		if (seleccion == 1){
			printf("\nIngrese Mes: ");
			scanf("%d",&mes);

		mes-=1;
		// Al inicio agregamos +1 al mes, ya que contábamos los meses de 0-11,
		// esta vez estamos contando de 1-12, por lo que le restamos uno.
		// Asi cuando el ciclo empiece de nuevo sumara 1, dejando el mes en el valor que deseamos.

		printf ("Ingrese Anio: ");
		scanf("%d",&anio);

		printf ("Ingrese Dia: ");
		scanf("%d",&diafestivo);

		system("cls");//limpia pantalla (borra anterior calendario)

		printf("EL DIA QUE INGRESASTE ES: %d/%d/%d \n\n",diafestivo,mes+1,anio);

		feriados(diafestivo,mes),



		printf("\n\t=============================>CALENDARIO<=============================\n\n");

		}
	}
}


