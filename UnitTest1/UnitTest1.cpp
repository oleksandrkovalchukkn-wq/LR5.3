#include "pch.h"
#include "CppUnitTest.h"
#include "../LR5.3/LR5.3.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		const double EPSILON = 1e-7;

		TEST_METHOD(Test_Branch_LessOne_Positive)
		{
			double x = 0.5;
			double expected = 0.4002083;
			double actual = f(x);

			Assert::AreEqual(expected, actual, EPSILON);
		}
	};
}