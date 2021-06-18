#include "pch.h"
#include "CppUnitTest.h"
#include "Validacion.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		Validacion valdaci();
		TEST_METHOD(TestMethod1)
		{
			cout << "Ingrese un  numero";
		}
	};
}
