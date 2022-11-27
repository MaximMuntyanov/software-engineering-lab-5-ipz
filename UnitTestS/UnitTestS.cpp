#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\tboim\Desktop\Учеба\лаб ипз\lab3_ipz\lab3_ipz\lab3_ipz\lab3_ipz.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestS
{
	TEST_CLASS(calculate_Tests)
	{
	public:
		TEST_METHOD(calculate_getnegative3and3_expected20)

		{
			double x = -3;
			int n = 3;
			double expected = 20;

			double actual = calculate(x, n);

			if (fabs(actual - expected) > 0.0001f)
			{
				Assert::IsTrue(true);
			}
			else
			{
				Assert::Fail();
			}
		}

	public:
		TEST_METHOD(calculate_get1and5_expected5251)
		{
			double x = 1;
			int n = 3;
			double expected = 5251;

			double actual = calculate(x, n);

			if (fabs(actual - expected) < 0.0001f)
			{ 

				Assert::IsTrue(true);
			}
			else
			{
				Assert::Fail();
			}
		}
	};

	TEST_CLASS(checkBounds_Tests)
	{
	public:
		TEST_METHOD(checkBounds_get1and6_exceptionNotThrown)
		{
			int a = 1;
			int b = 6;

			try
			{
				checkBounds(a, b);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail;
			}
		} 


	public:
		TEST_METHOD(checkBounds_get14and3_exceptionThrown)
		{
			int a = 14;
			int b = 3;

			try
			{
				checkBounds(a, b);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	};

	TEST_CLASS(checkUpperBound_Tests)
	{
	public:
		TEST_METHOD(checkUpperBound_get8_exceptionNotThrown)
		{
			int n = 8;

			try 

			{
				checkUpperBound(n);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}

	public:
		TEST_METHOD(checkUpperBound_get1_exceptionThrown)
		{
			int n = 1;

			try
			{
				checkUpperBound(n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	};

	TEST_CLASS(checkStep_Tests)

	{
	public:
		TEST_METHOD(checkStep_get1_exceptionNotThrown)
		{
			int h = 1;

			try
			{
				checkStep(h);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}

	public:
		TEST_METHOD(checkStep_getnegative10_exceptionThrown)
		{
			int h = -10;

			try
			{
				checkStep(h);
				Assert::Fail();
			} 

			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	};

}

