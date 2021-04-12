#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_2.1/Goods.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double first = 5;
			int second = 4;
			Goods g;
			g.Init(first, second);
			Assert::AreEqual(5, g.cost(), 4);
		}
	};
}
