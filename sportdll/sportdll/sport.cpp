#include "sport.h"
void _declspec(dllexport) sport::setSpeed(int speed1)
{
	speed = speed1;
}

int _declspec(dllexport) sport::getSpeed()
{
	return speed + 1;
}

void _declspec(dllexport) sport::addSpeed(int speed1)
{
	speed += speed1;
}
