#include "pch.h"
#include "CppUnitTest.h"
#include "Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = 3.87298;
			Functions op(50);
			Assert::AreEqual(result, op.squareRoot(15));
		}

		TEST_METHOD(TestMethod2)
		{
			long double result = 0.909297;
			Functions op(50);
			Assert::AreEqual(result, op.calculateSin(2));
		}

		TEST_METHOD(TestMethod3)
		{
			long double result = 0.283662;
			Functions op(50);
			Assert::AreEqual(result, op.calculateCos(5));
		}

		TEST_METHOD(TestMethod4)
		{
			long double result = -225.951;
			Functions op(50);
			Assert::AreEqual(result, op.calculateTan(11));
		}

		TEST_METHOD(TestMethod4)
		{
			long double result = 0.446995;
			Functions op(50);
			Assert::AreEqual(result, op.calculateCotan(20));
		}

		TEST_METHOD(TestMethod4)
		{
			double result = 3.14657;
			Functions op(50);
			Assert::AreEqual(result, op.calculatePi(0.01));
		}
	};
}
