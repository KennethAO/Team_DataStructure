#include "pch.h"
#include "CppUnitTest.h"
#include "DateOperations.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestDates
{
	TEST_CLASS(UnitTestDates)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool resultado = false;
			DateOperations operation;
			Assert::AreEqual(resultado, operation.checkDate());

		}

		TEST_METHOD(TestMethod2)
		{
			int resultado = 6;
			DateOperations operation;
			Assert::AreEqual(resultado, operation.enterPaymentLimit());

		}

		TEST_METHOD(TestMethod3)
		{
			string resultado = "8 de junio";
			DateOperations operation;
			Assert::AreEqual(resultado, operation.generateInformatdate());

		}

		TEST_METHOD(TestMethod4)
		{
			int resultado = 5;
			DateOperations operation;
			Assert::AreEqual(resultado, operation.ingresar("5"));

		}

		TEST_METHOD(TestMethod5)
		{
			bool resultado = true;
			DateOperations operation;
			Assert::AreEqual(resultado, operation.checkDate());

		}

		TEST_METHOD(TestMethod6)
		{
			int resultado = 3;
			DateOperations operation;
			Assert::AreEqual(resultado, operation.enterPaymentLimit());

		}

		TEST_METHOD(TestMethod7)
		{
			string resultado = "2 de febrero";
			DateOperations operation;
			Assert::AreEqual(resultado, operation.generateInformatdate());

		}

		TEST_METHOD(TestMethod8)
		{
			int resultado = 8;
			DateOperations operation;
			Assert::AreEqual(resultado, operation.ingresar("8"));

		}
	};
}
