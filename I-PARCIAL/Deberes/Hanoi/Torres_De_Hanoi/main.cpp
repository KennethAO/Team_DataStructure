
/*
 *  Universidad de las fuerzas Armadas Espe
 *    Grupo N1
 * Autores: Andrade, Buse, Calvopiña, Tiamba, Patiño, Hid
 *
 *  (c) Pau FernÃ¡ndez, licencia MIT: http://es.wikipedia.org/wiki/MIT_License
 */
#include <iostream>
#include "miniwin.h"
using namespace std;
using namespace miniwin;
void fondo(int,int);
void base(int,int);
void pilar(int,int);
void tablero();
void pieza1(int,int);
void pieza2(int,int);
void pieza3(int,int);
void mov1(int,int);
void mov2(int,int);
void mov3(int,int);
void mov4(int,int);
void mov5(int,int);
void mov6(int,int);
void mov7(int,int);


 int main(){
 	
 	
	vredimensiona(600,400);
	std::string msj;
	tablero();
	pieza1(0,6);
	pieza2(0,5);
	pieza3(0,4);
	mov1(0,4);
	mov2(0,5);
	mov3(2,6);
	mov4(0,6);
	mov5(1,5);
	mov6(1,6);
	mov7(0,6);

	refresca();
	return 0;
	
}

