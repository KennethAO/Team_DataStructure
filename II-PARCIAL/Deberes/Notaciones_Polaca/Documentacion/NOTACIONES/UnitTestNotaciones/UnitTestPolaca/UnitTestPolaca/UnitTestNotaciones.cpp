#include "pch.h"
#include "CppUnitTest.h"
#include "Notaciones.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestNotaciones
{
	TEST_CLASS(UnitTestNotaciones)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Notaciones notaciones;
			int result = 2;
			Assert::AreEqual(result,notaciones.verificarJerarquia('*'));
		}
		TEST_METHOD(TestMethod2)
		{
			Notaciones notaciones;
			int result = 1;
			Assert::AreEqual(result, notaciones.verificarJerarquia('+'));
		}
		TEST_METHOD(TestMethod3)
		{
			Notaciones notaciones;
			int result = 0;
			Assert::AreEqual(result, notaciones.verificarJerarquia('j'));
		}
		TEST_METHOD(TestMethod4)
		{
			Notaciones notaciones;
			bool result = true;
			Assert::AreEqual(result, notaciones.comprobarSigno('+'));
		}
		TEST_METHOD(TestMethod5)
		{
			Notaciones notaciones;
			bool result = true;
			Assert::AreEqual(result, notaciones.comprobarSigno('*'));
		}
		TEST_METHOD(TestMethod6)
		{
			Notaciones notaciones;
			bool result = true;
			Assert::AreEqual(result, notaciones.comprobarSigno('='));
		}
		TEST_METHOD(TestMethod7)
		{
			Notaciones notaciones;
			bool result = false;
			Assert::AreEqual(result, notaciones.comprobarSigno('asdf'));
		}
		TEST_METHOD(TestMethod8)
		{
			Notaciones notaciones;
			bool result = true;
			Assert::AreEqual(result, notaciones.compararFunciones(83));
		}
		TEST_METHOD(TestMethod9)
		{
			Notaciones notaciones;
			bool result = true;
			Assert::AreEqual(result, notaciones.compararFunciones(97));
		}
		TEST_METHOD(TestMethod10)
		{
			Notaciones notaciones;
			bool result = true;
			Assert::AreEqual(result, notaciones.compararFun(101));
		}
		TEST_METHOD(TestMethod11)
		{
			Notaciones notaciones;
			bool result = true;
			Assert::AreEqual(result, notaciones.compararFun(111));
		}
		TEST_METHOD(TestMethod12)
		{
			Notaciones notaciones;
			string result = "Division";
			Assert::AreEqual(result, notaciones.compararSigno('/'));
		}
		TEST_METHOD(TestMethod13)
		{
			Notaciones notaciones;
			string result = "Igual";
			Assert::AreEqual(result, notaciones.compararSigno('='));
		}
		TEST_METHOD(TestMethod14)
		{
			Notaciones notaciones;
			string result = "Modulo";
			Assert::AreEqual(result, notaciones.compararSigno('%'));
		}
	};
}
