#include "Movimientos.h"
#include "Archivo.h"


double Movimientos::getMontoPagar(){
    return montoPagar;
}

void Movimientos::setMontoPagar(double newMontoPagar){
    montoPagar = newMontoPagar;
}

int Movimientos::getPlazoMeses(){
    return plazoMeses;
}

void Movimientos::setPlazoMeses(int newPlazoMeses){
    plazoMeses = newPlazoMeses;
}

double Movimientos::getTEA(){
    return TEA;
}

void Movimientos::setTEA(double newTEA){
    TEA = newTEA;
}

double Movimientos::getTEM(){
    return TEM;
}

void Movimientos::setTEM(double newTEM){
    TEM = newTEM;
}

double Movimientos::getCuota(){
    return cuota;
}

void Movimientos::setCuota(double newCuota){
    cuota = newCuota;
}

Date Movimientos::getFechaInicio(){
    return fechaInicio;
}

void Movimientos::setFechaInicio(Date newFechaInciio){
    fechaInicio = newFechaInciio;
}

string Movimientos::getCedulaPropietario(void)
{
   return cedulaPropietario;
}

void Movimientos::setCedulaPropietario(string newCedula)
{
   cedulaPropietario = newCedula;
}

Persona Movimientos::obtenerPersona(){

    ListaDoble<Persona> lst;
    Archivo<Persona> archivo;
    lst = archivo.recorrerTxt("Personas");

    for (int i = 0; i < lst.obtenerDimension(); i++){
        Persona p = lst.obtenerDato(i)->getDato();
        if(p.getCedula() == cedulaPropietario){
            return p;
        }
    }

}


string Movimientos::formatoTxt(){
    stringstream s;
    Persona persona;
    persona = obtenerPersona();
    s<<persona.getNombre()<<endl;
    s<<persona.getApellido()<<endl;
    s<<persona.getCedula()<<endl;
    s<<persona.getCorreo()<<endl;
    
    // s<<nombre<<endl;
    // s<<apellido<<endl;
    // s<<nacimiento.datosFecha()<<endl;
    // s<<edad<<endl; 
    // s<<cedula<<endl;
    // s<<direccion<<endl;
    // s<<telefono<<endl;
    // s<<correo<<endl;
    
    return s.str();
}