void mensaje(string msj){
    vredimensiona(200,150);
	texto(0,0,"BIENVENIDO AL JUEGO");
	
	//return 0;
	
}
	void tablero(){
		fondo(0,0);
	base(0,7);
	pilar(0,2);
	pilar(1,2);
	pilar(2,2);	
	}

	void fondo(int x,int y){
		color(NEGRO);
		rectangulo_lleno(x,y,x+600,y+400);
	}
	void base(int x , int y){
		color(NEGRO);
		rectangulo_lleno(x*200,y*50,x*200+600,y*50+50);
	}
	void pilar(int x,int y){
		color(ROJO);
		rectangulo_lleno(x*200+90,y*50,x*200+110,y*50+250);
	}

	void pieza1(int x, int y){
		color(ROJO);
		rectangulo_lleno(x*200,y*50,x*200+200,y*50+50);
	}
		void pieza2(int x, int y){
		color(AZUL);
		rectangulo_lleno(x*200+25,y*50,x*200+175,y*50+50);
	}
		void pieza3(int x, int y){
		color(AMARILLO);
		rectangulo_lleno(x*200+50,y*50,x*200+150,y*50+50);
	}
	void mov1(int x,int y){
		int yf,xf;
		for(int i=0;i<=3;i++){
			pieza3(x,y-i);
			refresca();
			espera(250);
			if(i<3){
			borra();
			tablero();
			pieza2(0,5);
			pieza1(0,6);
			}
			yf=y-i;
		}
			
			
			for(int i=0;i<=2;i++){
			pieza3(x+i,yf);
			refresca();
			espera(250);
			if(i<2){
			borra();
			tablero();
			pieza2(0,5);
			pieza1(0,6);
			}
			xf=x+i;
	}
			for(int i=0;i<=5;i++){
			pieza3(xf,yf+i);
			refresca();
			espera(250);
			if(i<5){
			borra();
			tablero();
			pieza2(0,5);
			pieza1(0,6);
			}
			
	}
	}
	
		void mov2(int x,int y){
		int yf,xf;
		for(int i=0;i<=4;i++){
			pieza2(x,y-i);
			refresca();
			espera(250);
			if(i<4){
			borra();
			tablero();
			pieza3(2,6);
			pieza1(0,6);
			}
			yf=y-i;
		}
			
			
			for(int i=0;i<=1;i++){
			pieza2(x+i,yf);
			refresca();
			espera(250);
			if(i<1){
			borra();
			tablero();
			pieza3(2,6);
			pieza1(0,6);
			}
			xf=x+i;
	}
			for(int i=0;i<=5;i++){
			pieza2(xf,yf+i);
			refresca();
			espera(250);
			if(i<5){
			borra();
			tablero();

			pieza3(2,6);
			pieza1(0,6);
			}
			
	}
	}
		
		
		void mov3(int x,int y){
		int yf,xf;
		for(int i=0;i<=5;i++){
			pieza3(x,y-i);
			refresca();
			espera(250);
			if(i<5){
			borra();
			tablero();
			pieza2(1,6);
			pieza1(0,6);
			}
			yf=y-i;
		}
			
			
			for(int i=0;i<=1;i++){
			pieza3(x-i,yf);
			refresca();
			espera(250);
			if(i<1){
			borra();
			tablero();
			pieza2(1,6);
			pieza1(0,6);
			}
			xf=x-i;
	}
			for(int i=0;i<=4;i++){
			pieza3(xf,yf+i);
			refresca();
			espera(250);
			if(i<4){
			borra();
			tablero();
			pieza2(1,6);
			pieza1(0,6);
			}
			
	}
	}
			
		void mov4(int x,int y){
		int yf,xf;
		for(int i=0;i<=5;i++){
			pieza1(x,y-i);
			refresca();
			espera(250);
			if(i<5){
			borra();
			tablero();
			pieza2(1,6);
			pieza3(1,5);
			}
			yf=y-i;
		}
			
			
			for(int i=0;i<=2;i++){
			pieza1(x+i,yf);
			refresca();
			espera(250);
			if(i<2){
			borra();
			tablero();
			pieza2(1,6);
			pieza3(1,5);
			}
			xf=x+i;
	}
			for(int i=0;i<=5;i++){
			pieza1(xf,yf+i);
			refresca();
			espera(250);
			if(i<5){
			borra();
			tablero();
			pieza2(1,6);
			pieza3(1,5);
			}
			
	}
	}
				
		void mov5(int x,int y){
		int yf,xf;
		for(int i=0;i<=4;i++){
			pieza3(x,y-i);
			refresca();
			espera(250);
			if(i<4){
			borra();
			tablero();
			pieza2(1,6);
			pieza1(2,6);
			}
			yf=y-i;
		}
			
			
			for(int i=0;i<=1;i++){
			pieza3(x-i,yf);
			refresca();
			espera(250);
			if(i<1){
			borra();
			tablero();
			pieza2(1,6);
			pieza1(2,6);
			}
			xf=x-i;
	}
			for(int i=0;i<=5;i++){
			pieza3(xf,yf+i);
			refresca();
			espera(250);
			if(i<5){
			borra();
			tablero();
			pieza2(1,6);
			pieza1(2,6);
			}
			
	}
	}
				
		void mov6(int x,int y){
		int yf,xf;
		for(int i=0;i<=5;i++){
			pieza2(x,y-i);
			refresca();
			espera(250);
			if(i<5){
			borra();
			tablero();
			pieza1(2,6);
			pieza3(0,6);
			}
			yf=y-i;
		}
			
			
			for(int i=0;i<=1;i++){
			pieza2(x+i,yf);
			refresca();
			espera(250);
			if(i<1){
			borra();
			tablero();
			pieza1(2,6);
			pieza3(0,6);
			}
			xf=x+i;
	}
			for(int i=0;i<=4;i++){
			pieza2(xf,yf+i);
			refresca();
			espera(250);
			if(i<4){
			borra();
			tablero();
			pieza1(2,6);
			pieza3(0,6);
			}
			
	}
	}
				
		void mov7(int x,int y){
		int yf,xf;
		for(int i=0;i<=5;i++){
			pieza3(x,y-i);
			refresca();
			espera(250);
			if(i<5){
			borra();
			tablero();
			pieza2(2,5);
			pieza1(2,6);
			}
			yf=y-i;
		}
			
			
			for(int i=0;i<=2;i++){
			pieza3(x+i,yf);
			refresca();
			espera(250);
			if(i<2){
			borra();
			tablero();
			pieza2(2,5);
			pieza1(2,6);
			}
			xf=x+i;
	}
			for(int i=0;i<=3;i++){
			pieza3(xf,yf+i);
			refresca();
			espera(250);
			if(i<3){
			borra();
			tablero();
			pieza2(2,5);
			pieza1(2,6);
			}
			
	}
	}
	
