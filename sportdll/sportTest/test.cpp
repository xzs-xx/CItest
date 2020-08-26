#include "pch.h"
#include "../sportdll/sport.h"
TEST(TestCaseName, TestName)
{
	sport s;
	s.setSpeed(1);
	EXPECT_EQ(s.getSpeed(), 1);
}