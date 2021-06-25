#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <ctime>
#include <string>
#include <string.h>
#include <conio.h>
#include "Date.h"
#include "Date.cpp"
#include "Validacion.cpp"
#include "Validacion.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace UnitTesteProyect
{
	TEST_CLASS(DateOperations)
	{
	//Prueba con valores eneteros
	public:
					
		TEST_METHOD(ingresar)
		{
			//Arange
			char dato[5];
			char dato_expected[5];
			int i, valor = 0;
			char tecla;
			i = 0;
			dato[0] = 0;
			dato_expected[0] = 0;
			do
			{

				tecla = getch();
				if (i > 0 && tecla == 8) {
					cout << "\b \b";
					dato[--i] = '\0';
				}
				else {
					if (i < 5) {
						if ((tecla >= 48 && tecla <= 57)) {
							cout << tecla;
							dato[i++] = tecla;
						}
					}
				}


			} while ((tecla != 13 || dato[0] == '\0'));
			dato[i] = 0;

			//Act
			valor = atoi(dato);

			//Assert

			Assert::AreEqual(dato[0], dato_expected[0]);

		}

		TEST_METHOD(ingresarFecha)
		{
			bool verificador;
			bool expected;
			Date fecha;
			int day, month, year;
			do
			{

				day = 0; month = 0; year = 0;
				cout << "Ingrese la fecha en formato dd/mm/aa: ";
			
				
				if (verificador == false) {
					cout << endl;
					
				}
			} while (verificador == false);

			
			//Act

			fecha.setDay(day); fecha.setMonth(month); fecha.setYear(year);

			//Assert

			Assert::AreEqual(verificador,expected);

		}

		TEST_METHOD(revisar_fecha)
		{
			//Act
			bool flag;
			bool expected;
			Date date;

		    int day = zeller(date.getDay(), date.getMonth(), date.getYear());
				if (day == 0 || day == 6) {
					flag = false;
				}
				else {
					flag = true;
				}
	
			

			//Assert
			Assert::AreEqual(flag, expected);
		
		}
			
			
		TEST_METHOD(generarInformeFecha)
		{
			
			//Arrange
			char dato[5];
			int i, valor = 0;
			char tecla;
			i = 0;
			dato[0] = '\0';
			Date date;
			do
			{

				tecla = getch();
				if (i > 0 && tecla == 8) {
					cout << "\b \b";
					dato[--i] = '\0';
				}
				else {
					if (i < 5) {
						if ((tecla >= 48 && tecla <= 57)) {
							cout << tecla;
							dato[i++] = tecla;
						}
					}
				}


			} while ((tecla != 13 || dato[0] == '\0'));
			dato[i] = '\0';

			//Act
			valor = atoi(dato);

			//Assert

			Assert::AreSame(dato[0], dato[1]);

		}

		TEST_METHOD(generarDate)
		{
			//Arrange
			int numbermonth;
			Date date;
			int day, month, year, dayAux;
			int day = date.getDay();
			dayAux = day;
			month = date.getMonth();
			year = date.getYear();

			for (int i = 0; i < numbermonth; i++) {
				if (month + 1 > 12) {
					month = 1;
					year++;
				}
				else {
					month++;
				}

				if (month + 1 > 12) {
					dayAux = day;
				}


				cout << endl;
				cout << date.getDay() << "/";
				cout << date.getMonth() << "/";
				cout << date.getYear();
				cout << endl;

				//Act

				//Assert

				Assert::AreEqual(day, dayAux);

			}
		}

		TEST_METHOD(enterPayment){

			//Arrange
			int numberMonth,month;
			bool validateExpected = false;
			do {
				cout << "\nIngrese el numero de meses: ";
				cin >> numberMonth;
				if ((numberMonth) == false) {
					cout << "Dato ingresado no valido";
				}
			} while ((numberMonth) == false);
			int expected = 0;
	

			return ;

		    //Assert

			Assert::AreEqual(month, expected);
					

		}

		TEST_METHOD(validarDiaLaboral){

			//Arrange
			int day;
			int month, validateExpected;
			int year;
			Date date2;
			if (zeller(day, month, year) == 0) {
				if (day + 1 > verifyDayInMonth(month, year)) {
					if (month + 1 > 12) {
						year++;
						month = 1;
						day = 1;
					}
					else {
						month++;
						day = 1;
					}
				}
				else {
					day++;
				}
			}
			else if (zeller(day, month, year) == 6) {
				if (day + 2 > verifyDayInMonth(month, year)) {
					if (month + 1 > 12) {
						year++;
						month = 1;
						day = 1;
					}
					else {
						month++;
						day = 1;
					}
				}
				else {
					day = day + 2;
				}
			}
			

			//Act

			Date date1(day, month, year);

		    //Assert

			Assert::AreEqual(month, validateExpected);
					

		}

		TEST_METHOD(validarDiaLaboral) {

			//Arrange
			int day;
			int month;
			int year;
			Date* feriados = new Date[12];
			Date date2(day, month, year);
			

			*(feriados + 0) = Date(1, 1, 1);
			*(feriados + 1) = Date(15, 2, 1);
			*(feriados + 2) = Date(16, 2, 1);
			*(feriados + 3) = Date(2, 4, 1);
			*(feriados + 4) = Date(1, 5, 1);
			*(feriados + 5) = Date(24, 5, 1);
			*(feriados + 6) = Date(9, 8, 1);
			*(feriados + 7) = Date(9, 9, 1);
			*(feriados + 8) = Date(2, 11, 1);
			*(feriados + 9) = Date(3, 11, 1);
			*(feriados + 10) = Date(25, 12, 1);
			*(feriados + 11) = Date(31, 12, 1);

			for (int i = 0; i < 11; i++) {
				if ((feriados + i)->getDay() == day && (feriados + i)->getMonth() == month) {
					if (day + 1 > verifyDayInMonth(month, year)) {
						if (month + 1 > 12) {
							year++;
							month = 1;
							day = 1;
						}
						else {
							month++;
							day = 1;
						}
					}
					else {
						day++;
					}
					date2.setDay(day);
					date2.setMonth(month);
					date2.setYear(year);
				}
			}


			//Assert

			Assert::IsNull(feriados);
		}
		 
	};

	TEST_CLASS(OperacionesPersona) {
			
		TEST_METHOD(insertarDatos)
		{
			//Arrange

		
			DateOperations vd;
		
			int value = 0;

			//Act
			cout << "\n\n";
			persona.setNombre(v.validarLetras("Nombre: ", 15, true));
			cout << endl;
			persona.setApellido(v.validarLetras("Apellido: ", 8, false));
			cout << endl;
			persona.setNacimiento(vd.enterDate());
			cout << endl;
			persona.setCedula(v.validarCedula());
			cout << endl;
			//Assert

			void Assert::AreEqual(int expected , int value);

		}

		TEST_METHOD(generarCorreo) {

			//Arrange
			char* nombre = (char*)persona.getNombre().c_str();
			char* apellido = (char*)persona.getApellido().c_str();
			string correo = "";

			correo += tolower(*(nombre + 0));

			for (int i = 0; i < persona.getNombre().length(); i++) {
				if (*(nombre + i) == 32) {
					correo += tolower(*(nombre + (i + 1)));
				}
			}

			//Act

			*(apellido + 0) = tolower(*(apellido + 0));
			correo += apellido;
			correo += "@espe.fin.ec";
			persona.setCorreo(correo);

			//Assert

			Assert::AreEqual(persona.setCorreo(correo), correo);


		}

		





	};


