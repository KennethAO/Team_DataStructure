#include "pch.h"
#include "CppUnitTest.h"
#include "Supermarket.h"
#include "Operator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestOperator1)
		{
			float result = 350;
			Supermarket supermarket1("Tia", 150);
			Supermarket supermarket2("Maxi", 200);
			MarketOperation marketOp(supermarket1);
			MarketOperation marketOp2(supermarket2);
		    Assert::AreEqual(result, marketOp + marketOp2);
		}

		TEST_METHOD(TestOperator2)
		{
			float result = 350;
			Supermarket supermarket1("Tia", 150);
			Supermarket supermarket2("Maxi", 200);
			MarketOperation marketOp(supermarket1);
			MarketOperation marketOp2(supermarket2);
			Assert::AreEqual(result, marketOp - marketOp2);
		}

		TEST_METHOD(TestOperator3)
		{
			float result = 350;
			Supermarket supermarket1("Tia", 150);
			Supermarket supermarket2("Maxi", 200);
			MarketOperation marketOp(supermarket1);
			MarketOperation marketOp2(supermarket2);
			Assert::AreEqual(result, marketOp * marketOp2);
		}


		TEST_METHOD(TestOperator6)
		{
			string result = "Maxi";
			Supermarket supermarket1("Tia", 150);
			Supermarket supermarket2("Maxi", 200);
			MarketOperation marketOp(supermarket1);
			MarketOperation marketOp2(supermarket2);
			Assert::AreEqual(result, marketOp > marketOp2);
		}

		TEST_METHOD(TestOperator7)
		{
			string result = "Tia";
			Supermarket supermarket1("Tia", 150);
			Supermarket supermarket2("Maxi", 200);
			MarketOperation marketOp(supermarket1);
			MarketOperation marketOp2(supermarket2);
			Assert::AreEqual(result, marketOp < marketOp2);
		}

		TEST_METHOD(TestOperator8)
		{
			float result = 54000;
			Supermarket supermarket1("Tia", 150);
			MarketOperation marketOp(supermarket1);
			Assert::AreEqual(result, marketOp*=360);
		}

		TEST_METHOD(TestOperator9)
		{
			float result = 30;
			Supermarket supermarket1("Tia", 150);
			MarketOperation marketOp(supermarket1);
			Assert::AreEqual(result, marketOp % 500);
		}

		TEST_METHOD(TestOperator10)
		{
			string result = "Igual numero de empelados";
			Supermarket supermarket1("Tia", 150);
			Supermarket supermarket2("Maxi", 200);
			MarketOperation marketOp(supermarket1);
			MarketOperation marketOp2(supermarket2);
			Assert::AreEqual(result, marketOp == marketOp2);
		}

		TEST_METHOD(TestOperator12)
		{
			string result = "Supermercado con empleados al dia";
			Supermarket supermarket1("Tia", 150);
			MarketOperation marketOp(supermarket1);
			Assert::AreEqual(result, marketOp || 15);
		}

		TEST_METHOD(TestOperator13)
		{
			string result = "Supermercado no cumple con sus tareas";
			Supermarket supermarket1("Tia", 150);
			MarketOperation marketOp(supermarket1);
			Assert::AreEqual(result, marketOp&&300);
		}

		TEST_METHOD(TestOperator14)
		{
			float result = 250;
			Supermarket supermarket1("Tia", 150);
			MarketOperation marketOp(supermarket1);
			Assert::AreEqual(result, marketOp | 25);
		}

		TEST_METHOD(TestOperator15)
		{
			float result = 45;
			Supermarket supermarket1("Tia", 150);
			MarketOperation marketOp(supermarket1);
			Assert::AreEqual(result, marketOp / 10);
		}

		TEST_METHOD(TestOperator16)
		{
			float result = 22500;
			Supermarket supermarket1("Tia", 150);
			MarketOperation marketOp(supermarket1);
			Assert::AreEqual(result, marketOp^2);
		}

		TEST_METHOD(TestOperator17)
		{
			int result = 20;
			Supermarket supermarket1("Tia", 150);
			Supermarket supermarket2("Maxi", 200);
			MarketOperation marketOp(supermarket1);
			MarketOperation marketOp2(supermarket2);
			Assert::AreEqual(result, marketOp[marketOp2]);
		}

		TEST_METHOD(TestOperator18)
		{
			string result = "Empleados eliminados de ambas empresas";
			Supermarket supermarket1("Tia", 150);
			Supermarket supermarket2("Maxi", 200);
			MarketOperation marketOp(supermarket1);
			MarketOperation marketOp2(supermarket2);
			Assert::AreEqual(result, marketOp %= marketOp2);
		}

	};
}
