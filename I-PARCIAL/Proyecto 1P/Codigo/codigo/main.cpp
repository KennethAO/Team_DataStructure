#include <iostream>
#include "OperacionesPersona.h"
#include "DateOperations.h"
#include "Menu.h"
#include "Validation.cpp"

int main(int, char**) {
    
    /*Menu menu;
    int opc;

    opc = menu.menuPrincipal();

    switch (opc)
    {
    case 1:
        Persona persona;
        OperacionesPersona op;
        persona = op.insertarDatos();

        op.generarCorreo(persona);

        cout<<"\n\n\t Datos Persona \n"<<persona.datosPersona();
        break;
    }*/
    
    Date date;
    DateOperations dateOperations;
bool flag=false;
while(flag==false){
system("cls");
date = dateOperations.enterDate();
flag = dateOperations.checkDate(date);
if(flag==false){
        cout<<"Fecha mala ponga bien chamadre"<<endl;
    }
}
int month = dateOperations.enterPaymentLimit();
dateOperations.generateDate(month,date);
}
