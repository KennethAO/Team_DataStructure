#include "OperacionesAmortizacion.h"
#include "Validar.h"
#include "DateOperations.h"
#include <math.h>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>
#include "Archivo.h"
#include <windows.h>



double OperacionesAmortizacion::redondear(double numero,int numeroDecimales){
    
    stringstream ss;
    ss << fixed;
    ss.precision(numeroDecimales); // set # places after decimal
    ss << numero;
    string numeroS= ss.str();
    return stof(numeroS);
}

void OperacionesAmortizacion::ingresoDatos(){
    
    Validar v;
    Date date;
    validarIngresoCedula();
    cout<<endl;
    mov.setMontoPagar(v.validarNumerosDecimales("Ingrese el monto del prestamo: ",8));
    cout<<endl;
    mov.setPlazoMeses(stoi(v.validarNumeros("Ingrese el plazo en meses: ",3)));
    cout<<endl;
    mov.setTEA(v.validarNumerosDecimales("Tasa de interes anual %: ",5));
    cout<<endl;
    DateOperations dateOperations;
    bool flag=false;
    while(flag==false){
        date = dateOperations.enterDate();
        flag = dateOperations.checkDate(date);
        if(flag == false){
            cout<<endl;
            cout<<"Fecha ingresa no valida"<<endl;
            Sleep(1000);
            cout << "\e[A\r\e[0K";
            cout << "\e[A\r\e[0K";
        }
    }
    mov.setFechaInicio(date);
}

void OperacionesAmortizacion::calcularTEM(){
    double TEM;
    TEM = mov.getTEA()/12;
    mov.setTEM(TEM);
}

void OperacionesAmortizacion::calcularCuota(){
    double cuota;
    double numerador = (mov.getMontoPagar()*(pow(1.0F+(mov.getTEM()/100.0F),mov.getPlazoMeses()))*(mov.getTEM()/100.0F));
    double denominador = (pow(1.0F+(mov.getTEM()/100.0F),mov.getPlazoMeses()))-1.0F;
    cuota = numerador/denominador;
    mov.setCuota(redondear(cuota,2));
}

double OperacionesAmortizacion::calcularImporteInteres(){
    return mov.getCuota()*mov.getPlazoMeses() - mov.getMontoPagar();
}

double OperacionesAmortizacion::calcularCostototal(){
    return mov.getCuota()*mov.getPlazoMeses();
}

double OperacionesAmortizacion::calcularInteres(double saldoPendiente){
    double interes;
    interes = saldoPendiente*(mov.getTEM()/100.0F);
    // cout<<"\n\nInteres: "<<interes;
    return redondear(interes,2);
    // calcularAmortizaion(interes);
}

double OperacionesAmortizacion::calcularAmortizaion(double interes){
    double amortizacion;
    amortizacion = mov.getCuota() - interes;
    // cout<<"\n\nAmortizacion: "<<amortizacion;
    return amortizacion;
}

double OperacionesAmortizacion::calcularSaldoPendiente(double amortizacion, double saldo){
    double saldoPendiente;
    saldoPendiente = saldo - amortizacion;
    return redondear(saldoPendiente,2);
}

void OperacionesAmortizacion::generarTabla(){
    DateOperations op;
    Date *dates;
    stringstream s;
    dates = op.generateDate(mov.getPlazoMeses(),mov.getFechaInicio());    
    double saldo = redondear(mov.getMontoPagar(),2);
    double interes;
    double amortizacion;
    double saldoPendiente;
    Persona persona = mov.obtenerPersona();

    s<<"Nombre: "<<persona.getNombre()<<endl;
    s<<"Apellido: "<<persona.getApellido()<<endl;
    s<<"Cedula: "<<persona.getCedula()<<endl;
    s<<"Correo: "<<persona.getCorreo()<<endl;
    s<<"edad: "<<persona.getEdad()<<endl;

    s<<"\n\n";
    s<<"# de cuota"<<"\tFecha limite"<<"\t    Saldo Incial";
    s<<"\tPago mensual"<<"\tInteres"<<"\t\tAmortizacion"<<"\t\tSaldo Pendiente";
    s<<"\n\n";

    for (int j = 0; j < mov.getPlazoMeses(); j++){              
        s<<(j+1);
        s<<"\t\t\t"<<(dates+j)->datosFecha();   
        s<<"\t\t\t"<<saldo;
        s<<"\t\t\t"<<mov.getCuota();
        interes = redondear(calcularInteres(saldo),2);
        s<<"\t\t\t"<<interes;
        amortizacion = redondear(calcularAmortizaion(interes),2);
        s<<"\t\t\t"<<amortizacion;
        if(j < mov.getPlazoMeses()-1){
            saldoPendiente = redondear(calcularSaldoPendiente(amortizacion,saldo),2);
        }else{
            saldoPendiente = 0;
        }
        s<<"\t\t\t"<<saldoPendiente;
        saldo = saldoPendiente;
        s<<endl<<endl;
    }
    enviarTabla(s.str());
              
}

void OperacionesAmortizacion::enviarTabla(string tabla){
    Archivo<Persona> archivo;
    archivo.guardarTabla("tabla",tabla);
}

void OperacionesAmortizacion::validarIngresoCedula(){
    
    
    Validar v;
    ListaDoble<Persona> lst;
    Archivo<Persona> archivo;
    lst = archivo.recorrerTxt("Personas");
    bool verificador = false;
    string cedula;
    cout<<"\n";
    
    do
    {
        cedula = v.validarNumeros("Ingrese su cedula: ",10);
        for (int i = 0; i < lst.obtenerDimension(); i++){
            Persona p = lst.obtenerDato(i)->getDato();
            if(p.getCedula() == cedula){
                verificador = true;
            }
        }
        if(verificador == false){
            cout<<endl;
            cout<<"Cedula no encontrada"<<endl;
            Sleep(1000);
            cout << "\e[A\r\e[0K";
            cout << "\e[A\r\e[0K";
        }
    } while (verificador == false);

    mov.setCedulaPropietario(cedula);

}