
#include "OperacionesPersona.h"
#include "Validar.h"
#include "DateOperations.h"
#include <ctime>
#include "Libreria/ListaDoble.h"
#include "Archivo.h"
#include "Persona.h"
#include "windows.h"

Persona OperacionesPersona::insertarDatos(){
	Validar v;
	DateOperations vd;
	Persona persona;
	cout<<"\n\n";
	persona.setNombre(v.validarLetras("Nombre: ", 15,true));
	cout<<endl;
	persona.setApellido(v.validarLetras("Apellido: ", 8,false));
	cout<<endl;
	persona.setNacimiento(vd.enterDate());
	cout<<endl;
	
	persona.setCedula(v.validarCedula());

	cout<<endl;
	persona.setDireccion(v.ingreso("Direccion: ",20,true));
	cout<<endl;
	persona.setTelefono(v.validarTelfeno());
	cout<<endl;
	persona.setEdad(calcularEdad(persona.getNacimiento()));
	return persona;
}

void OperacionesPersona::generarCorreo(Persona &persona){
	char *nombre = (char*)persona.getNombre().c_str();
	char *apellido = (char*)persona.getApellido().c_str();
	string correo = "";
	correo += tolower(*(nombre + 0));
	for (int i = 0; i < persona.getNombre().length(); i++){
		if(*(nombre+i) == 32){
			correo += tolower(*(nombre + (i+1)));
		}
	}
	for (int i = 0; i < persona.getApellido().length(); i++){
		*(apellido + i) = tolower(*(apellido + i));
	}
	correo += apellido;
	string correoA = correo; 
	correo += "@espe.fin.ec";
	//rebuse@espe.fin.ec

	int contador = compararCorreo(persona);
	if(contador>=1){
	correo = "";
	correo = correoA;
	correo = correo + to_string(contador)+"@espe.fin.ec";
	}
	persona.setCorreo(correo);
}

string OperacionesPersona::convertirMinusculas(string dato){
	
	char *datoC = (char*)dato.c_str();
	for (int i = 0; i < dato.length(); i++){
		*(datoC+i) = tolower(*(datoC+i));
	}

	return datoC;
	
}


int OperacionesPersona::compararCorreo(Persona &persona){
	
	Archivo<Persona> archivo; 
	ListaDoble<Persona> listaPer;
	int contador = 0;
	listaPer = archivo.recorrerTxt("Personas");
	bool verificador = listaPer.verificarVacia();

	if(verificador==false){
		return contador; 
	}else{
		string comparador1,comparador2;
		Persona per1;
		for(int i=0;i<listaPer.obtenerDimension();i++){
			per1 = listaPer.obtenerDato(i)->getDato();
			comparador1 = convertirMinusculas(persona.getApellido());
			comparador2 = convertirMinusculas(per1.getApellido());
			if(comparador1 == comparador2){
				int pos;
				char *nombre = (char*)persona.getNombre().c_str();
				for (int i = 0; i < persona.getNombre().length(); i++){
					if(*(nombre+i) == 32){
						pos = i+1;
					}
				}
				int pos1;
				char *nombre1 = (char*)per1.getNombre().c_str();

				for (int i = 0; i < per1.getNombre().length(); i++){
					if(*(nombre1+i) == 32){
						pos1 = i+1;
					}
				}
				if(tolower(*(nombre+0)) == tolower(*(nombre1+0)) && tolower(*(nombre+pos)) == tolower(*(nombre1+pos1))){
					contador++;
				}
			}
		}
		return contador;
	}
}

int OperacionesPersona::calcularEdad(Date nacimiento){

    time_t t = std::time(0);   
    tm* now = std::localtime(&t);

	int anioNacimiento = nacimiento.getYear();
	int mesNacimiento = nacimiento.getMonth();
	int diaNacimiento = nacimiento.getDay();

	int anioActual = now->tm_year+1900;
	int mesActual = now->tm_mon + 1;
	int diaActual = now->tm_mday;

	int edad = anioActual-anioNacimiento;

	if(mesActual<=mesNacimiento){
		if(mesActual==mesNacimiento){
			if(diaNacimiento>diaActual){
				edad--;
			}
		}else{
			edad--;
		}
	}
	return edad; 
}

void OperacionesPersona::guardarArchivo(Persona persona){
	
	ListaDoble<Persona> lst;
	lst.insertar(persona);
	Archivo<Persona> archivo(lst);
	archivo.guardarTxt("Personas");

}

void OperacionesPersona::consultarDatos(string cedula){
	
    ListaDoble<Persona> lst;
    Archivo<Persona> archivo;
    lst = archivo.recorrerTxt("Personas");
    bool verificador = false;
    cout<<"\n";
    for (int i = 0; i < lst.obtenerDimension(); i++){
        Persona p = lst.obtenerDato(i)->getDato();
        if(p.getCedula() == cedula){
            cout<<"\n\tDatos"<<endl;
			cout<<"\n\n"<<p.datosPersona();
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

	system("pause");

}