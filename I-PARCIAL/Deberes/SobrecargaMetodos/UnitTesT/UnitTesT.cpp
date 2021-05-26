#include "pch.h"
#include "CppUnitTest.h"
#include "UnitTest1.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTesT
{
	TEST_CLASS(UnitTesT)
	{
	public:
		//suma
		TEST_METHOD(TestMethodSuma1)
		{
			float resultado = 12;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.sumar(12));
		}
		TEST_METHOD(TestMethodSuma2)
		{
			float resultado = -33;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.sumar(12,-45));
		}
		TEST_METHOD(TestMethodSuma3)
		{
			float resultado = -33;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.sumar(12,-45,0));
		}
		TEST_METHOD(TestMethodSuma4)
		{
			float resultado = -40.5;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.sumar(-45, -85.5, 85, 5));
		}
		TEST_METHOD(TestMethodSuma5)
		{
			float resultado = 8.5;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.sumar(-45,-85.5,85,5,49));
		}
		TEST_METHOD(TestMethodSuma6)
		{
			float resultado = 168;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.sumar(-78,78,65,87,9,7));
		}

		//resta
		TEST_METHOD(TestMethodResta1)
		{
			float resultado = 12;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.restar(12));
		}
		TEST_METHOD(TestMethodResta2)
		{
			float resultado = 57;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.restar(12, -45));
		}
		TEST_METHOD(TestMethodResta3)
		{
			float resultado = 57;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.restar(12, -45, 0));
		}
		TEST_METHOD(TestMethodResta4)
		{
			float resultado = -49.5;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.restar(-45, -85.5, 85, 5));
		}
		TEST_METHOD(TestMethodResta5)
		{
			float resultado = -98.5;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.restar(-45, -85.5, 85, 5, 49));
		}
		TEST_METHOD(TestMethodResta6)
		{
			float resultado = -324;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.restar(-78, 78, 65, 87, 9, 7));
		}

		//multiplicar
		TEST_METHOD(TestMethodMultiplicacion1)
		{
			float resultado = 12;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.multiplicar(12));
		}
		TEST_METHOD(TestMethodMultiplicacion2)
		{
			float resultado = -540;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.multiplicar(12, -45));
		}
		TEST_METHOD(TestMethodMultiplicacion3)
		{
			float resultado = 0;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.multiplicar(12, -45, 0));
		}
		TEST_METHOD(TestMethodMultiplicacion4)
		{
			float resultado = -275;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.multiplicar(-5, 5.5, 5, 2));
		}
		TEST_METHOD(TestMethodMultiplicacion5)
		{
			float resultado = -600;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.multiplicar(5,-1,-5,-4,6));
		}
		TEST_METHOD(TestMethodMultiplicacion6)
		{
			float resultado = 35280;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.multiplicar(-5,-7,-8, -2, 9, 7));
		}

		//Mayor
		TEST_METHOD(TestMethodMayor1)
		{
			float resultado = 12;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.calcularMayor(12));
		}
		TEST_METHOD(TestMethodMayor2)
		{
			float resultado = 12;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.calcularMayor(12, -45));
		}
		TEST_METHOD(TestMethodMayor3)
		{
			float resultado = 12;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.calcularMayor(12, -45, 0));
		}
		TEST_METHOD(TestMethodMayor4)
		{
			float resultado = 85;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.calcularMayor(-45, -85.5, 85, 5));
		}
		TEST_METHOD(TestMethodMayor5)
		{
			float resultado = 85;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.calcularMayor(-45, -85.5, 85, 5, 49));
		}
		TEST_METHOD(TestMethodMayor6)
		{
			float resultado = 87;
			Operaciones<float> operaciones;
			Assert::AreEqual(resultado, operaciones.calcularMayor(-78, 78, 65, 87, 9, 7));
		}



	};
}
