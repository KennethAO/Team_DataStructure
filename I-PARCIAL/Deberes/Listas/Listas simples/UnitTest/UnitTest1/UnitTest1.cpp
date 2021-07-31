#include "pch.h"
#include "CppUnitTest.h"
#include "Nodo.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = -1;
			Nodo nodo;
			Assert::AreEqual(true, nodo.vacio());
		}
	};
}
