#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6_1_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 6;
			int a[n] = { 9, 8, 7, 6, 5, 4 };
			t = Sum(a, n);
			Assert::AreEqual(21, t);
		}
	};
}
