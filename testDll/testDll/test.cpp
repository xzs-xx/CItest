#include "pch.h"
#include "sport.h"
#pragma comment(lib,"sportdll.lib")
TEST(TestCaseName, TestName)
{
	sport s;
	for (int i = 0; i < 1000; i++)
	{
		EXPECT_EQ(s.getSpeed(), 0);
	}
}