/***********************************************************************
 * Universidad de las fuerzas armadas ESPE
 * Nrc:     3685
 * Module:  Nodo.h
 * Author:  Andrade Kenneth
 * Author:  Buse Rafael 
 * Author:  Calvopiña David
 * Author:  Hidrobo Nicolas
 * Autor:   Patiño Bryan
 * Author:  Tiamba Henry
 * Version:  01
 * Modified: martes, 8 de junio de 2021 14:50:42
 * Purpose: Declaration of the prototypes of the fuction Nodo.h
 ***********************************************************************/
#ifndef NODO_H
#define NODO_H
class Nodo
{
    public:
        Nodo();
        Nodo(int, Nodo*);
        int getDato(void);
		Nodo *getLista();
        void setDato(int);
        Nodo getSiguiente(void);
        void setSiguiente(Nodo*);
        void insertarInicio(int);
        void insertarFinal(int);
        bool vacio(void);
        void imprimir();
    protected:

    private:
        int dato;
        Nodo *siguiente;
};
#endif 
