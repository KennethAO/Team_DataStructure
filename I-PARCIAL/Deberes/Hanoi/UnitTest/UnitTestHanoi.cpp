#include "pch.h"
#include "CppUnitTest.h"
#include "Disk.h"
#include "Position.h"
#include "Operation.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestHanoi
{
	TEST_CLASS(UnitTestHanoi)
	{
	public:
		//OPERATION METHODS
		TEST_METHOD(TestMethod1)
		{
			int a=0,b=1,c=2,d=3;
			Operation operation;
			int expected ,result ;
			operation.playHatoi(a, b, c, d);
			
			Assert::AreEqual(result , expected);

				
		}

		TEST_METHOD(TestMethod2)
		{
			int a = 0, b = 1, c = 2, d = 3;
			Operation operation;
			Disk disk;
			int expected, result;
			operation.graphDisk(disk);

			Assert::AreSame(result, expected);


		}

		TEST_METHOD(TestMethod3)
		{
			int a = 0, b = 1, c = 2, d = 3;
			Operation operation;
			int expected, result;
			operation.moveDisk(result , expected);

			Assert::AreEqual(result, expected);


		}

		TEST_METHOD(TestMethod4)
		{
			int a = 0, b = 1, c = 2, d = 3;
			Operation operation;
			int expected, result;
			operation.graphBoard(result);

			Assert::AreEqual(result, expected);


		}

		//HANOI METHODS

		TEST_METHOD(TestMethod5)
		{
			int a = 0, b = 1, c = 2, d = 3;
			Hanoi hanoi;
			Tower tower;
			int expected, result;
			hanoi.addTower(tower ,result);

			Assert::AreEqual(result, expected);

		}

		TEST_METHOD(TestMethod6)
		{
			int a = 0, b = 1, c = 2, d = 3;
			Hanoi hanoi;
			Tower tower;
			int expected, result;
			hanoi.addTower(tower, result);

			Assert::AreEqual(result, expected);

		}

		TEST_METHOD(TestMethod7)
		{
			int a = 0, b = 1, c = 2, d = 3;
			Hanoi hanoi;
			Tower tower;
			int expected, result;
			hanoi.getDisk();

			Assert::AreEqual(result, expected);

		}

		TEST_METHOD(TestMethod8)
		{
			int a = 0, b = 1, c = 2, d = 3;
			Hanoi hanoi;
			Tower tower;
			int expected, result;
			hanoi.getTowers();

			Assert::AreEqual(result, expected);

		}
		TEST_METHOD(TestMethod9)
		{
			int a = 0, b = 1, c = 2, d = 3;
			Hanoi hanoi;
			Tower *tower;
			int expected, result;
			hanoi.setTowers(tower);

			Assert::AreEqual(result, expected);

		}

		

	};
}
