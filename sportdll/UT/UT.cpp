#include "pch.h"
#include "CppUnitTest.h"
#include "../sportdll/sport.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT
{
	TEST_CLASS(UT)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			sport s;
			s.setSpeed(2);
			Assert::AreEqual(s.getSpeed(), 2);
		};
		TEST_METHOD(TestMethod2)
		{
			sport s;
			s.setSpeed(2);
			Assert::AreEqual(s.getSpeed(), 2);
		};
		TEST_METHOD(TestMethod3)
		{
			sport s;
			s.setSpeed(2);
			Assert::AreEqual(s.getSpeed(), 3);
		}
	};
}
